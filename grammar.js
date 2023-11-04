const
	hexDigit = /[0-9a-fA-F]/,
	hexDigits = seq(hexDigit, repeat(seq(optional('_'), hexDigit))),
	// example: 2022-12-25
	rfc3339_date = /([0-9]+)-(0[1-9]|1[012])-(0[1-9]|[12][0-9]|3[01])/,
	// example: 25/12/2022
	cultural_date = /(0[1-9]|[12][0-9]|3[01])[-\./](0[1-9]|1[012])[-\./]([0-9]+)/,
	rfc3339_delimiter = /[ tT]/,
	// example: 09:29:02
	rfc3339_time = /([01][0-9]|2[0-3]):([0-5][0-9])(:([0-5][0-9]|60))?([\.,][0-9]+)?/,
	rfc3339_offset = /([zZ])|([+-]([01][0-9]|2[0-3]):[0-5][0-9])/;

module.exports = grammar({
	name: 'log',
	// word: $ => $.word,

	rules: {
		log_file: $ => repeat(
			choice(
				$.log_level,
				$.date,
				$.string_literal,
				$.number,
				$.constant,
				$._word_separator,
				$.word
			)
		),

		// Log level detection.
		log_level: $ => choice(
			$.trace,
			$.debug,
			$.info,
			$.warn,
			$.error,
		),
		trace: $ => token(seq(choice("trace", "Trace", "TRACE", "verbose", "verb"), optional(":"))),
		debug: $ => token(seq(choice("debug", "Debug", "DEBUG"), optional(":"))),
		info: $ => token(seq(choice("info", "Info", "INFO"), optional(":"))),
		warn: $ => token(seq(choice("warn", "Warn", "WARN", "warning", "Warning", "WARNING"), optional(":"))),
		error: $ => token(seq(choice("error", "Error", "ERROR", "ALERT", "CRITICAL", "EMERGENCY", "FAILURE", "FAIL", "fatal", "Fatal", "FATAL"), optional(":"))),


		// Date and time detection.
		date: $ => choice(
			$.year_month_day,
			$.time,
		),
		year_month_day: $ => token(seq(choice(rfc3339_date, cultural_date), optional(rfc3339_delimiter))),
		time: $ => choice(
			$._time_with_offset,
			$._time_without_offset
		),
		_time_with_offset: $ => token(seq(rfc3339_time, optional(' '), rfc3339_offset)),
		_time_without_offset: $ => token(rfc3339_time),

		constant: $ => choice("true", "True", "false", "False"),

		// String literal detection.
		// https://github.com/tree-sitter/tree-sitter-go/blob/bbaa67a180cfe0c943e50c55130918be8efb20bd/grammar.js#L850C1-L880C8
		string_literal: $ => choice(
			$._raw_string_literal,
			$._interpreted_double_string,
			$._interpreted_single_string,
		),

		_raw_string_literal: _ => token(seq(
			'`',
			repeat(/[^`]/),
			'`',
		)),
		_interpreted_double_string: $ => seq(
			'"',
			repeat(choice(
				$._interpreted_double_string_basic_content,
				$._escape_sequence,
			)),
			token.immediate('"'),
		),
		_interpreted_double_string_basic_content: _ => token.immediate(prec(1, /[^"\n\\]+/)),
		_escape_sequence: _ => token.immediate(seq(
			'\\',
			choice(
				/[^xuU]/,
				/\d{2,3}/,
				/x[0-9a-fA-F]{2,}/,
				/u[0-9a-fA-F]{4}/,
				/U[0-9a-fA-F]{8}/,
			),
		)),

		_interpreted_single_string: $ => seq(
			token(prec(50,"'")),
			repeat(choice(
				$._interpreted_single_string_basic_content,
				$._escape_sequence,
			)),
			token.immediate("'"),
		),
		_interpreted_single_string_basic_content: _ => token.immediate(prec(1, /[^'\n\\]+/)),

		// Number, ipv6, git hash..
		number: $ => choice(
			token(sep1(hexDigits, /[-\./:](:)?/)),
			choice(
				/\d+/,
				/[0-9a-fA-F]{40}/,
				/[0-9a-fA-F]{32}/,
				/[0-9a-fA-F]{10}/,
				/[0-9a-fA-F]{7}/,
				/0x[a-fA-F0-9]+/)
		),

		_word_separator: $ => choice(
			'(',
			')',
			'T',
			'[',
			']',
			'{',
			'}',
			'=',
			'"',
			',',
			':',
			'/',
			'-'
		),
		// Match all other things in the log which are not highlighted
		// Excluded token alllow to match inside word.
		word: $ => /[^()T\[\]{}="\s,:/\-]+/,
	}

});

/**
 * Creates a rule to match one or more occurrences of `rule` separated by `sep`
 *
 * @param {RuleOrLiteral} rule
 *
 * @param {RuleOrLiteral} separator
 *
 * @return {SeqRule}
 *
 */
function sep1(rule, separator) {
	return seq(rule, repeat1(seq(separator, rule)));
}
