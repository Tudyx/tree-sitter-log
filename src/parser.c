#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 20
#define SYMBOL_COUNT 109
#define ALIAS_COUNT 0
#define TOKEN_COUNT 91
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_trace_COLON = 1,
  anon_sym_Trace = 2,
  anon_sym_TRACE = 3,
  anon_sym_LBRACKtrace_RBRACK = 4,
  anon_sym_Verbose = 5,
  anon_sym_VERBOSE = 6,
  anon_sym_LBRACKverbose_RBRACK = 7,
  anon_sym_V_SLASH = 8,
  anon_sym_LBRACKverb_RBRACK = 9,
  anon_sym_LBRACKvrb_RBRACK = 10,
  anon_sym_LBRACKvb_RBRACK = 11,
  anon_sym_LBRACKv_RBRACK = 12,
  anon_sym_debug_COLON = 13,
  anon_sym_Debug = 14,
  anon_sym_DEBUG = 15,
  anon_sym_D_SLASH = 16,
  anon_sym_LBRACKdbug_RBRACK = 17,
  anon_sym_LBRACKdbg_RBRACK = 18,
  anon_sym_LBRACKde_RBRACK = 19,
  anon_sym_LBRACKd_RBRACK = 20,
  anon_sym_information_COLON = 21,
  anon_sym_Info = 22,
  anon_sym_INFO = 23,
  anon_sym_INFORMATION = 24,
  anon_sym_NOTICE = 25,
  anon_sym_I_SLASH = 26,
  anon_sym_LBRACKinfo_RBRACK = 27,
  anon_sym_LBRACKinf_RBRACK = 28,
  anon_sym_LBRACKin_RBRACK = 29,
  anon_sym_LBRACKi_RBRACK = 30,
  anon_sym_warning_COLON = 31,
  anon_sym_Warn = 32,
  anon_sym_WARN = 33,
  anon_sym_WARNING = 34,
  anon_sym_W_SLASH = 35,
  anon_sym_Warning = 36,
  anon_sym_LBRACKwarn_RBRACK = 37,
  anon_sym_LBRACKwrn_RBRACK = 38,
  anon_sym_LBRACKwn_RBRACK = 39,
  anon_sym_LBRACKw_RBRACK = 40,
  anon_sym_error_COLON = 41,
  anon_sym_Error = 42,
  anon_sym_ERROR = 43,
  anon_sym_ALERT = 44,
  anon_sym_CRITICAL = 45,
  anon_sym_EMERGENCY = 46,
  anon_sym_FAILURE = 47,
  anon_sym_FAIL = 48,
  anon_sym_Fatal = 49,
  anon_sym_FATAL = 50,
  anon_sym_E_SLASH = 51,
  anon_sym_LBRACKeror_RBRACK = 52,
  anon_sym_LBRACKerr_RBRACK = 53,
  anon_sym_LBRACKer_RBRACK = 54,
  anon_sym_LBRACKe_RBRACK = 55,
  sym_year_month_day = 56,
  sym__time_with_offset = 57,
  sym__time_without_offset = 58,
  anon_sym_true = 59,
  anon_sym_True = 60,
  anon_sym_false = 61,
  anon_sym_False = 62,
  anon_sym_null = 63,
  sym__raw_string_literal = 64,
  anon_sym_DQUOTE = 65,
  anon_sym_DQUOTE2 = 66,
  sym__interpreted_double_string_basic_content = 67,
  sym__escape_sequence = 68,
  anon_sym_SQUOTE = 69,
  anon_sym_SQUOTE2 = 70,
  sym__interpreted_single_string_basic_content = 71,
  aux_sym_number_token1 = 72,
  aux_sym_number_token2 = 73,
  aux_sym_number_token3 = 74,
  aux_sym_number_token4 = 75,
  aux_sym_number_token5 = 76,
  aux_sym_number_token6 = 77,
  aux_sym_number_token7 = 78,
  anon_sym_LPAREN = 79,
  anon_sym_RPAREN = 80,
  anon_sym_LBRACK = 81,
  anon_sym_RBRACK = 82,
  anon_sym_LBRACE = 83,
  anon_sym_RBRACE = 84,
  anon_sym_EQ = 85,
  anon_sym_COMMA = 86,
  anon_sym_COLON = 87,
  anon_sym_SLASH = 88,
  anon_sym_DASH = 89,
  sym_word = 90,
  sym_log_file = 91,
  sym_log_level = 92,
  sym_trace = 93,
  sym_debug = 94,
  sym_info = 95,
  sym_warn = 96,
  sym_error = 97,
  sym_date = 98,
  sym_time = 99,
  sym_constant = 100,
  sym_string_literal = 101,
  sym__interpreted_double_string = 102,
  sym__interpreted_single_string = 103,
  sym_number = 104,
  sym__word_separator = 105,
  aux_sym_log_file_repeat1 = 106,
  aux_sym__interpreted_double_string_repeat1 = 107,
  aux_sym__interpreted_single_string_repeat1 = 108,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_trace_COLON] = "trace:",
  [anon_sym_Trace] = "Trace",
  [anon_sym_TRACE] = "TRACE",
  [anon_sym_LBRACKtrace_RBRACK] = "[trace]",
  [anon_sym_Verbose] = "Verbose",
  [anon_sym_VERBOSE] = "VERBOSE",
  [anon_sym_LBRACKverbose_RBRACK] = "[verbose]",
  [anon_sym_V_SLASH] = "V/",
  [anon_sym_LBRACKverb_RBRACK] = "[verb]",
  [anon_sym_LBRACKvrb_RBRACK] = "[vrb]",
  [anon_sym_LBRACKvb_RBRACK] = "[vb]",
  [anon_sym_LBRACKv_RBRACK] = "[v]",
  [anon_sym_debug_COLON] = "debug:",
  [anon_sym_Debug] = "Debug",
  [anon_sym_DEBUG] = "DEBUG",
  [anon_sym_D_SLASH] = "D/",
  [anon_sym_LBRACKdbug_RBRACK] = "[dbug]",
  [anon_sym_LBRACKdbg_RBRACK] = "[dbg]",
  [anon_sym_LBRACKde_RBRACK] = "[de]",
  [anon_sym_LBRACKd_RBRACK] = "[d]",
  [anon_sym_information_COLON] = "information:",
  [anon_sym_Info] = "Info",
  [anon_sym_INFO] = "INFO",
  [anon_sym_INFORMATION] = "INFORMATION",
  [anon_sym_NOTICE] = "NOTICE",
  [anon_sym_I_SLASH] = "I/",
  [anon_sym_LBRACKinfo_RBRACK] = "[info]",
  [anon_sym_LBRACKinf_RBRACK] = "[inf]",
  [anon_sym_LBRACKin_RBRACK] = "[in]",
  [anon_sym_LBRACKi_RBRACK] = "[i]",
  [anon_sym_warning_COLON] = "warning:",
  [anon_sym_Warn] = "Warn",
  [anon_sym_WARN] = "WARN",
  [anon_sym_WARNING] = "WARNING",
  [anon_sym_W_SLASH] = "W/",
  [anon_sym_Warning] = "Warning",
  [anon_sym_LBRACKwarn_RBRACK] = "[warn]",
  [anon_sym_LBRACKwrn_RBRACK] = "[wrn]",
  [anon_sym_LBRACKwn_RBRACK] = "[wn]",
  [anon_sym_LBRACKw_RBRACK] = "[w]",
  [anon_sym_error_COLON] = "error:",
  [anon_sym_Error] = "Error",
  [anon_sym_ERROR] = "ERROR",
  [anon_sym_ALERT] = "ALERT",
  [anon_sym_CRITICAL] = "CRITICAL",
  [anon_sym_EMERGENCY] = "EMERGENCY",
  [anon_sym_FAILURE] = "FAILURE",
  [anon_sym_FAIL] = "FAIL",
  [anon_sym_Fatal] = "Fatal",
  [anon_sym_FATAL] = "FATAL",
  [anon_sym_E_SLASH] = "E/",
  [anon_sym_LBRACKeror_RBRACK] = "[eror]",
  [anon_sym_LBRACKerr_RBRACK] = "[err]",
  [anon_sym_LBRACKer_RBRACK] = "[er]",
  [anon_sym_LBRACKe_RBRACK] = "[e]",
  [sym_year_month_day] = "year_month_day",
  [sym__time_with_offset] = "_time_with_offset",
  [sym__time_without_offset] = "_time_without_offset",
  [anon_sym_true] = "true",
  [anon_sym_True] = "True",
  [anon_sym_false] = "false",
  [anon_sym_False] = "False",
  [anon_sym_null] = "null",
  [sym__raw_string_literal] = "_raw_string_literal",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [sym__interpreted_double_string_basic_content] = "_interpreted_double_string_basic_content",
  [sym__escape_sequence] = "_escape_sequence",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_SQUOTE2] = "'",
  [sym__interpreted_single_string_basic_content] = "_interpreted_single_string_basic_content",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [aux_sym_number_token3] = "number_token3",
  [aux_sym_number_token4] = "number_token4",
  [aux_sym_number_token5] = "number_token5",
  [aux_sym_number_token6] = "number_token6",
  [aux_sym_number_token7] = "number_token7",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_SLASH] = "/",
  [anon_sym_DASH] = "-",
  [sym_word] = "word",
  [sym_log_file] = "log_file",
  [sym_log_level] = "log_level",
  [sym_trace] = "trace",
  [sym_debug] = "debug",
  [sym_info] = "info",
  [sym_warn] = "warn",
  [sym_error] = "error",
  [sym_date] = "date",
  [sym_time] = "time",
  [sym_constant] = "constant",
  [sym_string_literal] = "string_literal",
  [sym__interpreted_double_string] = "_interpreted_double_string",
  [sym__interpreted_single_string] = "_interpreted_single_string",
  [sym_number] = "number",
  [sym__word_separator] = "_word_separator",
  [aux_sym_log_file_repeat1] = "log_file_repeat1",
  [aux_sym__interpreted_double_string_repeat1] = "_interpreted_double_string_repeat1",
  [aux_sym__interpreted_single_string_repeat1] = "_interpreted_single_string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_trace_COLON] = anon_sym_trace_COLON,
  [anon_sym_Trace] = anon_sym_Trace,
  [anon_sym_TRACE] = anon_sym_TRACE,
  [anon_sym_LBRACKtrace_RBRACK] = anon_sym_LBRACKtrace_RBRACK,
  [anon_sym_Verbose] = anon_sym_Verbose,
  [anon_sym_VERBOSE] = anon_sym_VERBOSE,
  [anon_sym_LBRACKverbose_RBRACK] = anon_sym_LBRACKverbose_RBRACK,
  [anon_sym_V_SLASH] = anon_sym_V_SLASH,
  [anon_sym_LBRACKverb_RBRACK] = anon_sym_LBRACKverb_RBRACK,
  [anon_sym_LBRACKvrb_RBRACK] = anon_sym_LBRACKvrb_RBRACK,
  [anon_sym_LBRACKvb_RBRACK] = anon_sym_LBRACKvb_RBRACK,
  [anon_sym_LBRACKv_RBRACK] = anon_sym_LBRACKv_RBRACK,
  [anon_sym_debug_COLON] = anon_sym_debug_COLON,
  [anon_sym_Debug] = anon_sym_Debug,
  [anon_sym_DEBUG] = anon_sym_DEBUG,
  [anon_sym_D_SLASH] = anon_sym_D_SLASH,
  [anon_sym_LBRACKdbug_RBRACK] = anon_sym_LBRACKdbug_RBRACK,
  [anon_sym_LBRACKdbg_RBRACK] = anon_sym_LBRACKdbg_RBRACK,
  [anon_sym_LBRACKde_RBRACK] = anon_sym_LBRACKde_RBRACK,
  [anon_sym_LBRACKd_RBRACK] = anon_sym_LBRACKd_RBRACK,
  [anon_sym_information_COLON] = anon_sym_information_COLON,
  [anon_sym_Info] = anon_sym_Info,
  [anon_sym_INFO] = anon_sym_INFO,
  [anon_sym_INFORMATION] = anon_sym_INFORMATION,
  [anon_sym_NOTICE] = anon_sym_NOTICE,
  [anon_sym_I_SLASH] = anon_sym_I_SLASH,
  [anon_sym_LBRACKinfo_RBRACK] = anon_sym_LBRACKinfo_RBRACK,
  [anon_sym_LBRACKinf_RBRACK] = anon_sym_LBRACKinf_RBRACK,
  [anon_sym_LBRACKin_RBRACK] = anon_sym_LBRACKin_RBRACK,
  [anon_sym_LBRACKi_RBRACK] = anon_sym_LBRACKi_RBRACK,
  [anon_sym_warning_COLON] = anon_sym_warning_COLON,
  [anon_sym_Warn] = anon_sym_Warn,
  [anon_sym_WARN] = anon_sym_WARN,
  [anon_sym_WARNING] = anon_sym_WARNING,
  [anon_sym_W_SLASH] = anon_sym_W_SLASH,
  [anon_sym_Warning] = anon_sym_Warning,
  [anon_sym_LBRACKwarn_RBRACK] = anon_sym_LBRACKwarn_RBRACK,
  [anon_sym_LBRACKwrn_RBRACK] = anon_sym_LBRACKwrn_RBRACK,
  [anon_sym_LBRACKwn_RBRACK] = anon_sym_LBRACKwn_RBRACK,
  [anon_sym_LBRACKw_RBRACK] = anon_sym_LBRACKw_RBRACK,
  [anon_sym_error_COLON] = anon_sym_error_COLON,
  [anon_sym_Error] = anon_sym_Error,
  [anon_sym_ERROR] = anon_sym_ERROR,
  [anon_sym_ALERT] = anon_sym_ALERT,
  [anon_sym_CRITICAL] = anon_sym_CRITICAL,
  [anon_sym_EMERGENCY] = anon_sym_EMERGENCY,
  [anon_sym_FAILURE] = anon_sym_FAILURE,
  [anon_sym_FAIL] = anon_sym_FAIL,
  [anon_sym_Fatal] = anon_sym_Fatal,
  [anon_sym_FATAL] = anon_sym_FATAL,
  [anon_sym_E_SLASH] = anon_sym_E_SLASH,
  [anon_sym_LBRACKeror_RBRACK] = anon_sym_LBRACKeror_RBRACK,
  [anon_sym_LBRACKerr_RBRACK] = anon_sym_LBRACKerr_RBRACK,
  [anon_sym_LBRACKer_RBRACK] = anon_sym_LBRACKer_RBRACK,
  [anon_sym_LBRACKe_RBRACK] = anon_sym_LBRACKe_RBRACK,
  [sym_year_month_day] = sym_year_month_day,
  [sym__time_with_offset] = sym__time_with_offset,
  [sym__time_without_offset] = sym__time_without_offset,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_False] = anon_sym_False,
  [anon_sym_null] = anon_sym_null,
  [sym__raw_string_literal] = sym__raw_string_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym__interpreted_double_string_basic_content] = sym__interpreted_double_string_basic_content,
  [sym__escape_sequence] = sym__escape_sequence,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [sym__interpreted_single_string_basic_content] = sym__interpreted_single_string_basic_content,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [aux_sym_number_token3] = aux_sym_number_token3,
  [aux_sym_number_token4] = aux_sym_number_token4,
  [aux_sym_number_token5] = aux_sym_number_token5,
  [aux_sym_number_token6] = aux_sym_number_token6,
  [aux_sym_number_token7] = aux_sym_number_token7,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_word] = sym_word,
  [sym_log_file] = sym_log_file,
  [sym_log_level] = sym_log_level,
  [sym_trace] = sym_trace,
  [sym_debug] = sym_debug,
  [sym_info] = sym_info,
  [sym_warn] = sym_warn,
  [sym_error] = sym_error,
  [sym_date] = sym_date,
  [sym_time] = sym_time,
  [sym_constant] = sym_constant,
  [sym_string_literal] = sym_string_literal,
  [sym__interpreted_double_string] = sym__interpreted_double_string,
  [sym__interpreted_single_string] = sym__interpreted_single_string,
  [sym_number] = sym_number,
  [sym__word_separator] = sym__word_separator,
  [aux_sym_log_file_repeat1] = aux_sym_log_file_repeat1,
  [aux_sym__interpreted_double_string_repeat1] = aux_sym__interpreted_double_string_repeat1,
  [aux_sym__interpreted_single_string_repeat1] = aux_sym__interpreted_single_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_trace_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Trace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKtrace_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Verbose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_VERBOSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKverbose_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_V_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKverb_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKvrb_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKvb_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKv_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Debug] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DEBUG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_D_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKdbug_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKdbg_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKde_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKd_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_information_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Info] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INFO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INFORMATION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOTICE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_I_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKinfo_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKinf_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKin_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKi_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_warning_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Warn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WARN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WARNING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_W_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Warning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKwarn_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKwrn_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKwn_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKw_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Error] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ERROR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ALERT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CRITICAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EMERGENCY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FAILURE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FAIL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Fatal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FATAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKeror_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKerr_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKer_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACKe_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_year_month_day] = {
    .visible = true,
    .named = true,
  },
  [sym__time_with_offset] = {
    .visible = false,
    .named = true,
  },
  [sym__time_without_offset] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [sym__raw_string_literal] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym__interpreted_double_string_basic_content] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym__interpreted_single_string_basic_content] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_number_token7] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [sym_log_file] = {
    .visible = true,
    .named = true,
  },
  [sym_log_level] = {
    .visible = true,
    .named = true,
  },
  [sym_trace] = {
    .visible = true,
    .named = true,
  },
  [sym_debug] = {
    .visible = true,
    .named = true,
  },
  [sym_info] = {
    .visible = true,
    .named = true,
  },
  [sym_warn] = {
    .visible = true,
    .named = true,
  },
  [sym_error] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__interpreted_double_string] = {
    .visible = false,
    .named = true,
  },
  [sym__interpreted_single_string] = {
    .visible = false,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym__word_separator] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_log_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interpreted_double_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__interpreted_single_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
};

static inline bool sym__raw_string_literal_character_set_1(int32_t c) {
  return (c < '/'
    ? (c < '"'
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= '-')))
    : (c <= '/' || (c < ']'
      ? (c < '='
        ? c == ':'
        : (c <= '=' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym__interpreted_double_string_basic_content_character_set_1(int32_t c) {
  return (c < '='
    ? (c < '('
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= ')' || c == ','))
    : (c <= '=' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym__interpreted_double_string_basic_content_character_set_2(int32_t c) {
  return (c < '='
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= ' ' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= '=' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym__interpreted_double_string_basic_content_character_set_3(int32_t c) {
  return (c < ':'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= ' ' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= '-')))
    : (c <= ':' || (c < ']'
      ? (c < '['
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym__interpreted_double_string_basic_content_character_set_4(int32_t c) {
  return (c < '/'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= ' ' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= '-')))
    : (c <= '/' || (c < ']'
      ? (c < '['
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym__interpreted_double_string_basic_content_character_set_5(int32_t c) {
  return (c < ':'
    ? (c < '('
      ? (c < '\r'
        ? c == '\t'
        : (c <= '\r' || c == ' '))
      : (c <= ')' || (c < '/'
        ? (c >= ',' && c <= '-')
        : c <= '/')))
    : (c <= ':' || (c < ']'
      ? (c < '['
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym__escape_sequence_character_set_1(int32_t c) {
  return (c < '/'
    ? (c < '"'
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= '-')))
    : (c <= ':' || (c < ']'
      ? (c < '['
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_1(int32_t c) {
  return (c < '/'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '('
        ? c == '"'
        : (c <= ')' || (c >= ',' && c <= '-')))))
    : (c <= '/' || (c < ']'
      ? (c < '='
        ? c == ':'
        : (c <= '=' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_2(int32_t c) {
  return (c < ','
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_3(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= '-' || (c < ']'
      ? (c < '='
        ? (c >= '/' && c <= ':')
        : (c <= '=' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_4(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_5(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= '-' || (c < ']'
      ? (c < '='
        ? c == ':'
        : (c <= '=' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_6(int32_t c) {
  return (c < ','
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= '-' || (c < ']'
      ? (c < '='
        ? c == '/'
        : (c <= '=' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(241);
      if (lookahead == '\n') SKIP(239)
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(682);
      if (lookahead == '(') ADVANCE(675);
      if (lookahead == ')') ADVANCE(675);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == '-') ADVANCE(675);
      if (lookahead == '/') ADVANCE(675);
      if (lookahead == '0') ADVANCE(360);
      if (lookahead == '1') ADVANCE(365);
      if (lookahead == '2') ADVANCE(363);
      if (lookahead == '3') ADVANCE(362);
      if (lookahead == ':') ADVANCE(675);
      if (lookahead == '=') ADVANCE(675);
      if (lookahead == 'A') ADVANCE(466);
      if (lookahead == 'C') ADVANCE(491);
      if (lookahead == 'D') ADVANCE(399);
      if (lookahead == 'E') ADVANCE(400);
      if (lookahead == 'F') ADVANCE(424);
      if (lookahead == 'I') ADVANCE(397);
      if (lookahead == 'N') ADVANCE(480);
      if (lookahead == 'T') ADVANCE(492);
      if (lookahead == 'V') ADVANCE(395);
      if (lookahead == 'W') ADVANCE(393);
      if (lookahead == '[') ADVANCE(583);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead == ']') ADVANCE(675);
      if (lookahead == '`') ADVANCE(561);
      if (lookahead == 'd') ADVANCE(537);
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead == 'f') ADVANCE(534);
      if (lookahead == 'i') ADVANCE(620);
      if (lookahead == 'n') ADVANCE(663);
      if (lookahead == 't') ADVANCE(656);
      if (lookahead == 'w') ADVANCE(571);
      if (lookahead == '{') ADVANCE(675);
      if (lookahead == '}') ADVANCE(675);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(560);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (lookahead != 0) ADVANCE(675);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(683);
      if (lookahead == '\\') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(684);
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(263);
      if (lookahead == 'E') ADVANCE(32);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(315);
      if (lookahead == 'M') ADVANCE(44);
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(203);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(277);
      if (lookahead == 'N') ADVANCE(45);
      if (lookahead == 'n') ADVANCE(175);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == 'E') ADVANCE(70);
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(289);
      if (lookahead == 'A') ADVANCE(71);
      if (lookahead == 'a') ADVANCE(207);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(699);
      if (lookahead == '1') ADVANCE(695);
      if (lookahead == ':') ADVANCE(229);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(322);
      if (lookahead == '3') ADVANCE(323);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(324);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 10:
      if (lookahead == '0') ADVANCE(700);
      if (lookahead == '1') ADVANCE(696);
      if (lookahead == ':') ADVANCE(229);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 11:
      if (lookahead == '0') ADVANCE(701);
      if (lookahead == '1') ADVANCE(697);
      if (lookahead == ':') ADVANCE(229);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(702);
      if (lookahead == '3') ADVANCE(694);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(704);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 13:
      if (lookahead == '2') ADVANCE(223);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(227);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(698);
      if (lookahead == ':') ADVANCE(229);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(707);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 15:
      if (lookahead == '6') ADVANCE(691);
      if (lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(705);
      if (('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(258);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(296);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(242);
      END_STATE();
    case 19:
      if (lookahead == ':') ADVANCE(282);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(224);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(268);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(703);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 23:
      if (lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(706);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 24:
      if (lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 25:
      if (lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 27:
      if (lookahead == 'A') ADVANCE(49);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'a') ADVANCE(111);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 28:
      if (lookahead == 'A') ADVANCE(35);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(56);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(81);
      END_STATE();
    case 32:
      if (lookahead == 'B') ADVANCE(83);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 33:
      if (lookahead == 'B') ADVANCE(65);
      END_STATE();
    case 34:
      if (lookahead == 'C') ADVANCE(84);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(39);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(30);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(245);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(275);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(307);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(250);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(61);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(74);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(75);
      END_STATE();
    case 45:
      if (lookahead == 'F') ADVANCE(64);
      END_STATE();
    case 46:
      if (lookahead == 'G') ADVANCE(261);
      END_STATE();
    case 47:
      if (lookahead == 'G') ADVANCE(287);
      END_STATE();
    case 48:
      if (lookahead == 'G') ADVANCE(42);
      END_STATE();
    case 49:
      if (lookahead == 'I') ADVANCE(55);
      if (lookahead == 'T') ADVANCE(29);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 50:
      if (lookahead == 'I') ADVANCE(37);
      END_STATE();
    case 51:
      if (lookahead == 'I') ADVANCE(66);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(80);
      END_STATE();
    case 53:
      if (lookahead == 'I') ADVANCE(36);
      END_STATE();
    case 54:
      if (lookahead == 'L') ADVANCE(43);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 55:
      if (lookahead == 'L') ADVANCE(309);
      END_STATE();
    case 56:
      if (lookahead == 'L') ADVANCE(313);
      END_STATE();
    case 57:
      if (lookahead == 'L') ADVANCE(303);
      END_STATE();
    case 58:
      if (lookahead == 'M') ADVANCE(31);
      END_STATE();
    case 59:
      if (lookahead == 'N') ADVANCE(285);
      END_STATE();
    case 60:
      if (lookahead == 'N') ADVANCE(273);
      END_STATE();
    case 61:
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 62:
      if (lookahead == 'N') ADVANCE(47);
      END_STATE();
    case 63:
      if (lookahead == 'O') ADVANCE(79);
      END_STATE();
    case 64:
      if (lookahead == 'O') ADVANCE(271);
      END_STATE();
    case 65:
      if (lookahead == 'O') ADVANCE(77);
      END_STATE();
    case 66:
      if (lookahead == 'O') ADVANCE(60);
      END_STATE();
    case 67:
      if (lookahead == 'O') ADVANCE(72);
      END_STATE();
    case 68:
      if (lookahead == 'R') ADVANCE(52);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 69:
      if (lookahead == 'R') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 70:
      if (lookahead == 'R') ADVANCE(33);
      END_STATE();
    case 71:
      if (lookahead == 'R') ADVANCE(59);
      END_STATE();
    case 72:
      if (lookahead == 'R') ADVANCE(299);
      END_STATE();
    case 73:
      if (lookahead == 'R') ADVANCE(67);
      END_STATE();
    case 74:
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 75:
      if (lookahead == 'R') ADVANCE(48);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(40);
      END_STATE();
    case 77:
      if (lookahead == 'S') ADVANCE(41);
      END_STATE();
    case 78:
      if (lookahead == 'T') ADVANCE(301);
      END_STATE();
    case 79:
      if (lookahead == 'T') ADVANCE(53);
      END_STATE();
    case 80:
      if (lookahead == 'T') ADVANCE(50);
      END_STATE();
    case 81:
      if (lookahead == 'T') ADVANCE(51);
      END_STATE();
    case 82:
      if (lookahead == 'U') ADVANCE(237);
      if (lookahead == 'u') ADVANCE(233);
      if (lookahead == 'x') ADVANCE(231);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(679);
      if (lookahead != 0) ADVANCE(676);
      END_STATE();
    case 83:
      if (lookahead == 'U') ADVANCE(46);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 84:
      if (lookahead == 'Y') ADVANCE(305);
      END_STATE();
    case 85:
      if (lookahead == ']') ADVANCE(267);
      if (lookahead == 'b') ADVANCE(180);
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 86:
      if (lookahead == ']') ADVANCE(319);
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 87:
      if (lookahead == ']') ADVANCE(281);
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 88:
      if (lookahead == ']') ADVANCE(257);
      if (lookahead == 'b') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(210);
      if (lookahead == 'r') ADVANCE(162);
      END_STATE();
    case 89:
      if (lookahead == ']') ADVANCE(295);
      if (lookahead == 'a') ADVANCE(215);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 90:
      if (lookahead == ']') ADVANCE(266);
      END_STATE();
    case 91:
      if (lookahead == ']') ADVANCE(318);
      if (lookahead == 'o') ADVANCE(212);
      if (lookahead == 'r') ADVANCE(96);
      END_STATE();
    case 92:
      if (lookahead == ']') ADVANCE(280);
      if (lookahead == 'f') ADVANCE(97);
      END_STATE();
    case 93:
      if (lookahead == ']') ADVANCE(256);
      END_STATE();
    case 94:
      if (lookahead == ']') ADVANCE(294);
      END_STATE();
    case 95:
      if (lookahead == ']') ADVANCE(265);
      END_STATE();
    case 96:
      if (lookahead == ']') ADVANCE(317);
      END_STATE();
    case 97:
      if (lookahead == ']') ADVANCE(279);
      if (lookahead == 'o') ADVANCE(102);
      END_STATE();
    case 98:
      if (lookahead == ']') ADVANCE(255);
      END_STATE();
    case 99:
      if (lookahead == ']') ADVANCE(293);
      END_STATE();
    case 100:
      if (lookahead == ']') ADVANCE(264);
      END_STATE();
    case 101:
      if (lookahead == ']') ADVANCE(316);
      END_STATE();
    case 102:
      if (lookahead == ']') ADVANCE(278);
      END_STATE();
    case 103:
      if (lookahead == ']') ADVANCE(254);
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 104:
      if (lookahead == ']') ADVANCE(292);
      END_STATE();
    case 105:
      if (lookahead == ']') ADVANCE(247);
      END_STATE();
    case 106:
      if (lookahead == ']') ADVANCE(252);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'a') ADVANCE(112);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 108:
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(114);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'b') ADVANCE(115);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(109);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 111:
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead == 't') ADVANCE(156);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 112:
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'l') ADVANCE(217);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 113:
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'r') ADVANCE(214);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 114:
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(177);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 115:
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'u') ADVANCE(178);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 116:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(810);
      END_STATE();
    case 117:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(808);
      END_STATE();
    case 118:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(806);
      END_STATE();
    case 119:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(804);
      END_STATE();
    case 120:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 121:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 122:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 123:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 124:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 125:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 126:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 127:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 128:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 129:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 130:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 131:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 132:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 133:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 134:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 135:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 136:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 137:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 138:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 139:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 140:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 141:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 142:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 143:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 144:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 145:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 146:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 147:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 148:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 149:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 150:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 151:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 152:
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 153:
      if (lookahead == '`') ADVANCE(343);
      if (lookahead != 0) ADVANCE(153);
      END_STATE();
    case 154:
      if (lookahead == 'a') ADVANCE(163);
      if (lookahead == 'u') ADVANCE(166);
      END_STATE();
    case 155:
      if (lookahead == 'a') ADVANCE(220);
      END_STATE();
    case 156:
      if (lookahead == 'a') ADVANCE(186);
      END_STATE();
    case 157:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 158:
      if (lookahead == 'a') ADVANCE(164);
      if (lookahead == 'u') ADVANCE(167);
      END_STATE();
    case 159:
      if (lookahead == 'a') ADVANCE(165);
      END_STATE();
    case 160:
      if (lookahead == 'b') ADVANCE(103);
      END_STATE();
    case 161:
      if (lookahead == 'b') ADVANCE(202);
      END_STATE();
    case 162:
      if (lookahead == 'b') ADVANCE(98);
      END_STATE();
    case 163:
      if (lookahead == 'c') ADVANCE(169);
      END_STATE();
    case 164:
      if (lookahead == 'c') ADVANCE(172);
      END_STATE();
    case 165:
      if (lookahead == 'c') ADVANCE(173);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(335);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(333);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(339);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(337);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(248);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 175:
      if (lookahead == 'f') ADVANCE(197);
      END_STATE();
    case 176:
      if (lookahead == 'f') ADVANCE(201);
      END_STATE();
    case 177:
      if (lookahead == 'g') ADVANCE(259);
      END_STATE();
    case 178:
      if (lookahead == 'g') ADVANCE(16);
      END_STATE();
    case 179:
      if (lookahead == 'g') ADVANCE(290);
      END_STATE();
    case 180:
      if (lookahead == 'g') ADVANCE(95);
      if (lookahead == 'u') ADVANCE(182);
      END_STATE();
    case 181:
      if (lookahead == 'g') ADVANCE(19);
      END_STATE();
    case 182:
      if (lookahead == 'g') ADVANCE(100);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(198);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(192);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(341);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(311);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 188:
      if (lookahead == 'm') ADVANCE(155);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(184);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(179);
      END_STATE();
    case 192:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 193:
      if (lookahead == 'n') ADVANCE(21);
      END_STATE();
    case 194:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 195:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(176);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(269);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(193);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(205);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(208);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(206);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 203:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 204:
      if (lookahead == 'r') ADVANCE(161);
      END_STATE();
    case 205:
      if (lookahead == 'r') ADVANCE(297);
      END_STATE();
    case 206:
      if (lookahead == 'r') ADVANCE(188);
      END_STATE();
    case 207:
      if (lookahead == 'r') ADVANCE(189);
      END_STATE();
    case 208:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 209:
      if (lookahead == 'r') ADVANCE(159);
      END_STATE();
    case 210:
      if (lookahead == 'r') ADVANCE(160);
      END_STATE();
    case 211:
      if (lookahead == 'r') ADVANCE(190);
      END_STATE();
    case 212:
      if (lookahead == 'r') ADVANCE(101);
      END_STATE();
    case 213:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 214:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 216:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 217:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 218:
      if (lookahead == 's') ADVANCE(171);
      END_STATE();
    case 219:
      if (lookahead == 's') ADVANCE(174);
      END_STATE();
    case 220:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 222:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(327);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(20);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(225);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(327);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(676);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(811);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 235:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 236:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 237:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 238:
      if (eof) ADVANCE(241);
      if (lookahead == '\n') SKIP(240)
      if (lookahead == '"') ADVANCE(346);
      if (lookahead == '\'') ADVANCE(682);
      if (lookahead == '(') ADVANCE(675);
      if (lookahead == ')') ADVANCE(675);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == '-') ADVANCE(675);
      if (lookahead == '/') ADVANCE(675);
      if (lookahead == '0') ADVANCE(355);
      if (lookahead == '1') ADVANCE(359);
      if (lookahead == '2') ADVANCE(357);
      if (lookahead == '3') ADVANCE(356);
      if (lookahead == ':') ADVANCE(675);
      if (lookahead == '=') ADVANCE(675);
      if (lookahead == 'A') ADVANCE(377);
      if (lookahead == 'C') ADVANCE(378);
      if (lookahead == 'D') ADVANCE(372);
      if (lookahead == 'E') ADVANCE(373);
      if (lookahead == 'F') ADVANCE(374);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'N') ADVANCE(482);
      if (lookahead == 'T') ADVANCE(497);
      if (lookahead == 'V') ADVANCE(396);
      if (lookahead == 'W') ADVANCE(394);
      if (lookahead == '[') ADVANCE(583);
      if (lookahead == '\\') ADVANCE(939);
      if (lookahead == ']') ADVANCE(675);
      if (lookahead == '`') ADVANCE(562);
      if (lookahead == 'd') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == 'f') ADVANCE(380);
      if (lookahead == 'i') ADVANCE(622);
      if (lookahead == 'n') ADVANCE(664);
      if (lookahead == 't') ADVANCE(657);
      if (lookahead == 'w') ADVANCE(572);
      if (lookahead == '{') ADVANCE(675);
      if (lookahead == '}') ADVANCE(675);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(353);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(391);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (lookahead != 0) ADVANCE(672);
      END_STATE();
    case 239:
      if (eof) ADVANCE(241);
      if (lookahead == '"') ADVANCE(345);
      if (lookahead == '\'') ADVANCE(682);
      if (lookahead == '(') ADVANCE(813);
      if (lookahead == ')') ADVANCE(814);
      if (lookahead == ',') ADVANCE(820);
      if (lookahead == '-') ADVANCE(823);
      if (lookahead == '/') ADVANCE(822);
      if (lookahead == '0') ADVANCE(754);
      if (lookahead == '1') ADVANCE(758);
      if (lookahead == '2') ADVANCE(757);
      if (lookahead == '3') ADVANCE(756);
      if (lookahead == ':') ADVANCE(821);
      if (lookahead == '=') ADVANCE(819);
      if (lookahead == 'A') ADVANCE(54);
      if (lookahead == 'C') ADVANCE(68);
      if (lookahead == 'D') ADVANCE(3);
      if (lookahead == 'E') ADVANCE(4);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'I') ADVANCE(5);
      if (lookahead == 'N') ADVANCE(63);
      if (lookahead == 'T') ADVANCE(69);
      if (lookahead == 'V') ADVANCE(6);
      if (lookahead == 'W') ADVANCE(7);
      if (lookahead == '[') ADVANCE(815);
      if (lookahead == ']') ADVANCE(816);
      if (lookahead == '`') ADVANCE(153);
      if (lookahead == 'd') ADVANCE(110);
      if (lookahead == 'e') ADVANCE(113);
      if (lookahead == 'f') ADVANCE(107);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'n') ADVANCE(221);
      if (lookahead == 't') ADVANCE(213);
      if (lookahead == 'w') ADVANCE(157);
      if (lookahead == '{') ADVANCE(817);
      if (lookahead == '}') ADVANCE(818);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(133);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(239)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(774);
      END_STATE();
    case 240:
      if (eof) ADVANCE(241);
      if (lookahead == '"') ADVANCE(345);
      if (lookahead == '\'') ADVANCE(682);
      if (lookahead == '(') ADVANCE(813);
      if (lookahead == ')') ADVANCE(814);
      if (lookahead == ',') ADVANCE(820);
      if (lookahead == '-') ADVANCE(823);
      if (lookahead == '/') ADVANCE(822);
      if (lookahead == '0') ADVANCE(710);
      if (lookahead == '1') ADVANCE(713);
      if (lookahead == '2') ADVANCE(712);
      if (lookahead == '3') ADVANCE(711);
      if (lookahead == ':') ADVANCE(821);
      if (lookahead == '=') ADVANCE(819);
      if (lookahead == 'A') ADVANCE(829);
      if (lookahead == 'C') ADVANCE(830);
      if (lookahead == 'D') ADVANCE(824);
      if (lookahead == 'E') ADVANCE(825);
      if (lookahead == 'F') ADVANCE(826);
      if (lookahead == 'I') ADVANCE(878);
      if (lookahead == 'N') ADVANCE(921);
      if (lookahead == 'T') ADVANCE(926);
      if (lookahead == 'V') ADVANCE(879);
      if (lookahead == 'W') ADVANCE(880);
      if (lookahead == '[') ADVANCE(815);
      if (lookahead == ']') ADVANCE(816);
      if (lookahead == '`') ADVANCE(941);
      if (lookahead == 'd') ADVANCE(835);
      if (lookahead == 'e') ADVANCE(838);
      if (lookahead == 'f') ADVANCE(832);
      if (lookahead == 'i') ADVANCE(974);
      if (lookahead == 'n') ADVANCE(994);
      if (lookahead == 't') ADVANCE(988);
      if (lookahead == 'w') ADVANCE(945);
      if (lookahead == '{') ADVANCE(817);
      if (lookahead == '}') ADVANCE(818);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(858);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(240)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(729);
      if (lookahead != 0) ADVANCE(1004);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(anon_sym_trace_COLON);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(anon_sym_Trace);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(anon_sym_Trace);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_TRACE);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_LBRACKtrace_RBRACK);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_Verbose);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(anon_sym_Verbose);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(anon_sym_VERBOSE);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(anon_sym_VERBOSE);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_LBRACKverbose_RBRACK);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_V_SLASH);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_LBRACKverb_RBRACK);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_LBRACKvrb_RBRACK);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_LBRACKvb_RBRACK);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym_LBRACKv_RBRACK);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_debug_COLON);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_Debug);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_Debug);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_DEBUG);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_DEBUG);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_D_SLASH);
      if (lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_LBRACKdbug_RBRACK);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_LBRACKdbg_RBRACK);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_LBRACKde_RBRACK);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_LBRACKd_RBRACK);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_information_COLON);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_Info);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(anon_sym_Info);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(anon_sym_INFO);
      if (lookahead == 'R') ADVANCE(58);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_INFO);
      if (lookahead == 'R') ADVANCE(916);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_INFORMATION);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_INFORMATION);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_NOTICE);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_NOTICE);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_I_SLASH);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_LBRACKinfo_RBRACK);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_LBRACKinf_RBRACK);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_LBRACKin_RBRACK);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_LBRACKi_RBRACK);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_warning_COLON);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_Warn);
      if (lookahead == 'i') ADVANCE(971);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_Warn);
      if (lookahead == 'i') ADVANCE(191);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_WARN);
      if (lookahead == 'I') ADVANCE(62);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_WARN);
      if (lookahead == 'I') ADVANCE(920);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_WARNING);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_WARNING);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_W_SLASH);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_Warning);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_Warning);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LBRACKwarn_RBRACK);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LBRACKwrn_RBRACK);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_LBRACKwn_RBRACK);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_LBRACKw_RBRACK);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_error_COLON);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_Error);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_Error);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_ERROR);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_ERROR);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_ALERT);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_ALERT);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_CRITICAL);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_CRITICAL);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_EMERGENCY);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(anon_sym_EMERGENCY);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(anon_sym_FAILURE);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_FAILURE);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_FAIL);
      if (lookahead == 'U') ADVANCE(76);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(anon_sym_FAIL);
      if (lookahead == 'U') ADVANCE(933);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(anon_sym_Fatal);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(anon_sym_Fatal);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_FATAL);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_FATAL);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_E_SLASH);
      if (lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_LBRACKeror_RBRACK);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_LBRACKerr_RBRACK);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_LBRACKer_RBRACK);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LBRACKe_RBRACK);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_year_month_day);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == ' ') ADVANCE(320);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(326);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(689);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(1004);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '0') ADVANCE(324);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(324);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(320);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_year_month_day);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__time_with_offset);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__time_with_offset);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(222);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == ',') ADVANCE(226);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(222);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == ',') ADVANCE(226);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '.') ADVANCE(24);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(222);
      if (lookahead == '+') ADVANCE(13);
      if (lookahead == '-') ADVANCE(14);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(327);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(331);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(222);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_true);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_True);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_false);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_False);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_null);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__raw_string_literal);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ' ') ADVANCE(675);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(672);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ' ') ADVANCE(665);
      if (lookahead == '+') ADVANCE(409);
      if (lookahead == ',') ADVANCE(669);
      if (lookahead == '-') ADVANCE(410);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == '/') ADVANCE(422);
      if (lookahead == ':') ADVANCE(411);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ' ') ADVANCE(665);
      if (lookahead == '+') ADVANCE(409);
      if (lookahead == ',') ADVANCE(669);
      if (lookahead == '-') ADVANCE(410);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(422);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ' ') ADVANCE(665);
      if (lookahead == '+') ADVANCE(409);
      if (lookahead == '-') ADVANCE(410);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(675);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ' ') ADVANCE(665);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(409);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '\'') ADVANCE(682);
      if (lookahead == '(') ADVANCE(675);
      if (lookahead == ')') ADVANCE(675);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == '-') ADVANCE(675);
      if (lookahead == '/') ADVANCE(675);
      if (lookahead == '0') ADVANCE(360);
      if (lookahead == '1') ADVANCE(365);
      if (lookahead == '2') ADVANCE(363);
      if (lookahead == '3') ADVANCE(362);
      if (lookahead == ':') ADVANCE(675);
      if (lookahead == '=') ADVANCE(675);
      if (lookahead == 'A') ADVANCE(466);
      if (lookahead == 'C') ADVANCE(491);
      if (lookahead == 'D') ADVANCE(399);
      if (lookahead == 'E') ADVANCE(400);
      if (lookahead == 'F') ADVANCE(424);
      if (lookahead == 'I') ADVANCE(397);
      if (lookahead == 'N') ADVANCE(480);
      if (lookahead == 'T') ADVANCE(492);
      if (lookahead == 'V') ADVANCE(395);
      if (lookahead == 'W') ADVANCE(393);
      if (lookahead == '[') ADVANCE(583);
      if (lookahead == ']') ADVANCE(675);
      if (lookahead == '`') ADVANCE(561);
      if (lookahead == 'd') ADVANCE(537);
      if (lookahead == 'e') ADVANCE(540);
      if (lookahead == 'f') ADVANCE(534);
      if (lookahead == 'i') ADVANCE(620);
      if (lookahead == 'n') ADVANCE(663);
      if (lookahead == 't') ADVANCE(656);
      if (lookahead == 'w') ADVANCE(571);
      if (lookahead == '{') ADVANCE(675);
      if (lookahead == '}') ADVANCE(675);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(352);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(560);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '\'') ADVANCE(682);
      if (lookahead == '(') ADVANCE(675);
      if (lookahead == ')') ADVANCE(675);
      if (lookahead == ',') ADVANCE(675);
      if (lookahead == '-') ADVANCE(675);
      if (lookahead == '/') ADVANCE(675);
      if (lookahead == '0') ADVANCE(355);
      if (lookahead == '1') ADVANCE(359);
      if (lookahead == '2') ADVANCE(357);
      if (lookahead == '3') ADVANCE(356);
      if (lookahead == ':') ADVANCE(675);
      if (lookahead == '=') ADVANCE(675);
      if (lookahead == 'A') ADVANCE(377);
      if (lookahead == 'C') ADVANCE(378);
      if (lookahead == 'D') ADVANCE(372);
      if (lookahead == 'E') ADVANCE(373);
      if (lookahead == 'F') ADVANCE(374);
      if (lookahead == 'I') ADVANCE(398);
      if (lookahead == 'N') ADVANCE(482);
      if (lookahead == 'T') ADVANCE(497);
      if (lookahead == 'V') ADVANCE(396);
      if (lookahead == 'W') ADVANCE(394);
      if (lookahead == '[') ADVANCE(583);
      if (lookahead == ']') ADVANCE(675);
      if (lookahead == '`') ADVANCE(562);
      if (lookahead == 'd') ADVANCE(383);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead == 'f') ADVANCE(380);
      if (lookahead == 'i') ADVANCE(622);
      if (lookahead == 'n') ADVANCE(664);
      if (lookahead == 't') ADVANCE(657);
      if (lookahead == 'w') ADVANCE(572);
      if (lookahead == '{') ADVANCE(675);
      if (lookahead == '}') ADVANCE(675);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(353);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(391);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '/') ADVANCE(422);
      if (lookahead == ':') ADVANCE(416);
      if (lookahead == '_') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '0') ADVANCE(354);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'x') ADVANCE(671);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(422);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(422);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(368);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(369);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(368);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(369);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '0') ADVANCE(361);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'x') ADVANCE(674);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(422);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == ':') ADVANCE(416);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(370);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(422);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(371);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(370);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(401);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(408);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(402);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == '/') ADVANCE(407);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '_') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == '.') ADVANCE(405);
      if (lookahead == '/') ADVANCE(407);
      if (lookahead == ':') ADVANCE(416);
      if (lookahead == '_') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(406);
      if (lookahead == ':') ADVANCE(416);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(407);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '/') ADVANCE(422);
      if (lookahead == 'E') ADVANCE(375);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'e') ADVANCE(381);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(422);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '/') ADVANCE(422);
      if (lookahead == 'M') ADVANCE(447);
      if (lookahead == 'R') ADVANCE(505);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'r') ADVANCE(643);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(422);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == 'A') ADVANCE(376);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'a') ADVANCE(384);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == 'B') ADVANCE(379);
      if (lookahead == '_') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == 'I') ADVANCE(469);
      if (lookahead == 'T') ADVANCE(428);
      if (lookahead == '_') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == 'L') ADVANCE(445);
      if (lookahead == '_') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == 'R') ADVANCE(464);
      if (lookahead == '_') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == 'U') ADVANCE(451);
      if (lookahead == '_') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'a') ADVANCE(385);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'b') ADVANCE(387);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'b') ADVANCE(388);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'e') ADVANCE(382);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'l') ADVANCE(659);
      if (lookahead == 't') ADVANCE(568);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'l') ADVANCE(659);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'r') ADVANCE(653);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'u') ADVANCE(597);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'u') ADVANCE(598);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '_') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(392);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '_') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(392);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(421);
      if (lookahead == '_') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(420);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '_') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(419);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '/') ADVANCE(675);
      if (lookahead == 'A') ADVANCE(494);
      if (lookahead == 'a') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '/') ADVANCE(675);
      if (lookahead == 'A') ADVANCE(499);
      if (lookahead == 'a') ADVANCE(648);
      if (sym__interpreted_double_string_basic_content_character_set_3(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '/') ADVANCE(675);
      if (lookahead == 'E') ADVANCE(493);
      if (lookahead == 'e') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '/') ADVANCE(675);
      if (lookahead == 'E') ADVANCE(498);
      if (lookahead == 'e') ADVANCE(644);
      if (sym__interpreted_double_string_basic_content_character_set_3(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '/') ADVANCE(675);
      if (lookahead == 'N') ADVANCE(448);
      if (lookahead == 'n') ADVANCE(589);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '/') ADVANCE(675);
      if (lookahead == 'N') ADVANCE(449);
      if (lookahead == 'n') ADVANCE(590);
      if (sym__interpreted_double_string_basic_content_character_set_3(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '/') ADVANCE(422);
      if (lookahead == 'E') ADVANCE(431);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(535);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '/') ADVANCE(422);
      if (lookahead == 'M') ADVANCE(446);
      if (lookahead == 'R') ADVANCE(501);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'r') ADVANCE(637);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(551);
      if (lookahead == '1') ADVANCE(547);
      if (lookahead == ':') ADVANCE(673);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(403);
      if (lookahead == '3') ADVANCE(544);
      if (lookahead == ':') ADVANCE(673);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(545);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(545);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(675);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(349);
      if (lookahead == '_') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(390);
      if (lookahead == '1') ADVANCE(389);
      if (lookahead == ':') ADVANCE(673);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(675);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(552);
      if (lookahead == '1') ADVANCE(548);
      if (lookahead == ':') ADVANCE(673);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(553);
      if (lookahead == '1') ADVANCE(549);
      if (lookahead == ':') ADVANCE(673);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(554);
      if (lookahead == '3') ADVANCE(543);
      if (lookahead == ':') ADVANCE(673);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(557);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '2') ADVANCE(666);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '2') ADVANCE(550);
      if (lookahead == ':') ADVANCE(673);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(559);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '6') ADVANCE(404);
      if (lookahead == ':') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(558);
      if (('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(675);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '_') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(419);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(556);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(555);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(350);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(347);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(673);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead == '_') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'A') ADVANCE(454);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'a') ADVANCE(538);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'A') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'A') ADVANCE(438);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'A') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'A') ADVANCE(468);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'A') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'A') ADVANCE(518);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'B') ADVANCE(519);
      if (lookahead == '_') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'B') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'B') ADVANCE(483);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'C') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'C') ADVANCE(523);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'C') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'C') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'C') ADVANCE(441);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'C') ADVANCE(428);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(672);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(477);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(507);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(508);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'F') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'F') ADVANCE(489);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'G') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'G') ADVANCE(672);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'G') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'G') ADVANCE(443);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(467);
      if (lookahead == 'T') ADVANCE(427);
      if (lookahead == '_') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(438);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(439);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(475);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(485);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(516);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'L') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'L') ADVANCE(444);
      if (lookahead == '_') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'L') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'L') ADVANCE(672);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'L') ADVANCE(521);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'M') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'M') ADVANCE(430);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(672);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(451);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(435);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(460);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'O') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'O') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'O') ADVANCE(514);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'O') ADVANCE(510);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'O') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'O') ADVANCE(474);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'O') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'O') ADVANCE(496);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'O') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'O') ADVANCE(500);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(463);
      if (lookahead == '_') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(425);
      if (lookahead == 'r') ADVANCE(563);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(672);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(426);
      if (lookahead == 'r') ADVANCE(565);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(433);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(479);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(471);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(487);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(441);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(512);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(453);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'S') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'S') ADVANCE(441);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'T') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'T') ADVANCE(672);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'T') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'T') ADVANCE(456);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'T') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'T') ADVANCE(459);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'T') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'T') ADVANCE(462);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'U') ADVANCE(450);
      if (lookahead == '_') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'U') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'U') ADVANCE(506);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'Y') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'Y') ADVANCE(672);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ']') ADVANCE(675);
      if (lookahead == 'a') ADVANCE(649);
      if (lookahead == 'n') ADVANCE(533);
      if (lookahead == 'r') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ']') ADVANCE(675);
      if (lookahead == 'b') ADVANCE(594);
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ']') ADVANCE(675);
      if (lookahead == 'b') ADVANCE(533);
      if (lookahead == 'e') ADVANCE(651);
      if (lookahead == 'r') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ']') ADVANCE(675);
      if (lookahead == 'f') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ']') ADVANCE(675);
      if (lookahead == 'n') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ']') ADVANCE(675);
      if (lookahead == 'o') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ']') ADVANCE(675);
      if (lookahead == 'o') ADVANCE(639);
      if (lookahead == 'r') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ']') ADVANCE(675);
      if (lookahead == 'o') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ']') ADVANCE(675);
      if (lookahead == 'r') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ']') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'a') ADVANCE(539);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'b') ADVANCE(541);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'b') ADVANCE(542);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'e') ADVANCE(536);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'l') ADVANCE(658);
      if (lookahead == 't') ADVANCE(567);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'l') ADVANCE(658);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'r') ADVANCE(652);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'u') ADVANCE(593);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == 'u') ADVANCE(596);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(546);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(545);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(675);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(675);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(675);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(366);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(367);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(414);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(423);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(366);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(367);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(414);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(546);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(560);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(348);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(546);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(349);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(423);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(422);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '`') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(561);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '`') ADVANCE(672);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(578);
      if (lookahead == 'u') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(579);
      if (lookahead == 'u') ADVANCE(587);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(662);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(606);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(580);
      if (lookahead == 'u') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(581);
      if (lookahead == 'u') ADVANCE(587);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(655);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(582);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'b') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'b') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'b') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'b') ADVANCE(627);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'c') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'c') ADVANCE(587);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'c') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'c') ADVANCE(588);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'c') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'd') ADVANCE(525);
      if (lookahead == 'e') ADVANCE(532);
      if (lookahead == 'i') ADVANCE(528);
      if (lookahead == 't') ADVANCE(650);
      if (lookahead == 'v') ADVANCE(526);
      if (lookahead == 'w') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'e') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'e') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'e') ADVANCE(672);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'e') ADVANCE(412);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'f') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'f') ADVANCE(626);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'f') ADVANCE(635);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'f') ADVANCE(632);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'g') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'g') ADVANCE(533);
      if (lookahead == 'u') ADVANCE(595);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'g') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'g') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'g') ADVANCE(672);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'g') ADVANCE(412);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'i') ADVANCE(615);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'i') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'i') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'i') ADVANCE(618);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'i') ADVANCE(628);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'i') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'l') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'l') ADVANCE(672);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'l') ADVANCE(605);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'l') ADVANCE(606);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'm') ADVANCE(566);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'm') ADVANCE(564);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(593);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(600);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(597);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(599);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(412);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(598);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(596);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(604);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(592);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(602);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'o') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'o') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'o') ADVANCE(672);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'o') ADVANCE(659);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'o') ADVANCE(617);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'o') ADVANCE(642);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'o') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'o') ADVANCE(645);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'o') ADVANCE(646);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'o') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'o') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'o') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(672);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(629);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(577);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(412);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(609);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(616);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(631);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(623);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(569);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(570);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 's') ADVANCE(584);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 's') ADVANCE(587);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 's') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 't') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 't') ADVANCE(603);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'u') ADVANCE(607);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'u') ADVANCE(608);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(409);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(672);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(675);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(681);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1004);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(677);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1004);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym__interpreted_single_string_basic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(684);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(690);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(689);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(689);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(689);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(887);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(689);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0') ADVANCE(330);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(325);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(685);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(686);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(692);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(693);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(685);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(686);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(692);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(329);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(330);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(328);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(693);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(708);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '/') ADVANCE(26);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '_') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(722);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '0') ADVANCE(709);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == 'x') ADVANCE(995);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(800);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(799);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(726);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(800);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(799);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(800);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(715);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(845);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(723);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(841);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(717);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(846);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(732);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(842);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(719);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(847);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(738);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(843);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(721);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(848);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(752);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(844);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(714);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(849);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(716);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(809);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(718);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(850);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(720);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(851);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(722);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(724);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(853);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(725);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(854);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(726);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(727);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(856);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(728);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(857);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(751);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(807);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(730);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(859);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(731);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(860);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(733);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(861);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(734);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(862);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(735);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(863);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(736);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(805);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(737);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(864);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(739);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(865);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(740);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(866);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(741);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(867);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(742);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(868);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(743);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(869);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(744);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(870);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(745);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(871);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(746);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(872);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(747);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(873);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(748);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(874);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(749);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(875);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(750);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(876);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(753);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(803);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(753);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(877);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '0') ADVANCE(755);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(230);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(767);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(801);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(771);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(802);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(801);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(802);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(760);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(768);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(762);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(777);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(764);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(122);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(783);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(766);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(123);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(797);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(759);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(124);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(761);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(810);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(763);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(765);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(767);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(769);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(770);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(771);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(130);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(772);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(773);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(132);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(796);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(808);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(775);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(134);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(776);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(135);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(778);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(136);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(779);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(780);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(781);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(806);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(782);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(139);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(784);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(785);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(141);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(786);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(142);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(787);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(788);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(789);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(790);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(791);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(792);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(148);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(793);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(794);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(795);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(798);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(804);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(8);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(798);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(881);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '_') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(722);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == '.') ADVANCE(881);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '_') ADVANCE(888);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(722);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(767);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(10);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(767);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(877);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(152);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(862);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(876);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(151);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(846);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '_') ADVANCE(26);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(121);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(811);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(812);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1004);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == 'd') ADVANCE(85);
      if (lookahead == 'e') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(87);
      if (lookahead == 't') ADVANCE(209);
      if (lookahead == 'v') ADVANCE(88);
      if (lookahead == 'w') ADVANCE(89);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '/') ADVANCE(263);
      if (lookahead == 'E') ADVANCE(827);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == 'e') ADVANCE(833);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '/') ADVANCE(315);
      if (lookahead == 'M') ADVANCE(904);
      if (lookahead == 'R') ADVANCE(930);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == 'r') ADVANCE(981);
      if (lookahead == '-' ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == 'A') ADVANCE(828);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == 'a') ADVANCE(836);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == 'B') ADVANCE(831);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == 'I') ADVANCE(913);
      if (lookahead == 'T') ADVANCE(890);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == 'L') ADVANCE(903);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == 'R') ADVANCE(911);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == 'U') ADVANCE(906);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(849);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == 'a') ADVANCE(837);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == 'b') ADVANCE(839);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == 'b') ADVANCE(840);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == 'e') ADVANCE(834);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == 'l') ADVANCE(990);
      if (lookahead == 't') ADVANCE(944);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == 'l') ADVANCE(991);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == 'r') ADVANCE(989);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == 'u') ADVANCE(959);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(849);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (lookahead == 'u') ADVANCE(960);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(849);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(809);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(807);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(805);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(803);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(841);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(842);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(843);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(844);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(845);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(847);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(848);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(849);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(850);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(851);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(852);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(853);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(854);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(855);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(856);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(857);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(859);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(860);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(861);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(863);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(864);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(865);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(866);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(867);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(868);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(869);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(870);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(871);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(872);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(873);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(874);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(875);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead == '_') ADVANCE(888);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(877);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(1004);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(277);
      if (lookahead == 'N') ADVANCE(905);
      if (lookahead == 'n') ADVANCE(957);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1004);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(253);
      if (lookahead == 'E') ADVANCE(927);
      if (lookahead == 'e') ADVANCE(982);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1004);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '/') ADVANCE(289);
      if (lookahead == 'A') ADVANCE(928);
      if (lookahead == 'a') ADVANCE(985);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(1004);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(688);
      if (lookahead == '1') ADVANCE(687);
      if (lookahead == ':') ADVANCE(229);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(689);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1004);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(258);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1004);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(296);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1004);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(242);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1004);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(282);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1004);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(268);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1004);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(321);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(689);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1004);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(229);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(689);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(1004);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(895);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(914);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(915);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(938);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'B') ADVANCE(923);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(940);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(898);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(899);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(891);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(246);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(276);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(308);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(251);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(919);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(931);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(932);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(922);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(262);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(288);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(902);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(897);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(924);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(937);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(896);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(310);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(314);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(304);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(892);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(286);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(274);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(894);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(907);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(936);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(272);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(934);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(918);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(929);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(889);
      if (lookahead == 'r') ADVANCE(942);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(893);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(917);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(300);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(925);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(935);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(908);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(900);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'S') ADVANCE(901);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(302);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(912);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(909);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(910);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(1003);
      if (lookahead == 'u') ADVANCE(999);
      if (lookahead == 'x') ADVANCE(997);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(680);
      if (sym__escape_sequence_character_set_1(lookahead)) ADVANCE(676);
      if (lookahead != 0) ADVANCE(681);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'Y') ADVANCE(306);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '`') ADVANCE(344);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(153);
      if (lookahead != 0) ADVANCE(941);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(948);
      if (lookahead == 'u') ADVANCE(950);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(993);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(966);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(987);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(949);
      if (lookahead == 'u') ADVANCE(951);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(980);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(953);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(956);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(336);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(334);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(340);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(244);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(338);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(249);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(884);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(975);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(979);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(260);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(882);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(291);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(885);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(976);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'i') ADVANCE(972);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(342);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(312);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(965);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'm') ADVANCE(943);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(283);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(964);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(961);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(962);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(886);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(958);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(270);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(973);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(983);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(986);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(984);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(992);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(977);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(947);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(298);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(968);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(969);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(883);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(970);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(946);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(978);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(952);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(954);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(955);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 't') ADVANCE(963);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(967);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(812);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1004);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(681);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1004);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(996);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1004);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(997);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1004);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(998);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1004);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(999);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1004);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1000);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1004);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1001);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1004);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(1002);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(1004);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(sym_word);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(1004);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 240},
  [2] = {.lex_state = 240},
  [3] = {.lex_state = 240},
  [4] = {.lex_state = 238},
  [5] = {.lex_state = 240},
  [6] = {.lex_state = 240},
  [7] = {.lex_state = 240},
  [8] = {.lex_state = 240},
  [9] = {.lex_state = 240},
  [10] = {.lex_state = 240},
  [11] = {.lex_state = 240},
  [12] = {.lex_state = 240},
  [13] = {.lex_state = 240},
  [14] = {.lex_state = 240},
  [15] = {.lex_state = 240},
  [16] = {.lex_state = 240},
  [17] = {.lex_state = 240},
  [18] = {.lex_state = 240},
  [19] = {.lex_state = 240},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_trace_COLON] = ACTIONS(1),
    [anon_sym_Trace] = ACTIONS(1),
    [anon_sym_TRACE] = ACTIONS(1),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(1),
    [anon_sym_Verbose] = ACTIONS(1),
    [anon_sym_VERBOSE] = ACTIONS(1),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(1),
    [anon_sym_V_SLASH] = ACTIONS(1),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(1),
    [anon_sym_debug_COLON] = ACTIONS(1),
    [anon_sym_Debug] = ACTIONS(1),
    [anon_sym_DEBUG] = ACTIONS(1),
    [anon_sym_D_SLASH] = ACTIONS(1),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(1),
    [anon_sym_information_COLON] = ACTIONS(1),
    [anon_sym_Info] = ACTIONS(1),
    [anon_sym_INFO] = ACTIONS(1),
    [anon_sym_INFORMATION] = ACTIONS(1),
    [anon_sym_NOTICE] = ACTIONS(1),
    [anon_sym_I_SLASH] = ACTIONS(1),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(1),
    [anon_sym_warning_COLON] = ACTIONS(1),
    [anon_sym_Warn] = ACTIONS(1),
    [anon_sym_WARN] = ACTIONS(1),
    [anon_sym_WARNING] = ACTIONS(1),
    [anon_sym_W_SLASH] = ACTIONS(1),
    [anon_sym_Warning] = ACTIONS(1),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(1),
    [anon_sym_error_COLON] = ACTIONS(1),
    [anon_sym_Error] = ACTIONS(1),
    [anon_sym_ERROR] = ACTIONS(1),
    [anon_sym_ALERT] = ACTIONS(1),
    [anon_sym_CRITICAL] = ACTIONS(1),
    [anon_sym_EMERGENCY] = ACTIONS(1),
    [anon_sym_FAILURE] = ACTIONS(1),
    [anon_sym_FAIL] = ACTIONS(1),
    [anon_sym_Fatal] = ACTIONS(1),
    [anon_sym_FATAL] = ACTIONS(1),
    [anon_sym_E_SLASH] = ACTIONS(1),
    [anon_sym_LBRACKeror_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(1),
    [sym_year_month_day] = ACTIONS(1),
    [sym__time_with_offset] = ACTIONS(1),
    [sym__time_without_offset] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [sym__raw_string_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym__interpreted_double_string_basic_content] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [aux_sym_number_token3] = ACTIONS(1),
    [aux_sym_number_token4] = ACTIONS(1),
    [aux_sym_number_token5] = ACTIONS(1),
    [aux_sym_number_token6] = ACTIONS(1),
    [aux_sym_number_token7] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
  },
  [1] = {
    [sym_log_file] = STATE(25),
    [sym_log_level] = STATE(3),
    [sym_trace] = STATE(16),
    [sym_debug] = STATE(16),
    [sym_info] = STATE(16),
    [sym_warn] = STATE(16),
    [sym_error] = STATE(16),
    [sym_date] = STATE(3),
    [sym_time] = STATE(10),
    [sym_constant] = STATE(3),
    [sym_string_literal] = STATE(3),
    [sym__interpreted_double_string] = STATE(13),
    [sym__interpreted_single_string] = STATE(13),
    [sym_number] = STATE(3),
    [sym__word_separator] = STATE(3),
    [aux_sym_log_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_trace_COLON] = ACTIONS(5),
    [anon_sym_Trace] = ACTIONS(7),
    [anon_sym_TRACE] = ACTIONS(7),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(5),
    [anon_sym_Verbose] = ACTIONS(7),
    [anon_sym_VERBOSE] = ACTIONS(7),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(5),
    [anon_sym_V_SLASH] = ACTIONS(5),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(5),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(5),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(5),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(5),
    [anon_sym_debug_COLON] = ACTIONS(9),
    [anon_sym_Debug] = ACTIONS(11),
    [anon_sym_DEBUG] = ACTIONS(11),
    [anon_sym_D_SLASH] = ACTIONS(11),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(9),
    [anon_sym_information_COLON] = ACTIONS(13),
    [anon_sym_Info] = ACTIONS(15),
    [anon_sym_INFO] = ACTIONS(15),
    [anon_sym_INFORMATION] = ACTIONS(15),
    [anon_sym_NOTICE] = ACTIONS(15),
    [anon_sym_I_SLASH] = ACTIONS(13),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(13),
    [anon_sym_warning_COLON] = ACTIONS(17),
    [anon_sym_Warn] = ACTIONS(19),
    [anon_sym_WARN] = ACTIONS(19),
    [anon_sym_WARNING] = ACTIONS(19),
    [anon_sym_W_SLASH] = ACTIONS(17),
    [anon_sym_Warning] = ACTIONS(19),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(17),
    [anon_sym_error_COLON] = ACTIONS(21),
    [anon_sym_Error] = ACTIONS(23),
    [anon_sym_ERROR] = ACTIONS(23),
    [anon_sym_ALERT] = ACTIONS(23),
    [anon_sym_CRITICAL] = ACTIONS(23),
    [anon_sym_EMERGENCY] = ACTIONS(23),
    [anon_sym_FAILURE] = ACTIONS(23),
    [anon_sym_FAIL] = ACTIONS(23),
    [anon_sym_Fatal] = ACTIONS(23),
    [anon_sym_FATAL] = ACTIONS(23),
    [anon_sym_E_SLASH] = ACTIONS(23),
    [anon_sym_LBRACKeror_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(21),
    [sym_year_month_day] = ACTIONS(25),
    [sym__time_with_offset] = ACTIONS(27),
    [sym__time_without_offset] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_True] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_False] = ACTIONS(29),
    [anon_sym_null] = ACTIONS(29),
    [sym__raw_string_literal] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [aux_sym_number_token1] = ACTIONS(37),
    [aux_sym_number_token2] = ACTIONS(37),
    [aux_sym_number_token3] = ACTIONS(37),
    [aux_sym_number_token4] = ACTIONS(37),
    [aux_sym_number_token5] = ACTIONS(37),
    [aux_sym_number_token6] = ACTIONS(37),
    [aux_sym_number_token7] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(39),
    [anon_sym_LBRACE] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(39),
    [anon_sym_EQ] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(39),
    [anon_sym_SLASH] = ACTIONS(39),
    [anon_sym_DASH] = ACTIONS(39),
    [sym_word] = ACTIONS(41),
  },
  [2] = {
    [sym_log_level] = STATE(2),
    [sym_trace] = STATE(16),
    [sym_debug] = STATE(16),
    [sym_info] = STATE(16),
    [sym_warn] = STATE(16),
    [sym_error] = STATE(16),
    [sym_date] = STATE(2),
    [sym_time] = STATE(10),
    [sym_constant] = STATE(2),
    [sym_string_literal] = STATE(2),
    [sym__interpreted_double_string] = STATE(13),
    [sym__interpreted_single_string] = STATE(13),
    [sym_number] = STATE(2),
    [sym__word_separator] = STATE(2),
    [aux_sym_log_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(43),
    [anon_sym_trace_COLON] = ACTIONS(45),
    [anon_sym_Trace] = ACTIONS(48),
    [anon_sym_TRACE] = ACTIONS(48),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(45),
    [anon_sym_Verbose] = ACTIONS(48),
    [anon_sym_VERBOSE] = ACTIONS(48),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(45),
    [anon_sym_V_SLASH] = ACTIONS(45),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(45),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(45),
    [anon_sym_debug_COLON] = ACTIONS(51),
    [anon_sym_Debug] = ACTIONS(54),
    [anon_sym_DEBUG] = ACTIONS(54),
    [anon_sym_D_SLASH] = ACTIONS(54),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(51),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(51),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(51),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(51),
    [anon_sym_information_COLON] = ACTIONS(57),
    [anon_sym_Info] = ACTIONS(60),
    [anon_sym_INFO] = ACTIONS(60),
    [anon_sym_INFORMATION] = ACTIONS(60),
    [anon_sym_NOTICE] = ACTIONS(60),
    [anon_sym_I_SLASH] = ACTIONS(57),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(57),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(57),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(57),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(57),
    [anon_sym_warning_COLON] = ACTIONS(63),
    [anon_sym_Warn] = ACTIONS(66),
    [anon_sym_WARN] = ACTIONS(66),
    [anon_sym_WARNING] = ACTIONS(66),
    [anon_sym_W_SLASH] = ACTIONS(63),
    [anon_sym_Warning] = ACTIONS(66),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(63),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(63),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(63),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(63),
    [anon_sym_error_COLON] = ACTIONS(69),
    [anon_sym_Error] = ACTIONS(72),
    [anon_sym_ERROR] = ACTIONS(72),
    [anon_sym_ALERT] = ACTIONS(72),
    [anon_sym_CRITICAL] = ACTIONS(72),
    [anon_sym_EMERGENCY] = ACTIONS(72),
    [anon_sym_FAILURE] = ACTIONS(72),
    [anon_sym_FAIL] = ACTIONS(72),
    [anon_sym_Fatal] = ACTIONS(72),
    [anon_sym_FATAL] = ACTIONS(72),
    [anon_sym_E_SLASH] = ACTIONS(72),
    [anon_sym_LBRACKeror_RBRACK] = ACTIONS(69),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(69),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(69),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(69),
    [sym_year_month_day] = ACTIONS(75),
    [sym__time_with_offset] = ACTIONS(78),
    [sym__time_without_offset] = ACTIONS(78),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_True] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_False] = ACTIONS(81),
    [anon_sym_null] = ACTIONS(81),
    [sym__raw_string_literal] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [aux_sym_number_token1] = ACTIONS(93),
    [aux_sym_number_token2] = ACTIONS(93),
    [aux_sym_number_token3] = ACTIONS(93),
    [aux_sym_number_token4] = ACTIONS(93),
    [aux_sym_number_token5] = ACTIONS(93),
    [aux_sym_number_token6] = ACTIONS(93),
    [aux_sym_number_token7] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_word] = ACTIONS(99),
  },
  [3] = {
    [sym_log_level] = STATE(2),
    [sym_trace] = STATE(16),
    [sym_debug] = STATE(16),
    [sym_info] = STATE(16),
    [sym_warn] = STATE(16),
    [sym_error] = STATE(16),
    [sym_date] = STATE(2),
    [sym_time] = STATE(10),
    [sym_constant] = STATE(2),
    [sym_string_literal] = STATE(2),
    [sym__interpreted_double_string] = STATE(13),
    [sym__interpreted_single_string] = STATE(13),
    [sym_number] = STATE(2),
    [sym__word_separator] = STATE(2),
    [aux_sym_log_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_trace_COLON] = ACTIONS(5),
    [anon_sym_Trace] = ACTIONS(7),
    [anon_sym_TRACE] = ACTIONS(7),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(5),
    [anon_sym_Verbose] = ACTIONS(7),
    [anon_sym_VERBOSE] = ACTIONS(7),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(5),
    [anon_sym_V_SLASH] = ACTIONS(5),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(5),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(5),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(5),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(5),
    [anon_sym_debug_COLON] = ACTIONS(9),
    [anon_sym_Debug] = ACTIONS(11),
    [anon_sym_DEBUG] = ACTIONS(11),
    [anon_sym_D_SLASH] = ACTIONS(11),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(9),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(9),
    [anon_sym_information_COLON] = ACTIONS(13),
    [anon_sym_Info] = ACTIONS(15),
    [anon_sym_INFO] = ACTIONS(15),
    [anon_sym_INFORMATION] = ACTIONS(15),
    [anon_sym_NOTICE] = ACTIONS(15),
    [anon_sym_I_SLASH] = ACTIONS(13),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(13),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(13),
    [anon_sym_warning_COLON] = ACTIONS(17),
    [anon_sym_Warn] = ACTIONS(19),
    [anon_sym_WARN] = ACTIONS(19),
    [anon_sym_WARNING] = ACTIONS(19),
    [anon_sym_W_SLASH] = ACTIONS(17),
    [anon_sym_Warning] = ACTIONS(19),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(17),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(17),
    [anon_sym_error_COLON] = ACTIONS(21),
    [anon_sym_Error] = ACTIONS(23),
    [anon_sym_ERROR] = ACTIONS(23),
    [anon_sym_ALERT] = ACTIONS(23),
    [anon_sym_CRITICAL] = ACTIONS(23),
    [anon_sym_EMERGENCY] = ACTIONS(23),
    [anon_sym_FAILURE] = ACTIONS(23),
    [anon_sym_FAIL] = ACTIONS(23),
    [anon_sym_Fatal] = ACTIONS(23),
    [anon_sym_FATAL] = ACTIONS(23),
    [anon_sym_E_SLASH] = ACTIONS(23),
    [anon_sym_LBRACKeror_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(21),
    [sym_year_month_day] = ACTIONS(25),
    [sym__time_with_offset] = ACTIONS(27),
    [sym__time_without_offset] = ACTIONS(27),
    [anon_sym_true] = ACTIONS(29),
    [anon_sym_True] = ACTIONS(29),
    [anon_sym_false] = ACTIONS(29),
    [anon_sym_False] = ACTIONS(29),
    [anon_sym_null] = ACTIONS(29),
    [sym__raw_string_literal] = ACTIONS(31),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(35),
    [aux_sym_number_token1] = ACTIONS(37),
    [aux_sym_number_token2] = ACTIONS(37),
    [aux_sym_number_token3] = ACTIONS(37),
    [aux_sym_number_token4] = ACTIONS(37),
    [aux_sym_number_token5] = ACTIONS(37),
    [aux_sym_number_token6] = ACTIONS(37),
    [aux_sym_number_token7] = ACTIONS(37),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(106),
    [anon_sym_RBRACK] = ACTIONS(104),
    [anon_sym_LBRACE] = ACTIONS(104),
    [anon_sym_RBRACE] = ACTIONS(104),
    [anon_sym_EQ] = ACTIONS(104),
    [anon_sym_COMMA] = ACTIONS(104),
    [anon_sym_COLON] = ACTIONS(104),
    [anon_sym_SLASH] = ACTIONS(104),
    [anon_sym_DASH] = ACTIONS(104),
    [sym_word] = ACTIONS(106),
  },
  [4] = {
    [aux_sym__interpreted_double_string_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(108),
    [anon_sym_trace_COLON] = ACTIONS(110),
    [anon_sym_Trace] = ACTIONS(110),
    [anon_sym_TRACE] = ACTIONS(110),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(110),
    [anon_sym_Verbose] = ACTIONS(110),
    [anon_sym_VERBOSE] = ACTIONS(110),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(110),
    [anon_sym_V_SLASH] = ACTIONS(110),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(110),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(110),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(110),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(110),
    [anon_sym_debug_COLON] = ACTIONS(110),
    [anon_sym_Debug] = ACTIONS(110),
    [anon_sym_DEBUG] = ACTIONS(110),
    [anon_sym_D_SLASH] = ACTIONS(110),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(110),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(110),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(110),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(110),
    [anon_sym_information_COLON] = ACTIONS(110),
    [anon_sym_Info] = ACTIONS(110),
    [anon_sym_INFO] = ACTIONS(110),
    [anon_sym_INFORMATION] = ACTIONS(110),
    [anon_sym_NOTICE] = ACTIONS(110),
    [anon_sym_I_SLASH] = ACTIONS(110),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(110),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(110),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(110),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(110),
    [anon_sym_warning_COLON] = ACTIONS(110),
    [anon_sym_Warn] = ACTIONS(110),
    [anon_sym_WARN] = ACTIONS(110),
    [anon_sym_WARNING] = ACTIONS(110),
    [anon_sym_W_SLASH] = ACTIONS(110),
    [anon_sym_Warning] = ACTIONS(110),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(110),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(110),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(110),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(110),
    [anon_sym_error_COLON] = ACTIONS(110),
    [anon_sym_Error] = ACTIONS(110),
    [anon_sym_ERROR] = ACTIONS(110),
    [anon_sym_ALERT] = ACTIONS(110),
    [anon_sym_CRITICAL] = ACTIONS(110),
    [anon_sym_EMERGENCY] = ACTIONS(110),
    [anon_sym_FAILURE] = ACTIONS(110),
    [anon_sym_FAIL] = ACTIONS(110),
    [anon_sym_Fatal] = ACTIONS(110),
    [anon_sym_FATAL] = ACTIONS(110),
    [anon_sym_E_SLASH] = ACTIONS(110),
    [anon_sym_LBRACKeror_RBRACK] = ACTIONS(110),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(110),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(110),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(110),
    [sym_year_month_day] = ACTIONS(110),
    [sym__time_with_offset] = ACTIONS(110),
    [sym__time_without_offset] = ACTIONS(110),
    [anon_sym_true] = ACTIONS(110),
    [anon_sym_True] = ACTIONS(110),
    [anon_sym_false] = ACTIONS(110),
    [anon_sym_False] = ACTIONS(110),
    [anon_sym_null] = ACTIONS(110),
    [sym__raw_string_literal] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [anon_sym_DQUOTE2] = ACTIONS(112),
    [sym__interpreted_double_string_basic_content] = ACTIONS(114),
    [sym__escape_sequence] = ACTIONS(114),
    [anon_sym_SQUOTE] = ACTIONS(110),
    [aux_sym_number_token1] = ACTIONS(110),
    [aux_sym_number_token2] = ACTIONS(110),
    [aux_sym_number_token3] = ACTIONS(110),
    [aux_sym_number_token4] = ACTIONS(110),
    [aux_sym_number_token5] = ACTIONS(110),
    [aux_sym_number_token6] = ACTIONS(110),
    [aux_sym_number_token7] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(110),
    [anon_sym_RPAREN] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(110),
    [anon_sym_RBRACK] = ACTIONS(110),
    [anon_sym_LBRACE] = ACTIONS(110),
    [anon_sym_RBRACE] = ACTIONS(110),
    [anon_sym_EQ] = ACTIONS(110),
    [anon_sym_COMMA] = ACTIONS(110),
    [anon_sym_COLON] = ACTIONS(110),
    [anon_sym_SLASH] = ACTIONS(110),
    [anon_sym_DASH] = ACTIONS(110),
    [sym_word] = ACTIONS(110),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(116),
    [anon_sym_trace_COLON] = ACTIONS(116),
    [anon_sym_Trace] = ACTIONS(118),
    [anon_sym_TRACE] = ACTIONS(118),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(116),
    [anon_sym_Verbose] = ACTIONS(118),
    [anon_sym_VERBOSE] = ACTIONS(118),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(116),
    [anon_sym_V_SLASH] = ACTIONS(116),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(116),
    [anon_sym_debug_COLON] = ACTIONS(116),
    [anon_sym_Debug] = ACTIONS(118),
    [anon_sym_DEBUG] = ACTIONS(118),
    [anon_sym_D_SLASH] = ACTIONS(118),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(116),
    [anon_sym_information_COLON] = ACTIONS(116),
    [anon_sym_Info] = ACTIONS(118),
    [anon_sym_INFO] = ACTIONS(118),
    [anon_sym_INFORMATION] = ACTIONS(118),
    [anon_sym_NOTICE] = ACTIONS(118),
    [anon_sym_I_SLASH] = ACTIONS(116),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(116),
    [anon_sym_warning_COLON] = ACTIONS(116),
    [anon_sym_Warn] = ACTIONS(118),
    [anon_sym_WARN] = ACTIONS(118),
    [anon_sym_WARNING] = ACTIONS(118),
    [anon_sym_W_SLASH] = ACTIONS(116),
    [anon_sym_Warning] = ACTIONS(118),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(116),
    [anon_sym_error_COLON] = ACTIONS(116),
    [anon_sym_Error] = ACTIONS(118),
    [anon_sym_ERROR] = ACTIONS(118),
    [anon_sym_ALERT] = ACTIONS(118),
    [anon_sym_CRITICAL] = ACTIONS(118),
    [anon_sym_EMERGENCY] = ACTIONS(118),
    [anon_sym_FAILURE] = ACTIONS(118),
    [anon_sym_FAIL] = ACTIONS(118),
    [anon_sym_Fatal] = ACTIONS(118),
    [anon_sym_FATAL] = ACTIONS(118),
    [anon_sym_E_SLASH] = ACTIONS(118),
    [anon_sym_LBRACKeror_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(116),
    [sym_year_month_day] = ACTIONS(118),
    [sym__time_with_offset] = ACTIONS(118),
    [sym__time_without_offset] = ACTIONS(118),
    [anon_sym_true] = ACTIONS(118),
    [anon_sym_True] = ACTIONS(118),
    [anon_sym_false] = ACTIONS(118),
    [anon_sym_False] = ACTIONS(118),
    [anon_sym_null] = ACTIONS(118),
    [sym__raw_string_literal] = ACTIONS(118),
    [anon_sym_DQUOTE] = ACTIONS(116),
    [anon_sym_SQUOTE] = ACTIONS(116),
    [aux_sym_number_token1] = ACTIONS(118),
    [aux_sym_number_token2] = ACTIONS(118),
    [aux_sym_number_token3] = ACTIONS(118),
    [aux_sym_number_token4] = ACTIONS(118),
    [aux_sym_number_token5] = ACTIONS(118),
    [aux_sym_number_token6] = ACTIONS(118),
    [aux_sym_number_token7] = ACTIONS(118),
    [anon_sym_LPAREN] = ACTIONS(116),
    [anon_sym_RPAREN] = ACTIONS(116),
    [anon_sym_LBRACK] = ACTIONS(118),
    [anon_sym_RBRACK] = ACTIONS(116),
    [anon_sym_LBRACE] = ACTIONS(116),
    [anon_sym_RBRACE] = ACTIONS(116),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_COMMA] = ACTIONS(116),
    [anon_sym_COLON] = ACTIONS(116),
    [anon_sym_SLASH] = ACTIONS(116),
    [anon_sym_DASH] = ACTIONS(116),
    [sym_word] = ACTIONS(118),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_trace_COLON] = ACTIONS(120),
    [anon_sym_Trace] = ACTIONS(122),
    [anon_sym_TRACE] = ACTIONS(122),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(120),
    [anon_sym_Verbose] = ACTIONS(122),
    [anon_sym_VERBOSE] = ACTIONS(122),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(120),
    [anon_sym_V_SLASH] = ACTIONS(120),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(120),
    [anon_sym_debug_COLON] = ACTIONS(120),
    [anon_sym_Debug] = ACTIONS(122),
    [anon_sym_DEBUG] = ACTIONS(122),
    [anon_sym_D_SLASH] = ACTIONS(122),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(120),
    [anon_sym_information_COLON] = ACTIONS(120),
    [anon_sym_Info] = ACTIONS(122),
    [anon_sym_INFO] = ACTIONS(122),
    [anon_sym_INFORMATION] = ACTIONS(122),
    [anon_sym_NOTICE] = ACTIONS(122),
    [anon_sym_I_SLASH] = ACTIONS(120),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(120),
    [anon_sym_warning_COLON] = ACTIONS(120),
    [anon_sym_Warn] = ACTIONS(122),
    [anon_sym_WARN] = ACTIONS(122),
    [anon_sym_WARNING] = ACTIONS(122),
    [anon_sym_W_SLASH] = ACTIONS(120),
    [anon_sym_Warning] = ACTIONS(122),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(120),
    [anon_sym_error_COLON] = ACTIONS(120),
    [anon_sym_Error] = ACTIONS(122),
    [anon_sym_ERROR] = ACTIONS(122),
    [anon_sym_ALERT] = ACTIONS(122),
    [anon_sym_CRITICAL] = ACTIONS(122),
    [anon_sym_EMERGENCY] = ACTIONS(122),
    [anon_sym_FAILURE] = ACTIONS(122),
    [anon_sym_FAIL] = ACTIONS(122),
    [anon_sym_Fatal] = ACTIONS(122),
    [anon_sym_FATAL] = ACTIONS(122),
    [anon_sym_E_SLASH] = ACTIONS(122),
    [anon_sym_LBRACKeror_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(120),
    [sym_year_month_day] = ACTIONS(122),
    [sym__time_with_offset] = ACTIONS(122),
    [sym__time_without_offset] = ACTIONS(122),
    [anon_sym_true] = ACTIONS(122),
    [anon_sym_True] = ACTIONS(122),
    [anon_sym_false] = ACTIONS(122),
    [anon_sym_False] = ACTIONS(122),
    [anon_sym_null] = ACTIONS(122),
    [sym__raw_string_literal] = ACTIONS(122),
    [anon_sym_DQUOTE] = ACTIONS(120),
    [anon_sym_SQUOTE] = ACTIONS(120),
    [aux_sym_number_token1] = ACTIONS(122),
    [aux_sym_number_token2] = ACTIONS(122),
    [aux_sym_number_token3] = ACTIONS(122),
    [aux_sym_number_token4] = ACTIONS(122),
    [aux_sym_number_token5] = ACTIONS(122),
    [aux_sym_number_token6] = ACTIONS(122),
    [aux_sym_number_token7] = ACTIONS(122),
    [anon_sym_LPAREN] = ACTIONS(120),
    [anon_sym_RPAREN] = ACTIONS(120),
    [anon_sym_LBRACK] = ACTIONS(122),
    [anon_sym_RBRACK] = ACTIONS(120),
    [anon_sym_LBRACE] = ACTIONS(120),
    [anon_sym_RBRACE] = ACTIONS(120),
    [anon_sym_EQ] = ACTIONS(120),
    [anon_sym_COMMA] = ACTIONS(120),
    [anon_sym_COLON] = ACTIONS(120),
    [anon_sym_SLASH] = ACTIONS(120),
    [anon_sym_DASH] = ACTIONS(120),
    [sym_word] = ACTIONS(122),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(124),
    [anon_sym_trace_COLON] = ACTIONS(124),
    [anon_sym_Trace] = ACTIONS(126),
    [anon_sym_TRACE] = ACTIONS(126),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(124),
    [anon_sym_Verbose] = ACTIONS(126),
    [anon_sym_VERBOSE] = ACTIONS(126),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(124),
    [anon_sym_V_SLASH] = ACTIONS(124),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(124),
    [anon_sym_debug_COLON] = ACTIONS(124),
    [anon_sym_Debug] = ACTIONS(126),
    [anon_sym_DEBUG] = ACTIONS(126),
    [anon_sym_D_SLASH] = ACTIONS(126),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(124),
    [anon_sym_information_COLON] = ACTIONS(124),
    [anon_sym_Info] = ACTIONS(126),
    [anon_sym_INFO] = ACTIONS(126),
    [anon_sym_INFORMATION] = ACTIONS(126),
    [anon_sym_NOTICE] = ACTIONS(126),
    [anon_sym_I_SLASH] = ACTIONS(124),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(124),
    [anon_sym_warning_COLON] = ACTIONS(124),
    [anon_sym_Warn] = ACTIONS(126),
    [anon_sym_WARN] = ACTIONS(126),
    [anon_sym_WARNING] = ACTIONS(126),
    [anon_sym_W_SLASH] = ACTIONS(124),
    [anon_sym_Warning] = ACTIONS(126),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(124),
    [anon_sym_error_COLON] = ACTIONS(124),
    [anon_sym_Error] = ACTIONS(126),
    [anon_sym_ERROR] = ACTIONS(126),
    [anon_sym_ALERT] = ACTIONS(126),
    [anon_sym_CRITICAL] = ACTIONS(126),
    [anon_sym_EMERGENCY] = ACTIONS(126),
    [anon_sym_FAILURE] = ACTIONS(126),
    [anon_sym_FAIL] = ACTIONS(126),
    [anon_sym_Fatal] = ACTIONS(126),
    [anon_sym_FATAL] = ACTIONS(126),
    [anon_sym_E_SLASH] = ACTIONS(126),
    [anon_sym_LBRACKeror_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(124),
    [sym_year_month_day] = ACTIONS(126),
    [sym__time_with_offset] = ACTIONS(126),
    [sym__time_without_offset] = ACTIONS(126),
    [anon_sym_true] = ACTIONS(126),
    [anon_sym_True] = ACTIONS(126),
    [anon_sym_false] = ACTIONS(126),
    [anon_sym_False] = ACTIONS(126),
    [anon_sym_null] = ACTIONS(126),
    [sym__raw_string_literal] = ACTIONS(126),
    [anon_sym_DQUOTE] = ACTIONS(124),
    [anon_sym_SQUOTE] = ACTIONS(124),
    [aux_sym_number_token1] = ACTIONS(126),
    [aux_sym_number_token2] = ACTIONS(126),
    [aux_sym_number_token3] = ACTIONS(126),
    [aux_sym_number_token4] = ACTIONS(126),
    [aux_sym_number_token5] = ACTIONS(126),
    [aux_sym_number_token6] = ACTIONS(126),
    [aux_sym_number_token7] = ACTIONS(126),
    [anon_sym_LPAREN] = ACTIONS(124),
    [anon_sym_RPAREN] = ACTIONS(124),
    [anon_sym_LBRACK] = ACTIONS(126),
    [anon_sym_RBRACK] = ACTIONS(124),
    [anon_sym_LBRACE] = ACTIONS(124),
    [anon_sym_RBRACE] = ACTIONS(124),
    [anon_sym_EQ] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(124),
    [anon_sym_COLON] = ACTIONS(124),
    [anon_sym_SLASH] = ACTIONS(124),
    [anon_sym_DASH] = ACTIONS(124),
    [sym_word] = ACTIONS(126),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [anon_sym_trace_COLON] = ACTIONS(128),
    [anon_sym_Trace] = ACTIONS(130),
    [anon_sym_TRACE] = ACTIONS(130),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(128),
    [anon_sym_Verbose] = ACTIONS(130),
    [anon_sym_VERBOSE] = ACTIONS(130),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(128),
    [anon_sym_V_SLASH] = ACTIONS(128),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(128),
    [anon_sym_debug_COLON] = ACTIONS(128),
    [anon_sym_Debug] = ACTIONS(130),
    [anon_sym_DEBUG] = ACTIONS(130),
    [anon_sym_D_SLASH] = ACTIONS(130),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(128),
    [anon_sym_information_COLON] = ACTIONS(128),
    [anon_sym_Info] = ACTIONS(130),
    [anon_sym_INFO] = ACTIONS(130),
    [anon_sym_INFORMATION] = ACTIONS(130),
    [anon_sym_NOTICE] = ACTIONS(130),
    [anon_sym_I_SLASH] = ACTIONS(128),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(128),
    [anon_sym_warning_COLON] = ACTIONS(128),
    [anon_sym_Warn] = ACTIONS(130),
    [anon_sym_WARN] = ACTIONS(130),
    [anon_sym_WARNING] = ACTIONS(130),
    [anon_sym_W_SLASH] = ACTIONS(128),
    [anon_sym_Warning] = ACTIONS(130),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(128),
    [anon_sym_error_COLON] = ACTIONS(128),
    [anon_sym_Error] = ACTIONS(130),
    [anon_sym_ERROR] = ACTIONS(130),
    [anon_sym_ALERT] = ACTIONS(130),
    [anon_sym_CRITICAL] = ACTIONS(130),
    [anon_sym_EMERGENCY] = ACTIONS(130),
    [anon_sym_FAILURE] = ACTIONS(130),
    [anon_sym_FAIL] = ACTIONS(130),
    [anon_sym_Fatal] = ACTIONS(130),
    [anon_sym_FATAL] = ACTIONS(130),
    [anon_sym_E_SLASH] = ACTIONS(130),
    [anon_sym_LBRACKeror_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(128),
    [sym_year_month_day] = ACTIONS(130),
    [sym__time_with_offset] = ACTIONS(130),
    [sym__time_without_offset] = ACTIONS(130),
    [anon_sym_true] = ACTIONS(130),
    [anon_sym_True] = ACTIONS(130),
    [anon_sym_false] = ACTIONS(130),
    [anon_sym_False] = ACTIONS(130),
    [anon_sym_null] = ACTIONS(130),
    [sym__raw_string_literal] = ACTIONS(130),
    [anon_sym_DQUOTE] = ACTIONS(128),
    [anon_sym_SQUOTE] = ACTIONS(128),
    [aux_sym_number_token1] = ACTIONS(130),
    [aux_sym_number_token2] = ACTIONS(130),
    [aux_sym_number_token3] = ACTIONS(130),
    [aux_sym_number_token4] = ACTIONS(130),
    [aux_sym_number_token5] = ACTIONS(130),
    [aux_sym_number_token6] = ACTIONS(130),
    [aux_sym_number_token7] = ACTIONS(130),
    [anon_sym_LPAREN] = ACTIONS(128),
    [anon_sym_RPAREN] = ACTIONS(128),
    [anon_sym_LBRACK] = ACTIONS(130),
    [anon_sym_RBRACK] = ACTIONS(128),
    [anon_sym_LBRACE] = ACTIONS(128),
    [anon_sym_RBRACE] = ACTIONS(128),
    [anon_sym_EQ] = ACTIONS(128),
    [anon_sym_COMMA] = ACTIONS(128),
    [anon_sym_COLON] = ACTIONS(128),
    [anon_sym_SLASH] = ACTIONS(128),
    [anon_sym_DASH] = ACTIONS(128),
    [sym_word] = ACTIONS(130),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [anon_sym_trace_COLON] = ACTIONS(132),
    [anon_sym_Trace] = ACTIONS(134),
    [anon_sym_TRACE] = ACTIONS(134),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(132),
    [anon_sym_Verbose] = ACTIONS(134),
    [anon_sym_VERBOSE] = ACTIONS(134),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(132),
    [anon_sym_V_SLASH] = ACTIONS(132),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(132),
    [anon_sym_debug_COLON] = ACTIONS(132),
    [anon_sym_Debug] = ACTIONS(134),
    [anon_sym_DEBUG] = ACTIONS(134),
    [anon_sym_D_SLASH] = ACTIONS(134),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(132),
    [anon_sym_information_COLON] = ACTIONS(132),
    [anon_sym_Info] = ACTIONS(134),
    [anon_sym_INFO] = ACTIONS(134),
    [anon_sym_INFORMATION] = ACTIONS(134),
    [anon_sym_NOTICE] = ACTIONS(134),
    [anon_sym_I_SLASH] = ACTIONS(132),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(132),
    [anon_sym_warning_COLON] = ACTIONS(132),
    [anon_sym_Warn] = ACTIONS(134),
    [anon_sym_WARN] = ACTIONS(134),
    [anon_sym_WARNING] = ACTIONS(134),
    [anon_sym_W_SLASH] = ACTIONS(132),
    [anon_sym_Warning] = ACTIONS(134),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(132),
    [anon_sym_error_COLON] = ACTIONS(132),
    [anon_sym_Error] = ACTIONS(134),
    [anon_sym_ERROR] = ACTIONS(134),
    [anon_sym_ALERT] = ACTIONS(134),
    [anon_sym_CRITICAL] = ACTIONS(134),
    [anon_sym_EMERGENCY] = ACTIONS(134),
    [anon_sym_FAILURE] = ACTIONS(134),
    [anon_sym_FAIL] = ACTIONS(134),
    [anon_sym_Fatal] = ACTIONS(134),
    [anon_sym_FATAL] = ACTIONS(134),
    [anon_sym_E_SLASH] = ACTIONS(134),
    [anon_sym_LBRACKeror_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(132),
    [sym_year_month_day] = ACTIONS(134),
    [sym__time_with_offset] = ACTIONS(134),
    [sym__time_without_offset] = ACTIONS(134),
    [anon_sym_true] = ACTIONS(134),
    [anon_sym_True] = ACTIONS(134),
    [anon_sym_false] = ACTIONS(134),
    [anon_sym_False] = ACTIONS(134),
    [anon_sym_null] = ACTIONS(134),
    [sym__raw_string_literal] = ACTIONS(134),
    [anon_sym_DQUOTE] = ACTIONS(132),
    [anon_sym_SQUOTE] = ACTIONS(132),
    [aux_sym_number_token1] = ACTIONS(134),
    [aux_sym_number_token2] = ACTIONS(134),
    [aux_sym_number_token3] = ACTIONS(134),
    [aux_sym_number_token4] = ACTIONS(134),
    [aux_sym_number_token5] = ACTIONS(134),
    [aux_sym_number_token6] = ACTIONS(134),
    [aux_sym_number_token7] = ACTIONS(134),
    [anon_sym_LPAREN] = ACTIONS(132),
    [anon_sym_RPAREN] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(134),
    [anon_sym_RBRACK] = ACTIONS(132),
    [anon_sym_LBRACE] = ACTIONS(132),
    [anon_sym_RBRACE] = ACTIONS(132),
    [anon_sym_EQ] = ACTIONS(132),
    [anon_sym_COMMA] = ACTIONS(132),
    [anon_sym_COLON] = ACTIONS(132),
    [anon_sym_SLASH] = ACTIONS(132),
    [anon_sym_DASH] = ACTIONS(132),
    [sym_word] = ACTIONS(134),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(136),
    [anon_sym_trace_COLON] = ACTIONS(136),
    [anon_sym_Trace] = ACTIONS(138),
    [anon_sym_TRACE] = ACTIONS(138),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(136),
    [anon_sym_Verbose] = ACTIONS(138),
    [anon_sym_VERBOSE] = ACTIONS(138),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(136),
    [anon_sym_V_SLASH] = ACTIONS(136),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(136),
    [anon_sym_debug_COLON] = ACTIONS(136),
    [anon_sym_Debug] = ACTIONS(138),
    [anon_sym_DEBUG] = ACTIONS(138),
    [anon_sym_D_SLASH] = ACTIONS(138),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(136),
    [anon_sym_information_COLON] = ACTIONS(136),
    [anon_sym_Info] = ACTIONS(138),
    [anon_sym_INFO] = ACTIONS(138),
    [anon_sym_INFORMATION] = ACTIONS(138),
    [anon_sym_NOTICE] = ACTIONS(138),
    [anon_sym_I_SLASH] = ACTIONS(136),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(136),
    [anon_sym_warning_COLON] = ACTIONS(136),
    [anon_sym_Warn] = ACTIONS(138),
    [anon_sym_WARN] = ACTIONS(138),
    [anon_sym_WARNING] = ACTIONS(138),
    [anon_sym_W_SLASH] = ACTIONS(136),
    [anon_sym_Warning] = ACTIONS(138),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(136),
    [anon_sym_error_COLON] = ACTIONS(136),
    [anon_sym_Error] = ACTIONS(138),
    [anon_sym_ERROR] = ACTIONS(138),
    [anon_sym_ALERT] = ACTIONS(138),
    [anon_sym_CRITICAL] = ACTIONS(138),
    [anon_sym_EMERGENCY] = ACTIONS(138),
    [anon_sym_FAILURE] = ACTIONS(138),
    [anon_sym_FAIL] = ACTIONS(138),
    [anon_sym_Fatal] = ACTIONS(138),
    [anon_sym_FATAL] = ACTIONS(138),
    [anon_sym_E_SLASH] = ACTIONS(138),
    [anon_sym_LBRACKeror_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(136),
    [sym_year_month_day] = ACTIONS(138),
    [sym__time_with_offset] = ACTIONS(138),
    [sym__time_without_offset] = ACTIONS(138),
    [anon_sym_true] = ACTIONS(138),
    [anon_sym_True] = ACTIONS(138),
    [anon_sym_false] = ACTIONS(138),
    [anon_sym_False] = ACTIONS(138),
    [anon_sym_null] = ACTIONS(138),
    [sym__raw_string_literal] = ACTIONS(138),
    [anon_sym_DQUOTE] = ACTIONS(136),
    [anon_sym_SQUOTE] = ACTIONS(136),
    [aux_sym_number_token1] = ACTIONS(138),
    [aux_sym_number_token2] = ACTIONS(138),
    [aux_sym_number_token3] = ACTIONS(138),
    [aux_sym_number_token4] = ACTIONS(138),
    [aux_sym_number_token5] = ACTIONS(138),
    [aux_sym_number_token6] = ACTIONS(138),
    [aux_sym_number_token7] = ACTIONS(138),
    [anon_sym_LPAREN] = ACTIONS(136),
    [anon_sym_RPAREN] = ACTIONS(136),
    [anon_sym_LBRACK] = ACTIONS(138),
    [anon_sym_RBRACK] = ACTIONS(136),
    [anon_sym_LBRACE] = ACTIONS(136),
    [anon_sym_RBRACE] = ACTIONS(136),
    [anon_sym_EQ] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(136),
    [anon_sym_COLON] = ACTIONS(136),
    [anon_sym_SLASH] = ACTIONS(136),
    [anon_sym_DASH] = ACTIONS(136),
    [sym_word] = ACTIONS(138),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [anon_sym_trace_COLON] = ACTIONS(140),
    [anon_sym_Trace] = ACTIONS(142),
    [anon_sym_TRACE] = ACTIONS(142),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(140),
    [anon_sym_Verbose] = ACTIONS(142),
    [anon_sym_VERBOSE] = ACTIONS(142),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(140),
    [anon_sym_V_SLASH] = ACTIONS(140),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(140),
    [anon_sym_debug_COLON] = ACTIONS(140),
    [anon_sym_Debug] = ACTIONS(142),
    [anon_sym_DEBUG] = ACTIONS(142),
    [anon_sym_D_SLASH] = ACTIONS(142),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(140),
    [anon_sym_information_COLON] = ACTIONS(140),
    [anon_sym_Info] = ACTIONS(142),
    [anon_sym_INFO] = ACTIONS(142),
    [anon_sym_INFORMATION] = ACTIONS(142),
    [anon_sym_NOTICE] = ACTIONS(142),
    [anon_sym_I_SLASH] = ACTIONS(140),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(140),
    [anon_sym_warning_COLON] = ACTIONS(140),
    [anon_sym_Warn] = ACTIONS(142),
    [anon_sym_WARN] = ACTIONS(142),
    [anon_sym_WARNING] = ACTIONS(142),
    [anon_sym_W_SLASH] = ACTIONS(140),
    [anon_sym_Warning] = ACTIONS(142),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(140),
    [anon_sym_error_COLON] = ACTIONS(140),
    [anon_sym_Error] = ACTIONS(142),
    [anon_sym_ERROR] = ACTIONS(142),
    [anon_sym_ALERT] = ACTIONS(142),
    [anon_sym_CRITICAL] = ACTIONS(142),
    [anon_sym_EMERGENCY] = ACTIONS(142),
    [anon_sym_FAILURE] = ACTIONS(142),
    [anon_sym_FAIL] = ACTIONS(142),
    [anon_sym_Fatal] = ACTIONS(142),
    [anon_sym_FATAL] = ACTIONS(142),
    [anon_sym_E_SLASH] = ACTIONS(142),
    [anon_sym_LBRACKeror_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(140),
    [sym_year_month_day] = ACTIONS(142),
    [sym__time_with_offset] = ACTIONS(142),
    [sym__time_without_offset] = ACTIONS(142),
    [anon_sym_true] = ACTIONS(142),
    [anon_sym_True] = ACTIONS(142),
    [anon_sym_false] = ACTIONS(142),
    [anon_sym_False] = ACTIONS(142),
    [anon_sym_null] = ACTIONS(142),
    [sym__raw_string_literal] = ACTIONS(142),
    [anon_sym_DQUOTE] = ACTIONS(140),
    [anon_sym_SQUOTE] = ACTIONS(140),
    [aux_sym_number_token1] = ACTIONS(142),
    [aux_sym_number_token2] = ACTIONS(142),
    [aux_sym_number_token3] = ACTIONS(142),
    [aux_sym_number_token4] = ACTIONS(142),
    [aux_sym_number_token5] = ACTIONS(142),
    [aux_sym_number_token6] = ACTIONS(142),
    [aux_sym_number_token7] = ACTIONS(142),
    [anon_sym_LPAREN] = ACTIONS(140),
    [anon_sym_RPAREN] = ACTIONS(140),
    [anon_sym_LBRACK] = ACTIONS(142),
    [anon_sym_RBRACK] = ACTIONS(140),
    [anon_sym_LBRACE] = ACTIONS(140),
    [anon_sym_RBRACE] = ACTIONS(140),
    [anon_sym_EQ] = ACTIONS(140),
    [anon_sym_COMMA] = ACTIONS(140),
    [anon_sym_COLON] = ACTIONS(140),
    [anon_sym_SLASH] = ACTIONS(140),
    [anon_sym_DASH] = ACTIONS(140),
    [sym_word] = ACTIONS(142),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(144),
    [anon_sym_trace_COLON] = ACTIONS(144),
    [anon_sym_Trace] = ACTIONS(146),
    [anon_sym_TRACE] = ACTIONS(146),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(144),
    [anon_sym_Verbose] = ACTIONS(146),
    [anon_sym_VERBOSE] = ACTIONS(146),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(144),
    [anon_sym_V_SLASH] = ACTIONS(144),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(144),
    [anon_sym_debug_COLON] = ACTIONS(144),
    [anon_sym_Debug] = ACTIONS(146),
    [anon_sym_DEBUG] = ACTIONS(146),
    [anon_sym_D_SLASH] = ACTIONS(146),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(144),
    [anon_sym_information_COLON] = ACTIONS(144),
    [anon_sym_Info] = ACTIONS(146),
    [anon_sym_INFO] = ACTIONS(146),
    [anon_sym_INFORMATION] = ACTIONS(146),
    [anon_sym_NOTICE] = ACTIONS(146),
    [anon_sym_I_SLASH] = ACTIONS(144),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(144),
    [anon_sym_warning_COLON] = ACTIONS(144),
    [anon_sym_Warn] = ACTIONS(146),
    [anon_sym_WARN] = ACTIONS(146),
    [anon_sym_WARNING] = ACTIONS(146),
    [anon_sym_W_SLASH] = ACTIONS(144),
    [anon_sym_Warning] = ACTIONS(146),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(144),
    [anon_sym_error_COLON] = ACTIONS(144),
    [anon_sym_Error] = ACTIONS(146),
    [anon_sym_ERROR] = ACTIONS(146),
    [anon_sym_ALERT] = ACTIONS(146),
    [anon_sym_CRITICAL] = ACTIONS(146),
    [anon_sym_EMERGENCY] = ACTIONS(146),
    [anon_sym_FAILURE] = ACTIONS(146),
    [anon_sym_FAIL] = ACTIONS(146),
    [anon_sym_Fatal] = ACTIONS(146),
    [anon_sym_FATAL] = ACTIONS(146),
    [anon_sym_E_SLASH] = ACTIONS(146),
    [anon_sym_LBRACKeror_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(144),
    [sym_year_month_day] = ACTIONS(146),
    [sym__time_with_offset] = ACTIONS(146),
    [sym__time_without_offset] = ACTIONS(146),
    [anon_sym_true] = ACTIONS(146),
    [anon_sym_True] = ACTIONS(146),
    [anon_sym_false] = ACTIONS(146),
    [anon_sym_False] = ACTIONS(146),
    [anon_sym_null] = ACTIONS(146),
    [sym__raw_string_literal] = ACTIONS(146),
    [anon_sym_DQUOTE] = ACTIONS(144),
    [anon_sym_SQUOTE] = ACTIONS(144),
    [aux_sym_number_token1] = ACTIONS(146),
    [aux_sym_number_token2] = ACTIONS(146),
    [aux_sym_number_token3] = ACTIONS(146),
    [aux_sym_number_token4] = ACTIONS(146),
    [aux_sym_number_token5] = ACTIONS(146),
    [aux_sym_number_token6] = ACTIONS(146),
    [aux_sym_number_token7] = ACTIONS(146),
    [anon_sym_LPAREN] = ACTIONS(144),
    [anon_sym_RPAREN] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [anon_sym_RBRACK] = ACTIONS(144),
    [anon_sym_LBRACE] = ACTIONS(144),
    [anon_sym_RBRACE] = ACTIONS(144),
    [anon_sym_EQ] = ACTIONS(144),
    [anon_sym_COMMA] = ACTIONS(144),
    [anon_sym_COLON] = ACTIONS(144),
    [anon_sym_SLASH] = ACTIONS(144),
    [anon_sym_DASH] = ACTIONS(144),
    [sym_word] = ACTIONS(146),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(148),
    [anon_sym_trace_COLON] = ACTIONS(148),
    [anon_sym_Trace] = ACTIONS(150),
    [anon_sym_TRACE] = ACTIONS(150),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(148),
    [anon_sym_Verbose] = ACTIONS(150),
    [anon_sym_VERBOSE] = ACTIONS(150),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(148),
    [anon_sym_V_SLASH] = ACTIONS(148),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(148),
    [anon_sym_debug_COLON] = ACTIONS(148),
    [anon_sym_Debug] = ACTIONS(150),
    [anon_sym_DEBUG] = ACTIONS(150),
    [anon_sym_D_SLASH] = ACTIONS(150),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(148),
    [anon_sym_information_COLON] = ACTIONS(148),
    [anon_sym_Info] = ACTIONS(150),
    [anon_sym_INFO] = ACTIONS(150),
    [anon_sym_INFORMATION] = ACTIONS(150),
    [anon_sym_NOTICE] = ACTIONS(150),
    [anon_sym_I_SLASH] = ACTIONS(148),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(148),
    [anon_sym_warning_COLON] = ACTIONS(148),
    [anon_sym_Warn] = ACTIONS(150),
    [anon_sym_WARN] = ACTIONS(150),
    [anon_sym_WARNING] = ACTIONS(150),
    [anon_sym_W_SLASH] = ACTIONS(148),
    [anon_sym_Warning] = ACTIONS(150),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(148),
    [anon_sym_error_COLON] = ACTIONS(148),
    [anon_sym_Error] = ACTIONS(150),
    [anon_sym_ERROR] = ACTIONS(150),
    [anon_sym_ALERT] = ACTIONS(150),
    [anon_sym_CRITICAL] = ACTIONS(150),
    [anon_sym_EMERGENCY] = ACTIONS(150),
    [anon_sym_FAILURE] = ACTIONS(150),
    [anon_sym_FAIL] = ACTIONS(150),
    [anon_sym_Fatal] = ACTIONS(150),
    [anon_sym_FATAL] = ACTIONS(150),
    [anon_sym_E_SLASH] = ACTIONS(150),
    [anon_sym_LBRACKeror_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(148),
    [sym_year_month_day] = ACTIONS(150),
    [sym__time_with_offset] = ACTIONS(150),
    [sym__time_without_offset] = ACTIONS(150),
    [anon_sym_true] = ACTIONS(150),
    [anon_sym_True] = ACTIONS(150),
    [anon_sym_false] = ACTIONS(150),
    [anon_sym_False] = ACTIONS(150),
    [anon_sym_null] = ACTIONS(150),
    [sym__raw_string_literal] = ACTIONS(150),
    [anon_sym_DQUOTE] = ACTIONS(148),
    [anon_sym_SQUOTE] = ACTIONS(148),
    [aux_sym_number_token1] = ACTIONS(150),
    [aux_sym_number_token2] = ACTIONS(150),
    [aux_sym_number_token3] = ACTIONS(150),
    [aux_sym_number_token4] = ACTIONS(150),
    [aux_sym_number_token5] = ACTIONS(150),
    [aux_sym_number_token6] = ACTIONS(150),
    [aux_sym_number_token7] = ACTIONS(150),
    [anon_sym_LPAREN] = ACTIONS(148),
    [anon_sym_RPAREN] = ACTIONS(148),
    [anon_sym_LBRACK] = ACTIONS(150),
    [anon_sym_RBRACK] = ACTIONS(148),
    [anon_sym_LBRACE] = ACTIONS(148),
    [anon_sym_RBRACE] = ACTIONS(148),
    [anon_sym_EQ] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(148),
    [anon_sym_COLON] = ACTIONS(148),
    [anon_sym_SLASH] = ACTIONS(148),
    [anon_sym_DASH] = ACTIONS(148),
    [sym_word] = ACTIONS(150),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [anon_sym_trace_COLON] = ACTIONS(152),
    [anon_sym_Trace] = ACTIONS(154),
    [anon_sym_TRACE] = ACTIONS(154),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(152),
    [anon_sym_Verbose] = ACTIONS(154),
    [anon_sym_VERBOSE] = ACTIONS(154),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(152),
    [anon_sym_V_SLASH] = ACTIONS(152),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(152),
    [anon_sym_debug_COLON] = ACTIONS(152),
    [anon_sym_Debug] = ACTIONS(154),
    [anon_sym_DEBUG] = ACTIONS(154),
    [anon_sym_D_SLASH] = ACTIONS(154),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(152),
    [anon_sym_information_COLON] = ACTIONS(152),
    [anon_sym_Info] = ACTIONS(154),
    [anon_sym_INFO] = ACTIONS(154),
    [anon_sym_INFORMATION] = ACTIONS(154),
    [anon_sym_NOTICE] = ACTIONS(154),
    [anon_sym_I_SLASH] = ACTIONS(152),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(152),
    [anon_sym_warning_COLON] = ACTIONS(152),
    [anon_sym_Warn] = ACTIONS(154),
    [anon_sym_WARN] = ACTIONS(154),
    [anon_sym_WARNING] = ACTIONS(154),
    [anon_sym_W_SLASH] = ACTIONS(152),
    [anon_sym_Warning] = ACTIONS(154),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(152),
    [anon_sym_error_COLON] = ACTIONS(152),
    [anon_sym_Error] = ACTIONS(154),
    [anon_sym_ERROR] = ACTIONS(154),
    [anon_sym_ALERT] = ACTIONS(154),
    [anon_sym_CRITICAL] = ACTIONS(154),
    [anon_sym_EMERGENCY] = ACTIONS(154),
    [anon_sym_FAILURE] = ACTIONS(154),
    [anon_sym_FAIL] = ACTIONS(154),
    [anon_sym_Fatal] = ACTIONS(154),
    [anon_sym_FATAL] = ACTIONS(154),
    [anon_sym_E_SLASH] = ACTIONS(154),
    [anon_sym_LBRACKeror_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(152),
    [sym_year_month_day] = ACTIONS(154),
    [sym__time_with_offset] = ACTIONS(154),
    [sym__time_without_offset] = ACTIONS(154),
    [anon_sym_true] = ACTIONS(154),
    [anon_sym_True] = ACTIONS(154),
    [anon_sym_false] = ACTIONS(154),
    [anon_sym_False] = ACTIONS(154),
    [anon_sym_null] = ACTIONS(154),
    [sym__raw_string_literal] = ACTIONS(154),
    [anon_sym_DQUOTE] = ACTIONS(152),
    [anon_sym_SQUOTE] = ACTIONS(152),
    [aux_sym_number_token1] = ACTIONS(154),
    [aux_sym_number_token2] = ACTIONS(154),
    [aux_sym_number_token3] = ACTIONS(154),
    [aux_sym_number_token4] = ACTIONS(154),
    [aux_sym_number_token5] = ACTIONS(154),
    [aux_sym_number_token6] = ACTIONS(154),
    [aux_sym_number_token7] = ACTIONS(154),
    [anon_sym_LPAREN] = ACTIONS(152),
    [anon_sym_RPAREN] = ACTIONS(152),
    [anon_sym_LBRACK] = ACTIONS(154),
    [anon_sym_RBRACK] = ACTIONS(152),
    [anon_sym_LBRACE] = ACTIONS(152),
    [anon_sym_RBRACE] = ACTIONS(152),
    [anon_sym_EQ] = ACTIONS(152),
    [anon_sym_COMMA] = ACTIONS(152),
    [anon_sym_COLON] = ACTIONS(152),
    [anon_sym_SLASH] = ACTIONS(152),
    [anon_sym_DASH] = ACTIONS(152),
    [sym_word] = ACTIONS(154),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(156),
    [anon_sym_trace_COLON] = ACTIONS(156),
    [anon_sym_Trace] = ACTIONS(158),
    [anon_sym_TRACE] = ACTIONS(158),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(156),
    [anon_sym_Verbose] = ACTIONS(158),
    [anon_sym_VERBOSE] = ACTIONS(158),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(156),
    [anon_sym_V_SLASH] = ACTIONS(156),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(156),
    [anon_sym_debug_COLON] = ACTIONS(156),
    [anon_sym_Debug] = ACTIONS(158),
    [anon_sym_DEBUG] = ACTIONS(158),
    [anon_sym_D_SLASH] = ACTIONS(158),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(156),
    [anon_sym_information_COLON] = ACTIONS(156),
    [anon_sym_Info] = ACTIONS(158),
    [anon_sym_INFO] = ACTIONS(158),
    [anon_sym_INFORMATION] = ACTIONS(158),
    [anon_sym_NOTICE] = ACTIONS(158),
    [anon_sym_I_SLASH] = ACTIONS(156),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(156),
    [anon_sym_warning_COLON] = ACTIONS(156),
    [anon_sym_Warn] = ACTIONS(158),
    [anon_sym_WARN] = ACTIONS(158),
    [anon_sym_WARNING] = ACTIONS(158),
    [anon_sym_W_SLASH] = ACTIONS(156),
    [anon_sym_Warning] = ACTIONS(158),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(156),
    [anon_sym_error_COLON] = ACTIONS(156),
    [anon_sym_Error] = ACTIONS(158),
    [anon_sym_ERROR] = ACTIONS(158),
    [anon_sym_ALERT] = ACTIONS(158),
    [anon_sym_CRITICAL] = ACTIONS(158),
    [anon_sym_EMERGENCY] = ACTIONS(158),
    [anon_sym_FAILURE] = ACTIONS(158),
    [anon_sym_FAIL] = ACTIONS(158),
    [anon_sym_Fatal] = ACTIONS(158),
    [anon_sym_FATAL] = ACTIONS(158),
    [anon_sym_E_SLASH] = ACTIONS(158),
    [anon_sym_LBRACKeror_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(156),
    [sym_year_month_day] = ACTIONS(158),
    [sym__time_with_offset] = ACTIONS(158),
    [sym__time_without_offset] = ACTIONS(158),
    [anon_sym_true] = ACTIONS(158),
    [anon_sym_True] = ACTIONS(158),
    [anon_sym_false] = ACTIONS(158),
    [anon_sym_False] = ACTIONS(158),
    [anon_sym_null] = ACTIONS(158),
    [sym__raw_string_literal] = ACTIONS(158),
    [anon_sym_DQUOTE] = ACTIONS(156),
    [anon_sym_SQUOTE] = ACTIONS(156),
    [aux_sym_number_token1] = ACTIONS(158),
    [aux_sym_number_token2] = ACTIONS(158),
    [aux_sym_number_token3] = ACTIONS(158),
    [aux_sym_number_token4] = ACTIONS(158),
    [aux_sym_number_token5] = ACTIONS(158),
    [aux_sym_number_token6] = ACTIONS(158),
    [aux_sym_number_token7] = ACTIONS(158),
    [anon_sym_LPAREN] = ACTIONS(156),
    [anon_sym_RPAREN] = ACTIONS(156),
    [anon_sym_LBRACK] = ACTIONS(158),
    [anon_sym_RBRACK] = ACTIONS(156),
    [anon_sym_LBRACE] = ACTIONS(156),
    [anon_sym_RBRACE] = ACTIONS(156),
    [anon_sym_EQ] = ACTIONS(156),
    [anon_sym_COMMA] = ACTIONS(156),
    [anon_sym_COLON] = ACTIONS(156),
    [anon_sym_SLASH] = ACTIONS(156),
    [anon_sym_DASH] = ACTIONS(156),
    [sym_word] = ACTIONS(158),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(160),
    [anon_sym_trace_COLON] = ACTIONS(160),
    [anon_sym_Trace] = ACTIONS(162),
    [anon_sym_TRACE] = ACTIONS(162),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(160),
    [anon_sym_Verbose] = ACTIONS(162),
    [anon_sym_VERBOSE] = ACTIONS(162),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(160),
    [anon_sym_V_SLASH] = ACTIONS(160),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(160),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(160),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(160),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(160),
    [anon_sym_debug_COLON] = ACTIONS(160),
    [anon_sym_Debug] = ACTIONS(162),
    [anon_sym_DEBUG] = ACTIONS(162),
    [anon_sym_D_SLASH] = ACTIONS(162),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(160),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(160),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(160),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(160),
    [anon_sym_information_COLON] = ACTIONS(160),
    [anon_sym_Info] = ACTIONS(162),
    [anon_sym_INFO] = ACTIONS(162),
    [anon_sym_INFORMATION] = ACTIONS(162),
    [anon_sym_NOTICE] = ACTIONS(162),
    [anon_sym_I_SLASH] = ACTIONS(160),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(160),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(160),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(160),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(160),
    [anon_sym_warning_COLON] = ACTIONS(160),
    [anon_sym_Warn] = ACTIONS(162),
    [anon_sym_WARN] = ACTIONS(162),
    [anon_sym_WARNING] = ACTIONS(162),
    [anon_sym_W_SLASH] = ACTIONS(160),
    [anon_sym_Warning] = ACTIONS(162),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(160),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(160),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(160),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(160),
    [anon_sym_error_COLON] = ACTIONS(160),
    [anon_sym_Error] = ACTIONS(162),
    [anon_sym_ERROR] = ACTIONS(162),
    [anon_sym_ALERT] = ACTIONS(162),
    [anon_sym_CRITICAL] = ACTIONS(162),
    [anon_sym_EMERGENCY] = ACTIONS(162),
    [anon_sym_FAILURE] = ACTIONS(162),
    [anon_sym_FAIL] = ACTIONS(162),
    [anon_sym_Fatal] = ACTIONS(162),
    [anon_sym_FATAL] = ACTIONS(162),
    [anon_sym_E_SLASH] = ACTIONS(162),
    [anon_sym_LBRACKeror_RBRACK] = ACTIONS(160),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(160),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(160),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(160),
    [sym_year_month_day] = ACTIONS(162),
    [sym__time_with_offset] = ACTIONS(162),
    [sym__time_without_offset] = ACTIONS(162),
    [anon_sym_true] = ACTIONS(162),
    [anon_sym_True] = ACTIONS(162),
    [anon_sym_false] = ACTIONS(162),
    [anon_sym_False] = ACTIONS(162),
    [anon_sym_null] = ACTIONS(162),
    [sym__raw_string_literal] = ACTIONS(162),
    [anon_sym_DQUOTE] = ACTIONS(160),
    [anon_sym_SQUOTE] = ACTIONS(160),
    [aux_sym_number_token1] = ACTIONS(162),
    [aux_sym_number_token2] = ACTIONS(162),
    [aux_sym_number_token3] = ACTIONS(162),
    [aux_sym_number_token4] = ACTIONS(162),
    [aux_sym_number_token5] = ACTIONS(162),
    [aux_sym_number_token6] = ACTIONS(162),
    [aux_sym_number_token7] = ACTIONS(162),
    [anon_sym_LPAREN] = ACTIONS(160),
    [anon_sym_RPAREN] = ACTIONS(160),
    [anon_sym_LBRACK] = ACTIONS(162),
    [anon_sym_RBRACK] = ACTIONS(160),
    [anon_sym_LBRACE] = ACTIONS(160),
    [anon_sym_RBRACE] = ACTIONS(160),
    [anon_sym_EQ] = ACTIONS(160),
    [anon_sym_COMMA] = ACTIONS(160),
    [anon_sym_COLON] = ACTIONS(160),
    [anon_sym_SLASH] = ACTIONS(160),
    [anon_sym_DASH] = ACTIONS(160),
    [sym_word] = ACTIONS(162),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(164),
    [anon_sym_trace_COLON] = ACTIONS(164),
    [anon_sym_Trace] = ACTIONS(166),
    [anon_sym_TRACE] = ACTIONS(166),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(164),
    [anon_sym_Verbose] = ACTIONS(166),
    [anon_sym_VERBOSE] = ACTIONS(166),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(164),
    [anon_sym_V_SLASH] = ACTIONS(164),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(164),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(164),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(164),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(164),
    [anon_sym_debug_COLON] = ACTIONS(164),
    [anon_sym_Debug] = ACTIONS(166),
    [anon_sym_DEBUG] = ACTIONS(166),
    [anon_sym_D_SLASH] = ACTIONS(166),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(164),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(164),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(164),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(164),
    [anon_sym_information_COLON] = ACTIONS(164),
    [anon_sym_Info] = ACTIONS(166),
    [anon_sym_INFO] = ACTIONS(166),
    [anon_sym_INFORMATION] = ACTIONS(166),
    [anon_sym_NOTICE] = ACTIONS(166),
    [anon_sym_I_SLASH] = ACTIONS(164),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(164),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(164),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(164),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(164),
    [anon_sym_warning_COLON] = ACTIONS(164),
    [anon_sym_Warn] = ACTIONS(166),
    [anon_sym_WARN] = ACTIONS(166),
    [anon_sym_WARNING] = ACTIONS(166),
    [anon_sym_W_SLASH] = ACTIONS(164),
    [anon_sym_Warning] = ACTIONS(166),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(164),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(164),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(164),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(164),
    [anon_sym_error_COLON] = ACTIONS(164),
    [anon_sym_Error] = ACTIONS(166),
    [anon_sym_ERROR] = ACTIONS(166),
    [anon_sym_ALERT] = ACTIONS(166),
    [anon_sym_CRITICAL] = ACTIONS(166),
    [anon_sym_EMERGENCY] = ACTIONS(166),
    [anon_sym_FAILURE] = ACTIONS(166),
    [anon_sym_FAIL] = ACTIONS(166),
    [anon_sym_Fatal] = ACTIONS(166),
    [anon_sym_FATAL] = ACTIONS(166),
    [anon_sym_E_SLASH] = ACTIONS(166),
    [anon_sym_LBRACKeror_RBRACK] = ACTIONS(164),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(164),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(164),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(164),
    [sym_year_month_day] = ACTIONS(166),
    [sym__time_with_offset] = ACTIONS(166),
    [sym__time_without_offset] = ACTIONS(166),
    [anon_sym_true] = ACTIONS(166),
    [anon_sym_True] = ACTIONS(166),
    [anon_sym_false] = ACTIONS(166),
    [anon_sym_False] = ACTIONS(166),
    [anon_sym_null] = ACTIONS(166),
    [sym__raw_string_literal] = ACTIONS(166),
    [anon_sym_DQUOTE] = ACTIONS(164),
    [anon_sym_SQUOTE] = ACTIONS(164),
    [aux_sym_number_token1] = ACTIONS(166),
    [aux_sym_number_token2] = ACTIONS(166),
    [aux_sym_number_token3] = ACTIONS(166),
    [aux_sym_number_token4] = ACTIONS(166),
    [aux_sym_number_token5] = ACTIONS(166),
    [aux_sym_number_token6] = ACTIONS(166),
    [aux_sym_number_token7] = ACTIONS(166),
    [anon_sym_LPAREN] = ACTIONS(164),
    [anon_sym_RPAREN] = ACTIONS(164),
    [anon_sym_LBRACK] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(164),
    [anon_sym_LBRACE] = ACTIONS(164),
    [anon_sym_RBRACE] = ACTIONS(164),
    [anon_sym_EQ] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(164),
    [anon_sym_COLON] = ACTIONS(164),
    [anon_sym_SLASH] = ACTIONS(164),
    [anon_sym_DASH] = ACTIONS(164),
    [sym_word] = ACTIONS(166),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(168),
    [anon_sym_trace_COLON] = ACTIONS(168),
    [anon_sym_Trace] = ACTIONS(170),
    [anon_sym_TRACE] = ACTIONS(170),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(168),
    [anon_sym_Verbose] = ACTIONS(170),
    [anon_sym_VERBOSE] = ACTIONS(170),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(168),
    [anon_sym_V_SLASH] = ACTIONS(168),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(168),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(168),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(168),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(168),
    [anon_sym_debug_COLON] = ACTIONS(168),
    [anon_sym_Debug] = ACTIONS(170),
    [anon_sym_DEBUG] = ACTIONS(170),
    [anon_sym_D_SLASH] = ACTIONS(170),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(168),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(168),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(168),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(168),
    [anon_sym_information_COLON] = ACTIONS(168),
    [anon_sym_Info] = ACTIONS(170),
    [anon_sym_INFO] = ACTIONS(170),
    [anon_sym_INFORMATION] = ACTIONS(170),
    [anon_sym_NOTICE] = ACTIONS(170),
    [anon_sym_I_SLASH] = ACTIONS(168),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(168),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(168),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(168),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(168),
    [anon_sym_warning_COLON] = ACTIONS(168),
    [anon_sym_Warn] = ACTIONS(170),
    [anon_sym_WARN] = ACTIONS(170),
    [anon_sym_WARNING] = ACTIONS(170),
    [anon_sym_W_SLASH] = ACTIONS(168),
    [anon_sym_Warning] = ACTIONS(170),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(168),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(168),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(168),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(168),
    [anon_sym_error_COLON] = ACTIONS(168),
    [anon_sym_Error] = ACTIONS(170),
    [anon_sym_ERROR] = ACTIONS(170),
    [anon_sym_ALERT] = ACTIONS(170),
    [anon_sym_CRITICAL] = ACTIONS(170),
    [anon_sym_EMERGENCY] = ACTIONS(170),
    [anon_sym_FAILURE] = ACTIONS(170),
    [anon_sym_FAIL] = ACTIONS(170),
    [anon_sym_Fatal] = ACTIONS(170),
    [anon_sym_FATAL] = ACTIONS(170),
    [anon_sym_E_SLASH] = ACTIONS(170),
    [anon_sym_LBRACKeror_RBRACK] = ACTIONS(168),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(168),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(168),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(168),
    [sym_year_month_day] = ACTIONS(170),
    [sym__time_with_offset] = ACTIONS(170),
    [sym__time_without_offset] = ACTIONS(170),
    [anon_sym_true] = ACTIONS(170),
    [anon_sym_True] = ACTIONS(170),
    [anon_sym_false] = ACTIONS(170),
    [anon_sym_False] = ACTIONS(170),
    [anon_sym_null] = ACTIONS(170),
    [sym__raw_string_literal] = ACTIONS(170),
    [anon_sym_DQUOTE] = ACTIONS(168),
    [anon_sym_SQUOTE] = ACTIONS(168),
    [aux_sym_number_token1] = ACTIONS(170),
    [aux_sym_number_token2] = ACTIONS(170),
    [aux_sym_number_token3] = ACTIONS(170),
    [aux_sym_number_token4] = ACTIONS(170),
    [aux_sym_number_token5] = ACTIONS(170),
    [aux_sym_number_token6] = ACTIONS(170),
    [aux_sym_number_token7] = ACTIONS(170),
    [anon_sym_LPAREN] = ACTIONS(168),
    [anon_sym_RPAREN] = ACTIONS(168),
    [anon_sym_LBRACK] = ACTIONS(170),
    [anon_sym_RBRACK] = ACTIONS(168),
    [anon_sym_LBRACE] = ACTIONS(168),
    [anon_sym_RBRACE] = ACTIONS(168),
    [anon_sym_EQ] = ACTIONS(168),
    [anon_sym_COMMA] = ACTIONS(168),
    [anon_sym_COLON] = ACTIONS(168),
    [anon_sym_SLASH] = ACTIONS(168),
    [anon_sym_DASH] = ACTIONS(168),
    [sym_word] = ACTIONS(170),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [anon_sym_trace_COLON] = ACTIONS(172),
    [anon_sym_Trace] = ACTIONS(174),
    [anon_sym_TRACE] = ACTIONS(174),
    [anon_sym_LBRACKtrace_RBRACK] = ACTIONS(172),
    [anon_sym_Verbose] = ACTIONS(174),
    [anon_sym_VERBOSE] = ACTIONS(174),
    [anon_sym_LBRACKverbose_RBRACK] = ACTIONS(172),
    [anon_sym_V_SLASH] = ACTIONS(172),
    [anon_sym_LBRACKverb_RBRACK] = ACTIONS(172),
    [anon_sym_LBRACKvrb_RBRACK] = ACTIONS(172),
    [anon_sym_LBRACKvb_RBRACK] = ACTIONS(172),
    [anon_sym_LBRACKv_RBRACK] = ACTIONS(172),
    [anon_sym_debug_COLON] = ACTIONS(172),
    [anon_sym_Debug] = ACTIONS(174),
    [anon_sym_DEBUG] = ACTIONS(174),
    [anon_sym_D_SLASH] = ACTIONS(174),
    [anon_sym_LBRACKdbug_RBRACK] = ACTIONS(172),
    [anon_sym_LBRACKdbg_RBRACK] = ACTIONS(172),
    [anon_sym_LBRACKde_RBRACK] = ACTIONS(172),
    [anon_sym_LBRACKd_RBRACK] = ACTIONS(172),
    [anon_sym_information_COLON] = ACTIONS(172),
    [anon_sym_Info] = ACTIONS(174),
    [anon_sym_INFO] = ACTIONS(174),
    [anon_sym_INFORMATION] = ACTIONS(174),
    [anon_sym_NOTICE] = ACTIONS(174),
    [anon_sym_I_SLASH] = ACTIONS(172),
    [anon_sym_LBRACKinfo_RBRACK] = ACTIONS(172),
    [anon_sym_LBRACKinf_RBRACK] = ACTIONS(172),
    [anon_sym_LBRACKin_RBRACK] = ACTIONS(172),
    [anon_sym_LBRACKi_RBRACK] = ACTIONS(172),
    [anon_sym_warning_COLON] = ACTIONS(172),
    [anon_sym_Warn] = ACTIONS(174),
    [anon_sym_WARN] = ACTIONS(174),
    [anon_sym_WARNING] = ACTIONS(174),
    [anon_sym_W_SLASH] = ACTIONS(172),
    [anon_sym_Warning] = ACTIONS(174),
    [anon_sym_LBRACKwarn_RBRACK] = ACTIONS(172),
    [anon_sym_LBRACKwrn_RBRACK] = ACTIONS(172),
    [anon_sym_LBRACKwn_RBRACK] = ACTIONS(172),
    [anon_sym_LBRACKw_RBRACK] = ACTIONS(172),
    [anon_sym_error_COLON] = ACTIONS(172),
    [anon_sym_Error] = ACTIONS(174),
    [anon_sym_ERROR] = ACTIONS(174),
    [anon_sym_ALERT] = ACTIONS(174),
    [anon_sym_CRITICAL] = ACTIONS(174),
    [anon_sym_EMERGENCY] = ACTIONS(174),
    [anon_sym_FAILURE] = ACTIONS(174),
    [anon_sym_FAIL] = ACTIONS(174),
    [anon_sym_Fatal] = ACTIONS(174),
    [anon_sym_FATAL] = ACTIONS(174),
    [anon_sym_E_SLASH] = ACTIONS(174),
    [anon_sym_LBRACKeror_RBRACK] = ACTIONS(172),
    [anon_sym_LBRACKerr_RBRACK] = ACTIONS(172),
    [anon_sym_LBRACKer_RBRACK] = ACTIONS(172),
    [anon_sym_LBRACKe_RBRACK] = ACTIONS(172),
    [sym_year_month_day] = ACTIONS(174),
    [sym__time_with_offset] = ACTIONS(174),
    [sym__time_without_offset] = ACTIONS(174),
    [anon_sym_true] = ACTIONS(174),
    [anon_sym_True] = ACTIONS(174),
    [anon_sym_false] = ACTIONS(174),
    [anon_sym_False] = ACTIONS(174),
    [anon_sym_null] = ACTIONS(174),
    [sym__raw_string_literal] = ACTIONS(174),
    [anon_sym_DQUOTE] = ACTIONS(172),
    [anon_sym_SQUOTE] = ACTIONS(172),
    [aux_sym_number_token1] = ACTIONS(174),
    [aux_sym_number_token2] = ACTIONS(174),
    [aux_sym_number_token3] = ACTIONS(174),
    [aux_sym_number_token4] = ACTIONS(174),
    [aux_sym_number_token5] = ACTIONS(174),
    [aux_sym_number_token6] = ACTIONS(174),
    [aux_sym_number_token7] = ACTIONS(174),
    [anon_sym_LPAREN] = ACTIONS(172),
    [anon_sym_RPAREN] = ACTIONS(172),
    [anon_sym_LBRACK] = ACTIONS(174),
    [anon_sym_RBRACK] = ACTIONS(172),
    [anon_sym_LBRACE] = ACTIONS(172),
    [anon_sym_RBRACE] = ACTIONS(172),
    [anon_sym_EQ] = ACTIONS(172),
    [anon_sym_COMMA] = ACTIONS(172),
    [anon_sym_COLON] = ACTIONS(172),
    [anon_sym_SLASH] = ACTIONS(172),
    [anon_sym_DASH] = ACTIONS(172),
    [sym_word] = ACTIONS(174),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(178), 1,
      anon_sym_SQUOTE2,
    STATE(21), 1,
      aux_sym__interpreted_single_string_repeat1,
    ACTIONS(176), 2,
      sym__escape_sequence,
      sym__interpreted_single_string_basic_content,
  [11] = 3,
    ACTIONS(182), 1,
      anon_sym_SQUOTE2,
    STATE(24), 1,
      aux_sym__interpreted_single_string_repeat1,
    ACTIONS(180), 2,
      sym__escape_sequence,
      sym__interpreted_single_string_basic_content,
  [22] = 3,
    ACTIONS(184), 1,
      anon_sym_DQUOTE2,
    STATE(22), 1,
      aux_sym__interpreted_double_string_repeat1,
    ACTIONS(186), 2,
      sym__interpreted_double_string_basic_content,
      sym__escape_sequence,
  [33] = 3,
    ACTIONS(189), 1,
      anon_sym_DQUOTE2,
    STATE(22), 1,
      aux_sym__interpreted_double_string_repeat1,
    ACTIONS(191), 2,
      sym__interpreted_double_string_basic_content,
      sym__escape_sequence,
  [44] = 3,
    ACTIONS(196), 1,
      anon_sym_SQUOTE2,
    STATE(24), 1,
      aux_sym__interpreted_single_string_repeat1,
    ACTIONS(193), 2,
      sym__escape_sequence,
      sym__interpreted_single_string_basic_content,
  [55] = 1,
    ACTIONS(198), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(20)] = 0,
  [SMALL_STATE(21)] = 11,
  [SMALL_STATE(22)] = 22,
  [SMALL_STATE(23)] = 33,
  [SMALL_STATE(24)] = 44,
  [SMALL_STATE(25)] = 55,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(5),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(5),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(6),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(6),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(7),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(7),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(8),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(8),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(9),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(9),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(10),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(11),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(12),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(13),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(4),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(20),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(14),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_file, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_separator, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_separator, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trace, 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trace, 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_debug, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info, 1),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_info, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warn, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warn, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 1),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_single_string, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_single_string, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level, 1),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_level, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_double_string, 2),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_double_string, 2),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_double_string, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_double_string, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_single_string, 2),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_single_string, 2),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__interpreted_double_string_repeat1, 2),
  [186] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_double_string_repeat1, 2), SHIFT_REPEAT(22),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_single_string_repeat1, 2), SHIFT_REPEAT(24),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__interpreted_single_string_repeat1, 2),
  [198] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_log(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
