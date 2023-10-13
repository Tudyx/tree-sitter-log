const rfc3339_date = /([0-9]+)-(0[1-9]|1[012])-(0[1-9]|[12][0-9]|3[01])/;
const rfc3339_delimiter = /[ tT]/;
const rfc3339_time = /([01][0-9]|2[0-3]):([0-5][0-9]):([0-5][0-9]|60)([.][0-9]+)?/;
const rfc3339_offset = /([zZ])|([+-]([01][0-9]|2[0-3]):[0-5][0-9])/;

const module_path = /\s?[-_a-zA-Z0-9:]*/;
const newline = /\r?\n/;
const ipv4 = /([0-9]{1,3}\.){3}[0-9]{1,3}(\/([0-9]|[1-2][0-9]|3[0-2]))?/;
const uuid_with_sep = /[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}/;
const uuid_without_sep = /[0-9a-f]{32}/;

// trace/verbose and debug are not in helix theme
const trace = /(TRACE|Trace|verbose|verb)/
const debug = /(DEBUG|Debug|debug|dbg)/
const info = /(HINT|INFO|INFORMATION|Info|NOTICE|II|info|information)/;
const warning = /(WARNING|WARN|WW|warning|warn)/;
const error = /(ALERT|CRITICAL|EMERGENCY|ERROR|FAILURE|FAIL|Fatal|FATAL|Error|EE|error|eror|err|fatal)/;

module.exports = grammar({
	name: 'log',

	rules: {
		logs: $ => repeat(choice($._logline, $.comment)),

		// Match an individual log line
		_logline : $ => seq (
			$.log_date,
			$.log_time,
			$.level,
			repeat($._important),
		),
		log_date : $ => $.year_month_date,
		log_time : $ => choice(
			$.time_with_offset,
			$.time_without_offset
		),
		year_month_date: $ => token(seq(rfc3339_date, rfc3339_delimiter)),
		time_with_offset: $ => token(seq(rfc3339_time, rfc3339_offset)),
		time_without_offset: $ => token(rfc3339_time),
		// comment in annotated logs
		comment: $ =>
  		token(seq(
  			"#",
  			/[^\n]+/,
  			newline
  		)),

		// Different log levels
		level: $ => choice(
      $.trace_level,
      $.debug_level,
      $.info_level,
      $.warning_level,
      $.error_level,
		),
    trace_level : $ => trace,
    debug_level : $ => debug,
    info_level : $ => info,
		warning_level : $ => warning,
    error_level : $ => error,    

		// quoted string
		quoted_string: $ => choice(
			seq(
				'"',
				repeat(token.immediate(prec(1, /[^"\n]+/)),),
				'"'
			),
			seq(
				"'",
				repeat(token.immediate(prec(1, /[^'\n]+/)),),
				"'"
			),
		),

		_important: $ => choice(
			$.constant,
			$.quoted_string,
		),

		// uuid with or without separators
		_uuid: $ => choice(
			uuid_with_sep,
			uuid_without_sep
		),

		// ipv4 with optional subnet and optional port
		_ipv4: $ => seq(
			ipv4,
			optional(/[:]\d+/),
		),
		true_or_false : $ => /true|True|false|False|null|None/,

		// Add any additional captures here!
		constant : $ => choice(
			$._ipv4,
			$._uuid,
			/\d+/,
			$.true_or_false
		),

	}
});
