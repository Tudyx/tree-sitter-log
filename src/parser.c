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
#define STATE_COUNT 20
#define LARGE_STATE_COUNT 16
#define SYMBOL_COUNT 69
#define ALIAS_COUNT 0
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_trace = 1,
  anon_sym_Trace = 2,
  anon_sym_TRACE = 3,
  anon_sym_verbose = 4,
  anon_sym_verb = 5,
  anon_sym_debug = 6,
  anon_sym_Debug = 7,
  anon_sym_DEBUG = 8,
  anon_sym_info = 9,
  anon_sym_Info = 10,
  anon_sym_INFO = 11,
  anon_sym_warn = 12,
  anon_sym_Warn = 13,
  anon_sym_WARN = 14,
  anon_sym_warning = 15,
  anon_sym_Warning = 16,
  anon_sym_WARNING = 17,
  anon_sym_error = 18,
  anon_sym_error_COLON = 19,
  anon_sym_Error = 20,
  anon_sym_ERROR = 21,
  anon_sym_ALERT = 22,
  anon_sym_CRITICAL = 23,
  anon_sym_EMERGENCY = 24,
  anon_sym_FAILURE = 25,
  anon_sym_FAIL = 26,
  anon_sym_fatal = 27,
  anon_sym_Fatal = 28,
  anon_sym_FATAL = 29,
  sym_year_month_day = 30,
  sym__time_with_offset = 31,
  sym__time_without_offset = 32,
  anon_sym_true = 33,
  anon_sym_false = 34,
  anon_sym_False = 35,
  sym__raw_string_literal = 36,
  anon_sym_DQUOTE = 37,
  anon_sym_DQUOTE2 = 38,
  sym__interpreted_string_literal_basic_content = 39,
  sym__escape_sequence = 40,
  aux_sym_number_token1 = 41,
  aux_sym_number_token2 = 42,
  aux_sym_number_token3 = 43,
  aux_sym_number_token4 = 44,
  aux_sym_number_token5 = 45,
  aux_sym_number_token6 = 46,
  aux_sym_number_token7 = 47,
  anon_sym_LPAREN = 48,
  anon_sym_RPAREN = 49,
  anon_sym_T = 50,
  anon_sym_LBRACK = 51,
  anon_sym_RBRACK = 52,
  sym_word = 53,
  sym_log_file = 54,
  sym_log_level = 55,
  sym_trace = 56,
  sym_debug = 57,
  sym_info = 58,
  sym_warn = 59,
  sym_error = 60,
  sym_date = 61,
  sym_time = 62,
  sym_string_literal = 63,
  sym__interpreted_string_literal = 64,
  sym_number = 65,
  sym__word_separator = 66,
  aux_sym_log_file_repeat1 = 67,
  aux_sym__interpreted_string_literal_repeat1 = 68,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_trace] = "trace",
  [anon_sym_Trace] = "Trace",
  [anon_sym_TRACE] = "TRACE",
  [anon_sym_verbose] = "verbose",
  [anon_sym_verb] = "verb",
  [anon_sym_debug] = "debug",
  [anon_sym_Debug] = "Debug",
  [anon_sym_DEBUG] = "DEBUG",
  [anon_sym_info] = "info",
  [anon_sym_Info] = "Info",
  [anon_sym_INFO] = "INFO",
  [anon_sym_warn] = "warn",
  [anon_sym_Warn] = "Warn",
  [anon_sym_WARN] = "WARN",
  [anon_sym_warning] = "warning",
  [anon_sym_Warning] = "Warning",
  [anon_sym_WARNING] = "WARNING",
  [anon_sym_error] = "error",
  [anon_sym_error_COLON] = "error:",
  [anon_sym_Error] = "Error",
  [anon_sym_ERROR] = "ERROR",
  [anon_sym_ALERT] = "ALERT",
  [anon_sym_CRITICAL] = "CRITICAL",
  [anon_sym_EMERGENCY] = "EMERGENCY",
  [anon_sym_FAILURE] = "FAILURE",
  [anon_sym_FAIL] = "FAIL",
  [anon_sym_fatal] = "fatal",
  [anon_sym_Fatal] = "Fatal",
  [anon_sym_FATAL] = "FATAL",
  [sym_year_month_day] = "year_month_day",
  [sym__time_with_offset] = "_time_with_offset",
  [sym__time_without_offset] = "_time_without_offset",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_False] = "False",
  [sym__raw_string_literal] = "_raw_string_literal",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [sym__interpreted_string_literal_basic_content] = "_interpreted_string_literal_basic_content",
  [sym__escape_sequence] = "_escape_sequence",
  [aux_sym_number_token1] = "number_token1",
  [aux_sym_number_token2] = "number_token2",
  [aux_sym_number_token3] = "number_token3",
  [aux_sym_number_token4] = "number_token4",
  [aux_sym_number_token5] = "number_token5",
  [aux_sym_number_token6] = "number_token6",
  [aux_sym_number_token7] = "number_token7",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_T] = "T",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym_string_literal] = "string_literal",
  [sym__interpreted_string_literal] = "_interpreted_string_literal",
  [sym_number] = "number",
  [sym__word_separator] = "_word_separator",
  [aux_sym_log_file_repeat1] = "log_file_repeat1",
  [aux_sym__interpreted_string_literal_repeat1] = "_interpreted_string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_trace] = anon_sym_trace,
  [anon_sym_Trace] = anon_sym_Trace,
  [anon_sym_TRACE] = anon_sym_TRACE,
  [anon_sym_verbose] = anon_sym_verbose,
  [anon_sym_verb] = anon_sym_verb,
  [anon_sym_debug] = anon_sym_debug,
  [anon_sym_Debug] = anon_sym_Debug,
  [anon_sym_DEBUG] = anon_sym_DEBUG,
  [anon_sym_info] = anon_sym_info,
  [anon_sym_Info] = anon_sym_Info,
  [anon_sym_INFO] = anon_sym_INFO,
  [anon_sym_warn] = anon_sym_warn,
  [anon_sym_Warn] = anon_sym_Warn,
  [anon_sym_WARN] = anon_sym_WARN,
  [anon_sym_warning] = anon_sym_warning,
  [anon_sym_Warning] = anon_sym_Warning,
  [anon_sym_WARNING] = anon_sym_WARNING,
  [anon_sym_error] = anon_sym_error,
  [anon_sym_error_COLON] = anon_sym_error_COLON,
  [anon_sym_Error] = anon_sym_Error,
  [anon_sym_ERROR] = anon_sym_ERROR,
  [anon_sym_ALERT] = anon_sym_ALERT,
  [anon_sym_CRITICAL] = anon_sym_CRITICAL,
  [anon_sym_EMERGENCY] = anon_sym_EMERGENCY,
  [anon_sym_FAILURE] = anon_sym_FAILURE,
  [anon_sym_FAIL] = anon_sym_FAIL,
  [anon_sym_fatal] = anon_sym_fatal,
  [anon_sym_Fatal] = anon_sym_Fatal,
  [anon_sym_FATAL] = anon_sym_FATAL,
  [sym_year_month_day] = sym_year_month_day,
  [sym__time_with_offset] = sym__time_with_offset,
  [sym__time_without_offset] = sym__time_without_offset,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_False] = anon_sym_False,
  [sym__raw_string_literal] = sym__raw_string_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym__interpreted_string_literal_basic_content] = sym__interpreted_string_literal_basic_content,
  [sym__escape_sequence] = sym__escape_sequence,
  [aux_sym_number_token1] = aux_sym_number_token1,
  [aux_sym_number_token2] = aux_sym_number_token2,
  [aux_sym_number_token3] = aux_sym_number_token3,
  [aux_sym_number_token4] = aux_sym_number_token4,
  [aux_sym_number_token5] = aux_sym_number_token5,
  [aux_sym_number_token6] = aux_sym_number_token6,
  [aux_sym_number_token7] = aux_sym_number_token7,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_T] = anon_sym_T,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym_string_literal] = sym_string_literal,
  [sym__interpreted_string_literal] = sym__interpreted_string_literal,
  [sym_number] = sym_number,
  [sym__word_separator] = sym__word_separator,
  [aux_sym_log_file_repeat1] = aux_sym_log_file_repeat1,
  [aux_sym__interpreted_string_literal_repeat1] = aux_sym__interpreted_string_literal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_trace] = {
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
  [anon_sym_verbose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_verb] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_debug] = {
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
  [anon_sym_info] = {
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
  [anon_sym_warn] = {
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
  [anon_sym_warning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Warning] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WARNING] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_error] = {
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
  [anon_sym_fatal] = {
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
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
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
  [sym__interpreted_string_literal_basic_content] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_sequence] = {
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
  [anon_sym_T] = {
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
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym__interpreted_string_literal] = {
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
  [aux_sym__interpreted_string_literal_repeat1] = {
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
};

static inline bool sym_word_character_set_1(int32_t c) {
  return (c < '"'
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || c == ' '))
    : (c <= '"' || (c < '['
      ? (c < 'T'
        ? (c >= '(' && c <= ')')
        : c <= 'T')
      : (c <= '[' || c == ']'))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '(') ADVANCE(162);
      if (lookahead == ')') ADVANCE(163);
      if (lookahead == '0') ADVANCE(110);
      if (lookahead == '1') ADVANCE(114);
      if (lookahead == '2') ADVANCE(113);
      if (lookahead == '3') ADVANCE(112);
      if (lookahead == 'A') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(201);
      if (lookahead == 'D') ADVANCE(181);
      if (lookahead == 'E') ADVANCE(194);
      if (lookahead == 'F') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(195);
      if (lookahead == 'T') ADVANCE(164);
      if (lookahead == 'W') ADVANCE(178);
      if (lookahead == '[') ADVANCE(165);
      if (lookahead == '\\') ADVANCE(211);
      if (lookahead == ']') ADVANCE(166);
      if (lookahead == '`') ADVANCE(262);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == 'f') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead == 'v') ADVANCE(275);
      if (lookahead == 'w') ADVANCE(267);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(82);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(83);
      END_STATE();
    case 2:
      if (lookahead == '2') ADVANCE(19);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(22);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(9);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(36);
      END_STATE();
    case 10:
      if (lookahead == 'I') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'L') ADVANCE(62);
      END_STATE();
    case 12:
      if (lookahead == 'L') ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == 'U') ADVANCE(30);
      if (lookahead == 'u') ADVANCE(26);
      if (lookahead == 'x') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      if (lookahead != 0) ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == '`') ADVANCE(79);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(17);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(69);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(3);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(21);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(69);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(27);
      END_STATE();
    case 29:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(28);
      END_STATE();
    case 30:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(29);
      END_STATE();
    case 31:
      if (eof) ADVANCE(33);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '(') ADVANCE(162);
      if (lookahead == ')') ADVANCE(163);
      if (lookahead == '0') ADVANCE(110);
      if (lookahead == '1') ADVANCE(114);
      if (lookahead == '2') ADVANCE(113);
      if (lookahead == '3') ADVANCE(112);
      if (lookahead == 'A') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(201);
      if (lookahead == 'D') ADVANCE(181);
      if (lookahead == 'E') ADVANCE(194);
      if (lookahead == 'F') ADVANCE(176);
      if (lookahead == 'I') ADVANCE(195);
      if (lookahead == 'T') ADVANCE(164);
      if (lookahead == 'W') ADVANCE(178);
      if (lookahead == '[') ADVANCE(165);
      if (lookahead == ']') ADVANCE(166);
      if (lookahead == '`') ADVANCE(262);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == 'f') ADVANCE(213);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == 't') ADVANCE(293);
      if (lookahead == 'v') ADVANCE(275);
      if (lookahead == 'w') ADVANCE(267);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '"') ADVANCE(81);
      if (lookahead == '(') ADVANCE(162);
      if (lookahead == ')') ADVANCE(163);
      if (lookahead == '0') ADVANCE(110);
      if (lookahead == '1') ADVANCE(114);
      if (lookahead == '2') ADVANCE(113);
      if (lookahead == '3') ADVANCE(112);
      if (lookahead == 'A') ADVANCE(192);
      if (lookahead == 'C') ADVANCE(201);
      if (lookahead == 'D') ADVANCE(181);
      if (lookahead == 'E') ADVANCE(194);
      if (lookahead == 'F') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(195);
      if (lookahead == 'T') ADVANCE(164);
      if (lookahead == 'W') ADVANCE(178);
      if (lookahead == '[') ADVANCE(165);
      if (lookahead == ']') ADVANCE(166);
      if (lookahead == '`') ADVANCE(262);
      if (lookahead == 'd') ADVANCE(217);
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == 'f') ADVANCE(214);
      if (lookahead == 'i') ADVANCE(288);
      if (lookahead == 't') ADVANCE(300);
      if (lookahead == 'v') ADVANCE(275);
      if (lookahead == 'w') ADVANCE(267);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(242);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(130);
      if (lookahead != 0) ADVANCE(325);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_trace);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_Trace);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_verbose);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_verb);
      if (lookahead == 'o') ADVANCE(304);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_debug);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_Debug);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_DEBUG);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_info);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_Info);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_INFO);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_warn);
      if (lookahead == 'i') ADVANCE(287);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_Warn);
      if (lookahead == 'i') ADVANCE(286);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_WARN);
      if (lookahead == 'I') ADVANCE(198);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_warning);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_Warning);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_WARNING);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == ':') ADVANCE(52);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_error_COLON);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_Error);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_ERROR);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_ALERT);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_CRITICAL);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_EMERGENCY);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_FAILURE);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_FAIL);
      if (lookahead == 'U') ADVANCE(207);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_fatal);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_Fatal);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_FATAL);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_year_month_day);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '0') ADVANCE(66);
      if (lookahead == '_') ADVANCE(315);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == ' ' ||
          lookahead == 'T') ADVANCE(63);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(325);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '_') ADVANCE(315);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == ' ' ||
          lookahead == 'T') ADVANCE(63);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(66);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(325);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '_') ADVANCE(315);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == ' ' ||
          lookahead == 'T') ADVANCE(63);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(325);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '_') ADVANCE(315);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == ' ' ||
          lookahead == 'T') ADVANCE(63);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(325);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_year_month_day);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym__time_with_offset);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym__time_with_offset);
      if (lookahead == '_') ADVANCE(315);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__time_with_offset);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '+') ADVANCE(172);
      if (lookahead == ',') ADVANCE(310);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == '/') ADVANCE(315);
      if (lookahead == ':') ADVANCE(174);
      if (lookahead == '_') ADVANCE(315);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 'T' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(325);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '+') ADVANCE(172);
      if (lookahead == ',') ADVANCE(310);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == '.') ADVANCE(311);
      if (lookahead == '_') ADVANCE(315);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 'T' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(325);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '+') ADVANCE(172);
      if (lookahead == '-') ADVANCE(173);
      if (lookahead == '_') ADVANCE(315);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(71);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 'T' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(325);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(172);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 'T' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(325);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_true);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_false);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_False);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__raw_string_literal);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '-') ADVANCE(171);
      if (lookahead == '_') ADVANCE(315);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '-') ADVANCE(168);
      if (lookahead == ':') ADVANCE(315);
      if (lookahead == '_') ADVANCE(315);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0') ADVANCE(73);
      if (lookahead == '_') ADVANCE(315);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ':') ADVANCE(315);
      if (lookahead == '_') ADVANCE(315);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(312);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ':') ADVANCE(308);
      if (lookahead == '_') ADVANCE(315);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(315);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(67);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(90);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(91);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(93);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(315);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(94);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(315);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(315);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(315);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(315);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(315);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(315);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(315);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(315);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(315);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(315);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '0') ADVANCE(111);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == 'x') ADVANCE(316);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == ':') ADVANCE(306);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(156);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(155);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(167);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == ':') ADVANCE(306);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(169);
      if (lookahead == ':') ADVANCE(315);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(247);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(261);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'R') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(100);
      if (lookahead == '1') ADVANCE(96);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == '3') ADVANCE(65);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(66);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(101);
      if (lookahead == '1') ADVANCE(97);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(102);
      if (lookahead == '1') ADVANCE(98);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(103);
      if (lookahead == '3') ADVANCE(95);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(105);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '2') ADVANCE(305);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(313);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '2') ADVANCE(99);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(108);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '6') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(106);
      if (('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(307);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(191);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == 'a') ADVANCE(218);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(191);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == 'a') ADVANCE(221);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(203);
      if (lookahead == 'a') ADVANCE(298);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'B') ADVANCE(210);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(212);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(179);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == 'e') ADVANCE(215);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(58);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(205);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(197);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(206);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(199);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(41);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(50);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(184);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(208);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(193);
      if (lookahead == 'T') ADVANCE(5);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(325);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(183);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(59);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(185);
      if (lookahead == 'R') ADVANCE(202);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == 'r') ADVANCE(294);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(186);
      if (lookahead == 'n') ADVANCE(276);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(47);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(180);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(188);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(44);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(204);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(190);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(200);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(196);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(54);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(209);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(189);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(182);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(325);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(325);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(187);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(324);
      if (lookahead == 'u') ADVANCE(319);
      if (lookahead == 'x') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == 'T' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(87);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'Y') ADVANCE(57);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == 'a') ADVANCE(219);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == 'a') ADVANCE(222);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == 'b') ADVANCE(223);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == 'b') ADVANCE(224);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == 'e') ADVANCE(216);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == 'l') ADVANCE(302);
      if (lookahead == 't') ADVANCE(265);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == 'l') ADVANCE(303);
      if (lookahead == 't') ADVANCE(266);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == 'r') ADVANCE(301);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == 't') ADVANCE(265);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == 't') ADVANCE(266);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == 'u') ADVANCE(278);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (lookahead == 'u') ADVANCE(279);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(160);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(159);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(231);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(244);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(246);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(248);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(249);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(250);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(251);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(252);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(253);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(254);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(255);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(256);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(258);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(259);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(322);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(260);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '`') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == 'T' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(14);
      if (lookahead != 0) ADVANCE(262);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(269);
      if (lookahead == 'u') ADVANCE(270);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(269);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(282);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(283);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(299);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(38);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(273);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(76);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(78);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(77);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(34);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(37);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(295);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(289);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(290);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(40);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(39);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(49);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(48);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(61);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(60);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(46);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(45);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(280);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(281);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(277);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(43);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(42);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(296);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(297);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(263);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(291);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(268);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(53);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(51);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(284);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(285);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(264);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(292);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(271);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(272);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(274);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(175);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(104);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(309);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(107);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(175);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(314);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(317);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(318);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(319);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(320);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(321);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(323);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_word);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(325);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 32},
  [2] = {.lex_state = 32},
  [3] = {.lex_state = 32},
  [4] = {.lex_state = 32},
  [5] = {.lex_state = 32},
  [6] = {.lex_state = 32},
  [7] = {.lex_state = 32},
  [8] = {.lex_state = 32},
  [9] = {.lex_state = 32},
  [10] = {.lex_state = 32},
  [11] = {.lex_state = 32},
  [12] = {.lex_state = 32},
  [13] = {.lex_state = 32},
  [14] = {.lex_state = 32},
  [15] = {.lex_state = 32},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_trace] = ACTIONS(1),
    [anon_sym_Trace] = ACTIONS(1),
    [anon_sym_TRACE] = ACTIONS(1),
    [anon_sym_verbose] = ACTIONS(1),
    [anon_sym_verb] = ACTIONS(1),
    [anon_sym_debug] = ACTIONS(1),
    [anon_sym_Debug] = ACTIONS(1),
    [anon_sym_DEBUG] = ACTIONS(1),
    [anon_sym_info] = ACTIONS(1),
    [anon_sym_Info] = ACTIONS(1),
    [anon_sym_INFO] = ACTIONS(1),
    [anon_sym_warn] = ACTIONS(1),
    [anon_sym_Warn] = ACTIONS(1),
    [anon_sym_WARN] = ACTIONS(1),
    [anon_sym_warning] = ACTIONS(1),
    [anon_sym_Warning] = ACTIONS(1),
    [anon_sym_WARNING] = ACTIONS(1),
    [anon_sym_error] = ACTIONS(1),
    [anon_sym_error_COLON] = ACTIONS(1),
    [anon_sym_Error] = ACTIONS(1),
    [anon_sym_ERROR] = ACTIONS(1),
    [anon_sym_ALERT] = ACTIONS(1),
    [anon_sym_CRITICAL] = ACTIONS(1),
    [anon_sym_EMERGENCY] = ACTIONS(1),
    [anon_sym_FAILURE] = ACTIONS(1),
    [anon_sym_FAIL] = ACTIONS(1),
    [anon_sym_fatal] = ACTIONS(1),
    [anon_sym_Fatal] = ACTIONS(1),
    [anon_sym_FATAL] = ACTIONS(1),
    [sym_year_month_day] = ACTIONS(1),
    [sym__time_with_offset] = ACTIONS(1),
    [sym__time_without_offset] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [sym__raw_string_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [aux_sym_number_token1] = ACTIONS(1),
    [aux_sym_number_token2] = ACTIONS(1),
    [aux_sym_number_token3] = ACTIONS(1),
    [aux_sym_number_token4] = ACTIONS(1),
    [aux_sym_number_token5] = ACTIONS(1),
    [aux_sym_number_token6] = ACTIONS(1),
    [aux_sym_number_token7] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_T] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
  },
  [1] = {
    [sym_log_file] = STATE(19),
    [sym_log_level] = STATE(2),
    [sym_trace] = STATE(13),
    [sym_debug] = STATE(13),
    [sym_info] = STATE(13),
    [sym_warn] = STATE(13),
    [sym_error] = STATE(13),
    [sym_date] = STATE(2),
    [sym_time] = STATE(9),
    [sym_string_literal] = STATE(2),
    [sym__interpreted_string_literal] = STATE(11),
    [sym_number] = STATE(2),
    [sym__word_separator] = STATE(2),
    [aux_sym_log_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_trace] = ACTIONS(5),
    [anon_sym_Trace] = ACTIONS(7),
    [anon_sym_TRACE] = ACTIONS(7),
    [anon_sym_verbose] = ACTIONS(5),
    [anon_sym_verb] = ACTIONS(5),
    [anon_sym_debug] = ACTIONS(9),
    [anon_sym_Debug] = ACTIONS(9),
    [anon_sym_DEBUG] = ACTIONS(9),
    [anon_sym_info] = ACTIONS(11),
    [anon_sym_Info] = ACTIONS(11),
    [anon_sym_INFO] = ACTIONS(11),
    [anon_sym_warn] = ACTIONS(13),
    [anon_sym_Warn] = ACTIONS(13),
    [anon_sym_WARN] = ACTIONS(13),
    [anon_sym_warning] = ACTIONS(13),
    [anon_sym_Warning] = ACTIONS(13),
    [anon_sym_WARNING] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_error_COLON] = ACTIONS(15),
    [anon_sym_Error] = ACTIONS(15),
    [anon_sym_ERROR] = ACTIONS(15),
    [anon_sym_ALERT] = ACTIONS(17),
    [anon_sym_CRITICAL] = ACTIONS(17),
    [anon_sym_EMERGENCY] = ACTIONS(15),
    [anon_sym_FAILURE] = ACTIONS(15),
    [anon_sym_FAIL] = ACTIONS(15),
    [anon_sym_fatal] = ACTIONS(15),
    [anon_sym_Fatal] = ACTIONS(15),
    [anon_sym_FATAL] = ACTIONS(17),
    [sym_year_month_day] = ACTIONS(19),
    [sym__time_with_offset] = ACTIONS(21),
    [sym__time_without_offset] = ACTIONS(21),
    [sym__raw_string_literal] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [aux_sym_number_token1] = ACTIONS(27),
    [aux_sym_number_token2] = ACTIONS(27),
    [aux_sym_number_token3] = ACTIONS(27),
    [aux_sym_number_token4] = ACTIONS(27),
    [aux_sym_number_token5] = ACTIONS(27),
    [aux_sym_number_token6] = ACTIONS(27),
    [aux_sym_number_token7] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_T] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(29),
    [sym_word] = ACTIONS(31),
  },
  [2] = {
    [sym_log_level] = STATE(3),
    [sym_trace] = STATE(13),
    [sym_debug] = STATE(13),
    [sym_info] = STATE(13),
    [sym_warn] = STATE(13),
    [sym_error] = STATE(13),
    [sym_date] = STATE(3),
    [sym_time] = STATE(9),
    [sym_string_literal] = STATE(3),
    [sym__interpreted_string_literal] = STATE(11),
    [sym_number] = STATE(3),
    [sym__word_separator] = STATE(3),
    [aux_sym_log_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(33),
    [anon_sym_trace] = ACTIONS(5),
    [anon_sym_Trace] = ACTIONS(7),
    [anon_sym_TRACE] = ACTIONS(7),
    [anon_sym_verbose] = ACTIONS(5),
    [anon_sym_verb] = ACTIONS(5),
    [anon_sym_debug] = ACTIONS(9),
    [anon_sym_Debug] = ACTIONS(9),
    [anon_sym_DEBUG] = ACTIONS(9),
    [anon_sym_info] = ACTIONS(11),
    [anon_sym_Info] = ACTIONS(11),
    [anon_sym_INFO] = ACTIONS(11),
    [anon_sym_warn] = ACTIONS(13),
    [anon_sym_Warn] = ACTIONS(13),
    [anon_sym_WARN] = ACTIONS(13),
    [anon_sym_warning] = ACTIONS(13),
    [anon_sym_Warning] = ACTIONS(13),
    [anon_sym_WARNING] = ACTIONS(13),
    [anon_sym_error] = ACTIONS(15),
    [anon_sym_error_COLON] = ACTIONS(15),
    [anon_sym_Error] = ACTIONS(15),
    [anon_sym_ERROR] = ACTIONS(15),
    [anon_sym_ALERT] = ACTIONS(17),
    [anon_sym_CRITICAL] = ACTIONS(17),
    [anon_sym_EMERGENCY] = ACTIONS(15),
    [anon_sym_FAILURE] = ACTIONS(15),
    [anon_sym_FAIL] = ACTIONS(15),
    [anon_sym_fatal] = ACTIONS(15),
    [anon_sym_Fatal] = ACTIONS(15),
    [anon_sym_FATAL] = ACTIONS(17),
    [sym_year_month_day] = ACTIONS(19),
    [sym__time_with_offset] = ACTIONS(21),
    [sym__time_without_offset] = ACTIONS(21),
    [sym__raw_string_literal] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [aux_sym_number_token1] = ACTIONS(27),
    [aux_sym_number_token2] = ACTIONS(27),
    [aux_sym_number_token3] = ACTIONS(27),
    [aux_sym_number_token4] = ACTIONS(27),
    [aux_sym_number_token5] = ACTIONS(27),
    [aux_sym_number_token6] = ACTIONS(27),
    [aux_sym_number_token7] = ACTIONS(27),
    [anon_sym_LPAREN] = ACTIONS(35),
    [anon_sym_RPAREN] = ACTIONS(35),
    [anon_sym_T] = ACTIONS(37),
    [anon_sym_LBRACK] = ACTIONS(35),
    [anon_sym_RBRACK] = ACTIONS(35),
    [sym_word] = ACTIONS(37),
  },
  [3] = {
    [sym_log_level] = STATE(3),
    [sym_trace] = STATE(13),
    [sym_debug] = STATE(13),
    [sym_info] = STATE(13),
    [sym_warn] = STATE(13),
    [sym_error] = STATE(13),
    [sym_date] = STATE(3),
    [sym_time] = STATE(9),
    [sym_string_literal] = STATE(3),
    [sym__interpreted_string_literal] = STATE(11),
    [sym_number] = STATE(3),
    [sym__word_separator] = STATE(3),
    [aux_sym_log_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_trace] = ACTIONS(41),
    [anon_sym_Trace] = ACTIONS(44),
    [anon_sym_TRACE] = ACTIONS(44),
    [anon_sym_verbose] = ACTIONS(41),
    [anon_sym_verb] = ACTIONS(41),
    [anon_sym_debug] = ACTIONS(47),
    [anon_sym_Debug] = ACTIONS(47),
    [anon_sym_DEBUG] = ACTIONS(47),
    [anon_sym_info] = ACTIONS(50),
    [anon_sym_Info] = ACTIONS(50),
    [anon_sym_INFO] = ACTIONS(50),
    [anon_sym_warn] = ACTIONS(53),
    [anon_sym_Warn] = ACTIONS(53),
    [anon_sym_WARN] = ACTIONS(53),
    [anon_sym_warning] = ACTIONS(53),
    [anon_sym_Warning] = ACTIONS(53),
    [anon_sym_WARNING] = ACTIONS(53),
    [anon_sym_error] = ACTIONS(56),
    [anon_sym_error_COLON] = ACTIONS(56),
    [anon_sym_Error] = ACTIONS(56),
    [anon_sym_ERROR] = ACTIONS(56),
    [anon_sym_ALERT] = ACTIONS(59),
    [anon_sym_CRITICAL] = ACTIONS(59),
    [anon_sym_EMERGENCY] = ACTIONS(56),
    [anon_sym_FAILURE] = ACTIONS(56),
    [anon_sym_FAIL] = ACTIONS(56),
    [anon_sym_fatal] = ACTIONS(56),
    [anon_sym_Fatal] = ACTIONS(56),
    [anon_sym_FATAL] = ACTIONS(59),
    [sym_year_month_day] = ACTIONS(62),
    [sym__time_with_offset] = ACTIONS(65),
    [sym__time_without_offset] = ACTIONS(65),
    [sym__raw_string_literal] = ACTIONS(68),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [aux_sym_number_token1] = ACTIONS(74),
    [aux_sym_number_token2] = ACTIONS(74),
    [aux_sym_number_token3] = ACTIONS(74),
    [aux_sym_number_token4] = ACTIONS(74),
    [aux_sym_number_token5] = ACTIONS(74),
    [aux_sym_number_token6] = ACTIONS(74),
    [aux_sym_number_token7] = ACTIONS(74),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_T] = ACTIONS(80),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
    [sym_word] = ACTIONS(80),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [anon_sym_trace] = ACTIONS(85),
    [anon_sym_Trace] = ACTIONS(83),
    [anon_sym_TRACE] = ACTIONS(83),
    [anon_sym_verbose] = ACTIONS(85),
    [anon_sym_verb] = ACTIONS(85),
    [anon_sym_debug] = ACTIONS(85),
    [anon_sym_Debug] = ACTIONS(85),
    [anon_sym_DEBUG] = ACTIONS(85),
    [anon_sym_info] = ACTIONS(85),
    [anon_sym_Info] = ACTIONS(85),
    [anon_sym_INFO] = ACTIONS(85),
    [anon_sym_warn] = ACTIONS(85),
    [anon_sym_Warn] = ACTIONS(85),
    [anon_sym_WARN] = ACTIONS(85),
    [anon_sym_warning] = ACTIONS(85),
    [anon_sym_Warning] = ACTIONS(85),
    [anon_sym_WARNING] = ACTIONS(85),
    [anon_sym_error] = ACTIONS(85),
    [anon_sym_error_COLON] = ACTIONS(85),
    [anon_sym_Error] = ACTIONS(85),
    [anon_sym_ERROR] = ACTIONS(85),
    [anon_sym_ALERT] = ACTIONS(83),
    [anon_sym_CRITICAL] = ACTIONS(83),
    [anon_sym_EMERGENCY] = ACTIONS(85),
    [anon_sym_FAILURE] = ACTIONS(85),
    [anon_sym_FAIL] = ACTIONS(85),
    [anon_sym_fatal] = ACTIONS(85),
    [anon_sym_Fatal] = ACTIONS(85),
    [anon_sym_FATAL] = ACTIONS(83),
    [sym_year_month_day] = ACTIONS(85),
    [sym__time_with_offset] = ACTIONS(85),
    [sym__time_without_offset] = ACTIONS(85),
    [sym__raw_string_literal] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [aux_sym_number_token1] = ACTIONS(85),
    [aux_sym_number_token2] = ACTIONS(85),
    [aux_sym_number_token3] = ACTIONS(85),
    [aux_sym_number_token4] = ACTIONS(85),
    [aux_sym_number_token5] = ACTIONS(85),
    [aux_sym_number_token6] = ACTIONS(85),
    [aux_sym_number_token7] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_T] = ACTIONS(85),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(83),
    [sym_word] = ACTIONS(85),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [anon_sym_trace] = ACTIONS(89),
    [anon_sym_Trace] = ACTIONS(87),
    [anon_sym_TRACE] = ACTIONS(87),
    [anon_sym_verbose] = ACTIONS(89),
    [anon_sym_verb] = ACTIONS(89),
    [anon_sym_debug] = ACTIONS(89),
    [anon_sym_Debug] = ACTIONS(89),
    [anon_sym_DEBUG] = ACTIONS(89),
    [anon_sym_info] = ACTIONS(89),
    [anon_sym_Info] = ACTIONS(89),
    [anon_sym_INFO] = ACTIONS(89),
    [anon_sym_warn] = ACTIONS(89),
    [anon_sym_Warn] = ACTIONS(89),
    [anon_sym_WARN] = ACTIONS(89),
    [anon_sym_warning] = ACTIONS(89),
    [anon_sym_Warning] = ACTIONS(89),
    [anon_sym_WARNING] = ACTIONS(89),
    [anon_sym_error] = ACTIONS(89),
    [anon_sym_error_COLON] = ACTIONS(89),
    [anon_sym_Error] = ACTIONS(89),
    [anon_sym_ERROR] = ACTIONS(89),
    [anon_sym_ALERT] = ACTIONS(87),
    [anon_sym_CRITICAL] = ACTIONS(87),
    [anon_sym_EMERGENCY] = ACTIONS(89),
    [anon_sym_FAILURE] = ACTIONS(89),
    [anon_sym_FAIL] = ACTIONS(89),
    [anon_sym_fatal] = ACTIONS(89),
    [anon_sym_Fatal] = ACTIONS(89),
    [anon_sym_FATAL] = ACTIONS(87),
    [sym_year_month_day] = ACTIONS(89),
    [sym__time_with_offset] = ACTIONS(89),
    [sym__time_without_offset] = ACTIONS(89),
    [sym__raw_string_literal] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [aux_sym_number_token1] = ACTIONS(89),
    [aux_sym_number_token2] = ACTIONS(89),
    [aux_sym_number_token3] = ACTIONS(89),
    [aux_sym_number_token4] = ACTIONS(89),
    [aux_sym_number_token5] = ACTIONS(89),
    [aux_sym_number_token6] = ACTIONS(89),
    [aux_sym_number_token7] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_T] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [sym_word] = ACTIONS(89),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [anon_sym_trace] = ACTIONS(93),
    [anon_sym_Trace] = ACTIONS(91),
    [anon_sym_TRACE] = ACTIONS(91),
    [anon_sym_verbose] = ACTIONS(93),
    [anon_sym_verb] = ACTIONS(93),
    [anon_sym_debug] = ACTIONS(93),
    [anon_sym_Debug] = ACTIONS(93),
    [anon_sym_DEBUG] = ACTIONS(93),
    [anon_sym_info] = ACTIONS(93),
    [anon_sym_Info] = ACTIONS(93),
    [anon_sym_INFO] = ACTIONS(93),
    [anon_sym_warn] = ACTIONS(93),
    [anon_sym_Warn] = ACTIONS(93),
    [anon_sym_WARN] = ACTIONS(93),
    [anon_sym_warning] = ACTIONS(93),
    [anon_sym_Warning] = ACTIONS(93),
    [anon_sym_WARNING] = ACTIONS(93),
    [anon_sym_error] = ACTIONS(93),
    [anon_sym_error_COLON] = ACTIONS(93),
    [anon_sym_Error] = ACTIONS(93),
    [anon_sym_ERROR] = ACTIONS(93),
    [anon_sym_ALERT] = ACTIONS(91),
    [anon_sym_CRITICAL] = ACTIONS(91),
    [anon_sym_EMERGENCY] = ACTIONS(93),
    [anon_sym_FAILURE] = ACTIONS(93),
    [anon_sym_FAIL] = ACTIONS(93),
    [anon_sym_fatal] = ACTIONS(93),
    [anon_sym_Fatal] = ACTIONS(93),
    [anon_sym_FATAL] = ACTIONS(91),
    [sym_year_month_day] = ACTIONS(93),
    [sym__time_with_offset] = ACTIONS(93),
    [sym__time_without_offset] = ACTIONS(93),
    [sym__raw_string_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [aux_sym_number_token1] = ACTIONS(93),
    [aux_sym_number_token2] = ACTIONS(93),
    [aux_sym_number_token3] = ACTIONS(93),
    [aux_sym_number_token4] = ACTIONS(93),
    [aux_sym_number_token5] = ACTIONS(93),
    [aux_sym_number_token6] = ACTIONS(93),
    [aux_sym_number_token7] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_T] = ACTIONS(93),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [sym_word] = ACTIONS(93),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [anon_sym_trace] = ACTIONS(97),
    [anon_sym_Trace] = ACTIONS(95),
    [anon_sym_TRACE] = ACTIONS(95),
    [anon_sym_verbose] = ACTIONS(97),
    [anon_sym_verb] = ACTIONS(97),
    [anon_sym_debug] = ACTIONS(97),
    [anon_sym_Debug] = ACTIONS(97),
    [anon_sym_DEBUG] = ACTIONS(97),
    [anon_sym_info] = ACTIONS(97),
    [anon_sym_Info] = ACTIONS(97),
    [anon_sym_INFO] = ACTIONS(97),
    [anon_sym_warn] = ACTIONS(97),
    [anon_sym_Warn] = ACTIONS(97),
    [anon_sym_WARN] = ACTIONS(97),
    [anon_sym_warning] = ACTIONS(97),
    [anon_sym_Warning] = ACTIONS(97),
    [anon_sym_WARNING] = ACTIONS(97),
    [anon_sym_error] = ACTIONS(97),
    [anon_sym_error_COLON] = ACTIONS(97),
    [anon_sym_Error] = ACTIONS(97),
    [anon_sym_ERROR] = ACTIONS(97),
    [anon_sym_ALERT] = ACTIONS(95),
    [anon_sym_CRITICAL] = ACTIONS(95),
    [anon_sym_EMERGENCY] = ACTIONS(97),
    [anon_sym_FAILURE] = ACTIONS(97),
    [anon_sym_FAIL] = ACTIONS(97),
    [anon_sym_fatal] = ACTIONS(97),
    [anon_sym_Fatal] = ACTIONS(97),
    [anon_sym_FATAL] = ACTIONS(95),
    [sym_year_month_day] = ACTIONS(97),
    [sym__time_with_offset] = ACTIONS(97),
    [sym__time_without_offset] = ACTIONS(97),
    [sym__raw_string_literal] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [aux_sym_number_token1] = ACTIONS(97),
    [aux_sym_number_token2] = ACTIONS(97),
    [aux_sym_number_token3] = ACTIONS(97),
    [aux_sym_number_token4] = ACTIONS(97),
    [aux_sym_number_token5] = ACTIONS(97),
    [aux_sym_number_token6] = ACTIONS(97),
    [aux_sym_number_token7] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_T] = ACTIONS(97),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [sym_word] = ACTIONS(97),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [anon_sym_trace] = ACTIONS(101),
    [anon_sym_Trace] = ACTIONS(99),
    [anon_sym_TRACE] = ACTIONS(99),
    [anon_sym_verbose] = ACTIONS(101),
    [anon_sym_verb] = ACTIONS(101),
    [anon_sym_debug] = ACTIONS(101),
    [anon_sym_Debug] = ACTIONS(101),
    [anon_sym_DEBUG] = ACTIONS(101),
    [anon_sym_info] = ACTIONS(101),
    [anon_sym_Info] = ACTIONS(101),
    [anon_sym_INFO] = ACTIONS(101),
    [anon_sym_warn] = ACTIONS(101),
    [anon_sym_Warn] = ACTIONS(101),
    [anon_sym_WARN] = ACTIONS(101),
    [anon_sym_warning] = ACTIONS(101),
    [anon_sym_Warning] = ACTIONS(101),
    [anon_sym_WARNING] = ACTIONS(101),
    [anon_sym_error] = ACTIONS(101),
    [anon_sym_error_COLON] = ACTIONS(101),
    [anon_sym_Error] = ACTIONS(101),
    [anon_sym_ERROR] = ACTIONS(101),
    [anon_sym_ALERT] = ACTIONS(99),
    [anon_sym_CRITICAL] = ACTIONS(99),
    [anon_sym_EMERGENCY] = ACTIONS(101),
    [anon_sym_FAILURE] = ACTIONS(101),
    [anon_sym_FAIL] = ACTIONS(101),
    [anon_sym_fatal] = ACTIONS(101),
    [anon_sym_Fatal] = ACTIONS(101),
    [anon_sym_FATAL] = ACTIONS(99),
    [sym_year_month_day] = ACTIONS(101),
    [sym__time_with_offset] = ACTIONS(101),
    [sym__time_without_offset] = ACTIONS(101),
    [sym__raw_string_literal] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [aux_sym_number_token1] = ACTIONS(101),
    [aux_sym_number_token2] = ACTIONS(101),
    [aux_sym_number_token3] = ACTIONS(101),
    [aux_sym_number_token4] = ACTIONS(101),
    [aux_sym_number_token5] = ACTIONS(101),
    [aux_sym_number_token6] = ACTIONS(101),
    [aux_sym_number_token7] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_T] = ACTIONS(101),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(99),
    [sym_word] = ACTIONS(101),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [anon_sym_trace] = ACTIONS(105),
    [anon_sym_Trace] = ACTIONS(103),
    [anon_sym_TRACE] = ACTIONS(103),
    [anon_sym_verbose] = ACTIONS(105),
    [anon_sym_verb] = ACTIONS(105),
    [anon_sym_debug] = ACTIONS(105),
    [anon_sym_Debug] = ACTIONS(105),
    [anon_sym_DEBUG] = ACTIONS(105),
    [anon_sym_info] = ACTIONS(105),
    [anon_sym_Info] = ACTIONS(105),
    [anon_sym_INFO] = ACTIONS(105),
    [anon_sym_warn] = ACTIONS(105),
    [anon_sym_Warn] = ACTIONS(105),
    [anon_sym_WARN] = ACTIONS(105),
    [anon_sym_warning] = ACTIONS(105),
    [anon_sym_Warning] = ACTIONS(105),
    [anon_sym_WARNING] = ACTIONS(105),
    [anon_sym_error] = ACTIONS(105),
    [anon_sym_error_COLON] = ACTIONS(105),
    [anon_sym_Error] = ACTIONS(105),
    [anon_sym_ERROR] = ACTIONS(105),
    [anon_sym_ALERT] = ACTIONS(103),
    [anon_sym_CRITICAL] = ACTIONS(103),
    [anon_sym_EMERGENCY] = ACTIONS(105),
    [anon_sym_FAILURE] = ACTIONS(105),
    [anon_sym_FAIL] = ACTIONS(105),
    [anon_sym_fatal] = ACTIONS(105),
    [anon_sym_Fatal] = ACTIONS(105),
    [anon_sym_FATAL] = ACTIONS(103),
    [sym_year_month_day] = ACTIONS(105),
    [sym__time_with_offset] = ACTIONS(105),
    [sym__time_without_offset] = ACTIONS(105),
    [sym__raw_string_literal] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [aux_sym_number_token1] = ACTIONS(105),
    [aux_sym_number_token2] = ACTIONS(105),
    [aux_sym_number_token3] = ACTIONS(105),
    [aux_sym_number_token4] = ACTIONS(105),
    [aux_sym_number_token5] = ACTIONS(105),
    [aux_sym_number_token6] = ACTIONS(105),
    [aux_sym_number_token7] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_T] = ACTIONS(105),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(103),
    [sym_word] = ACTIONS(105),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [anon_sym_trace] = ACTIONS(109),
    [anon_sym_Trace] = ACTIONS(107),
    [anon_sym_TRACE] = ACTIONS(107),
    [anon_sym_verbose] = ACTIONS(109),
    [anon_sym_verb] = ACTIONS(109),
    [anon_sym_debug] = ACTIONS(109),
    [anon_sym_Debug] = ACTIONS(109),
    [anon_sym_DEBUG] = ACTIONS(109),
    [anon_sym_info] = ACTIONS(109),
    [anon_sym_Info] = ACTIONS(109),
    [anon_sym_INFO] = ACTIONS(109),
    [anon_sym_warn] = ACTIONS(109),
    [anon_sym_Warn] = ACTIONS(109),
    [anon_sym_WARN] = ACTIONS(109),
    [anon_sym_warning] = ACTIONS(109),
    [anon_sym_Warning] = ACTIONS(109),
    [anon_sym_WARNING] = ACTIONS(109),
    [anon_sym_error] = ACTIONS(109),
    [anon_sym_error_COLON] = ACTIONS(109),
    [anon_sym_Error] = ACTIONS(109),
    [anon_sym_ERROR] = ACTIONS(109),
    [anon_sym_ALERT] = ACTIONS(107),
    [anon_sym_CRITICAL] = ACTIONS(107),
    [anon_sym_EMERGENCY] = ACTIONS(109),
    [anon_sym_FAILURE] = ACTIONS(109),
    [anon_sym_FAIL] = ACTIONS(109),
    [anon_sym_fatal] = ACTIONS(109),
    [anon_sym_Fatal] = ACTIONS(109),
    [anon_sym_FATAL] = ACTIONS(107),
    [sym_year_month_day] = ACTIONS(109),
    [sym__time_with_offset] = ACTIONS(109),
    [sym__time_without_offset] = ACTIONS(109),
    [sym__raw_string_literal] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [aux_sym_number_token1] = ACTIONS(109),
    [aux_sym_number_token2] = ACTIONS(109),
    [aux_sym_number_token3] = ACTIONS(109),
    [aux_sym_number_token4] = ACTIONS(109),
    [aux_sym_number_token5] = ACTIONS(109),
    [aux_sym_number_token6] = ACTIONS(109),
    [aux_sym_number_token7] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_T] = ACTIONS(109),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [sym_word] = ACTIONS(109),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(111),
    [anon_sym_trace] = ACTIONS(113),
    [anon_sym_Trace] = ACTIONS(111),
    [anon_sym_TRACE] = ACTIONS(111),
    [anon_sym_verbose] = ACTIONS(113),
    [anon_sym_verb] = ACTIONS(113),
    [anon_sym_debug] = ACTIONS(113),
    [anon_sym_Debug] = ACTIONS(113),
    [anon_sym_DEBUG] = ACTIONS(113),
    [anon_sym_info] = ACTIONS(113),
    [anon_sym_Info] = ACTIONS(113),
    [anon_sym_INFO] = ACTIONS(113),
    [anon_sym_warn] = ACTIONS(113),
    [anon_sym_Warn] = ACTIONS(113),
    [anon_sym_WARN] = ACTIONS(113),
    [anon_sym_warning] = ACTIONS(113),
    [anon_sym_Warning] = ACTIONS(113),
    [anon_sym_WARNING] = ACTIONS(113),
    [anon_sym_error] = ACTIONS(113),
    [anon_sym_error_COLON] = ACTIONS(113),
    [anon_sym_Error] = ACTIONS(113),
    [anon_sym_ERROR] = ACTIONS(113),
    [anon_sym_ALERT] = ACTIONS(111),
    [anon_sym_CRITICAL] = ACTIONS(111),
    [anon_sym_EMERGENCY] = ACTIONS(113),
    [anon_sym_FAILURE] = ACTIONS(113),
    [anon_sym_FAIL] = ACTIONS(113),
    [anon_sym_fatal] = ACTIONS(113),
    [anon_sym_Fatal] = ACTIONS(113),
    [anon_sym_FATAL] = ACTIONS(111),
    [sym_year_month_day] = ACTIONS(113),
    [sym__time_with_offset] = ACTIONS(113),
    [sym__time_without_offset] = ACTIONS(113),
    [sym__raw_string_literal] = ACTIONS(113),
    [anon_sym_DQUOTE] = ACTIONS(111),
    [aux_sym_number_token1] = ACTIONS(113),
    [aux_sym_number_token2] = ACTIONS(113),
    [aux_sym_number_token3] = ACTIONS(113),
    [aux_sym_number_token4] = ACTIONS(113),
    [aux_sym_number_token5] = ACTIONS(113),
    [aux_sym_number_token6] = ACTIONS(113),
    [aux_sym_number_token7] = ACTIONS(113),
    [anon_sym_LPAREN] = ACTIONS(111),
    [anon_sym_RPAREN] = ACTIONS(111),
    [anon_sym_T] = ACTIONS(113),
    [anon_sym_LBRACK] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [sym_word] = ACTIONS(113),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(115),
    [anon_sym_trace] = ACTIONS(117),
    [anon_sym_Trace] = ACTIONS(115),
    [anon_sym_TRACE] = ACTIONS(115),
    [anon_sym_verbose] = ACTIONS(117),
    [anon_sym_verb] = ACTIONS(117),
    [anon_sym_debug] = ACTIONS(117),
    [anon_sym_Debug] = ACTIONS(117),
    [anon_sym_DEBUG] = ACTIONS(117),
    [anon_sym_info] = ACTIONS(117),
    [anon_sym_Info] = ACTIONS(117),
    [anon_sym_INFO] = ACTIONS(117),
    [anon_sym_warn] = ACTIONS(117),
    [anon_sym_Warn] = ACTIONS(117),
    [anon_sym_WARN] = ACTIONS(117),
    [anon_sym_warning] = ACTIONS(117),
    [anon_sym_Warning] = ACTIONS(117),
    [anon_sym_WARNING] = ACTIONS(117),
    [anon_sym_error] = ACTIONS(117),
    [anon_sym_error_COLON] = ACTIONS(117),
    [anon_sym_Error] = ACTIONS(117),
    [anon_sym_ERROR] = ACTIONS(117),
    [anon_sym_ALERT] = ACTIONS(115),
    [anon_sym_CRITICAL] = ACTIONS(115),
    [anon_sym_EMERGENCY] = ACTIONS(117),
    [anon_sym_FAILURE] = ACTIONS(117),
    [anon_sym_FAIL] = ACTIONS(117),
    [anon_sym_fatal] = ACTIONS(117),
    [anon_sym_Fatal] = ACTIONS(117),
    [anon_sym_FATAL] = ACTIONS(115),
    [sym_year_month_day] = ACTIONS(117),
    [sym__time_with_offset] = ACTIONS(117),
    [sym__time_without_offset] = ACTIONS(117),
    [sym__raw_string_literal] = ACTIONS(117),
    [anon_sym_DQUOTE] = ACTIONS(115),
    [aux_sym_number_token1] = ACTIONS(117),
    [aux_sym_number_token2] = ACTIONS(117),
    [aux_sym_number_token3] = ACTIONS(117),
    [aux_sym_number_token4] = ACTIONS(117),
    [aux_sym_number_token5] = ACTIONS(117),
    [aux_sym_number_token6] = ACTIONS(117),
    [aux_sym_number_token7] = ACTIONS(117),
    [anon_sym_LPAREN] = ACTIONS(115),
    [anon_sym_RPAREN] = ACTIONS(115),
    [anon_sym_T] = ACTIONS(117),
    [anon_sym_LBRACK] = ACTIONS(115),
    [anon_sym_RBRACK] = ACTIONS(115),
    [sym_word] = ACTIONS(117),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [anon_sym_trace] = ACTIONS(121),
    [anon_sym_Trace] = ACTIONS(119),
    [anon_sym_TRACE] = ACTIONS(119),
    [anon_sym_verbose] = ACTIONS(121),
    [anon_sym_verb] = ACTIONS(121),
    [anon_sym_debug] = ACTIONS(121),
    [anon_sym_Debug] = ACTIONS(121),
    [anon_sym_DEBUG] = ACTIONS(121),
    [anon_sym_info] = ACTIONS(121),
    [anon_sym_Info] = ACTIONS(121),
    [anon_sym_INFO] = ACTIONS(121),
    [anon_sym_warn] = ACTIONS(121),
    [anon_sym_Warn] = ACTIONS(121),
    [anon_sym_WARN] = ACTIONS(121),
    [anon_sym_warning] = ACTIONS(121),
    [anon_sym_Warning] = ACTIONS(121),
    [anon_sym_WARNING] = ACTIONS(121),
    [anon_sym_error] = ACTIONS(121),
    [anon_sym_error_COLON] = ACTIONS(121),
    [anon_sym_Error] = ACTIONS(121),
    [anon_sym_ERROR] = ACTIONS(121),
    [anon_sym_ALERT] = ACTIONS(119),
    [anon_sym_CRITICAL] = ACTIONS(119),
    [anon_sym_EMERGENCY] = ACTIONS(121),
    [anon_sym_FAILURE] = ACTIONS(121),
    [anon_sym_FAIL] = ACTIONS(121),
    [anon_sym_fatal] = ACTIONS(121),
    [anon_sym_Fatal] = ACTIONS(121),
    [anon_sym_FATAL] = ACTIONS(119),
    [sym_year_month_day] = ACTIONS(121),
    [sym__time_with_offset] = ACTIONS(121),
    [sym__time_without_offset] = ACTIONS(121),
    [sym__raw_string_literal] = ACTIONS(121),
    [anon_sym_DQUOTE] = ACTIONS(119),
    [aux_sym_number_token1] = ACTIONS(121),
    [aux_sym_number_token2] = ACTIONS(121),
    [aux_sym_number_token3] = ACTIONS(121),
    [aux_sym_number_token4] = ACTIONS(121),
    [aux_sym_number_token5] = ACTIONS(121),
    [aux_sym_number_token6] = ACTIONS(121),
    [aux_sym_number_token7] = ACTIONS(121),
    [anon_sym_LPAREN] = ACTIONS(119),
    [anon_sym_RPAREN] = ACTIONS(119),
    [anon_sym_T] = ACTIONS(121),
    [anon_sym_LBRACK] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(119),
    [sym_word] = ACTIONS(121),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(123),
    [anon_sym_trace] = ACTIONS(125),
    [anon_sym_Trace] = ACTIONS(123),
    [anon_sym_TRACE] = ACTIONS(123),
    [anon_sym_verbose] = ACTIONS(125),
    [anon_sym_verb] = ACTIONS(125),
    [anon_sym_debug] = ACTIONS(125),
    [anon_sym_Debug] = ACTIONS(125),
    [anon_sym_DEBUG] = ACTIONS(125),
    [anon_sym_info] = ACTIONS(125),
    [anon_sym_Info] = ACTIONS(125),
    [anon_sym_INFO] = ACTIONS(125),
    [anon_sym_warn] = ACTIONS(125),
    [anon_sym_Warn] = ACTIONS(125),
    [anon_sym_WARN] = ACTIONS(125),
    [anon_sym_warning] = ACTIONS(125),
    [anon_sym_Warning] = ACTIONS(125),
    [anon_sym_WARNING] = ACTIONS(125),
    [anon_sym_error] = ACTIONS(125),
    [anon_sym_error_COLON] = ACTIONS(125),
    [anon_sym_Error] = ACTIONS(125),
    [anon_sym_ERROR] = ACTIONS(125),
    [anon_sym_ALERT] = ACTIONS(123),
    [anon_sym_CRITICAL] = ACTIONS(123),
    [anon_sym_EMERGENCY] = ACTIONS(125),
    [anon_sym_FAILURE] = ACTIONS(125),
    [anon_sym_FAIL] = ACTIONS(125),
    [anon_sym_fatal] = ACTIONS(125),
    [anon_sym_Fatal] = ACTIONS(125),
    [anon_sym_FATAL] = ACTIONS(123),
    [sym_year_month_day] = ACTIONS(125),
    [sym__time_with_offset] = ACTIONS(125),
    [sym__time_without_offset] = ACTIONS(125),
    [sym__raw_string_literal] = ACTIONS(125),
    [anon_sym_DQUOTE] = ACTIONS(123),
    [aux_sym_number_token1] = ACTIONS(125),
    [aux_sym_number_token2] = ACTIONS(125),
    [aux_sym_number_token3] = ACTIONS(125),
    [aux_sym_number_token4] = ACTIONS(125),
    [aux_sym_number_token5] = ACTIONS(125),
    [aux_sym_number_token6] = ACTIONS(125),
    [aux_sym_number_token7] = ACTIONS(125),
    [anon_sym_LPAREN] = ACTIONS(123),
    [anon_sym_RPAREN] = ACTIONS(123),
    [anon_sym_T] = ACTIONS(125),
    [anon_sym_LBRACK] = ACTIONS(123),
    [anon_sym_RBRACK] = ACTIONS(123),
    [sym_word] = ACTIONS(125),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [anon_sym_trace] = ACTIONS(129),
    [anon_sym_Trace] = ACTIONS(127),
    [anon_sym_TRACE] = ACTIONS(127),
    [anon_sym_verbose] = ACTIONS(129),
    [anon_sym_verb] = ACTIONS(129),
    [anon_sym_debug] = ACTIONS(129),
    [anon_sym_Debug] = ACTIONS(129),
    [anon_sym_DEBUG] = ACTIONS(129),
    [anon_sym_info] = ACTIONS(129),
    [anon_sym_Info] = ACTIONS(129),
    [anon_sym_INFO] = ACTIONS(129),
    [anon_sym_warn] = ACTIONS(129),
    [anon_sym_Warn] = ACTIONS(129),
    [anon_sym_WARN] = ACTIONS(129),
    [anon_sym_warning] = ACTIONS(129),
    [anon_sym_Warning] = ACTIONS(129),
    [anon_sym_WARNING] = ACTIONS(129),
    [anon_sym_error] = ACTIONS(129),
    [anon_sym_error_COLON] = ACTIONS(129),
    [anon_sym_Error] = ACTIONS(129),
    [anon_sym_ERROR] = ACTIONS(129),
    [anon_sym_ALERT] = ACTIONS(127),
    [anon_sym_CRITICAL] = ACTIONS(127),
    [anon_sym_EMERGENCY] = ACTIONS(129),
    [anon_sym_FAILURE] = ACTIONS(129),
    [anon_sym_FAIL] = ACTIONS(129),
    [anon_sym_fatal] = ACTIONS(129),
    [anon_sym_Fatal] = ACTIONS(129),
    [anon_sym_FATAL] = ACTIONS(127),
    [sym_year_month_day] = ACTIONS(129),
    [sym__time_with_offset] = ACTIONS(129),
    [sym__time_without_offset] = ACTIONS(129),
    [sym__raw_string_literal] = ACTIONS(129),
    [anon_sym_DQUOTE] = ACTIONS(127),
    [aux_sym_number_token1] = ACTIONS(129),
    [aux_sym_number_token2] = ACTIONS(129),
    [aux_sym_number_token3] = ACTIONS(129),
    [aux_sym_number_token4] = ACTIONS(129),
    [aux_sym_number_token5] = ACTIONS(129),
    [aux_sym_number_token6] = ACTIONS(129),
    [aux_sym_number_token7] = ACTIONS(129),
    [anon_sym_LPAREN] = ACTIONS(127),
    [anon_sym_RPAREN] = ACTIONS(127),
    [anon_sym_T] = ACTIONS(129),
    [anon_sym_LBRACK] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(127),
    [sym_word] = ACTIONS(129),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(131), 1,
      anon_sym_DQUOTE2,
    STATE(17), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(133), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [11] = 3,
    ACTIONS(135), 1,
      anon_sym_DQUOTE2,
    STATE(18), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(137), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [22] = 3,
    ACTIONS(139), 1,
      anon_sym_DQUOTE2,
    STATE(18), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(141), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [33] = 1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(16)] = 0,
  [SMALL_STATE(17)] = 11,
  [SMALL_STATE(18)] = 22,
  [SMALL_STATE(19)] = 33,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_file, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(4),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(4),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(5),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(6),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(7),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(8),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(8),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(9),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(10),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(11),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(16),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(12),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(3),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trace, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trace, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_debug, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_info, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warn, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warn, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error, 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level, 1),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_level, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 3),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(18),
  [144] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_debug(void) {
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
