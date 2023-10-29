#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
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
  anon_sym_True = 34,
  sym__raw_string_literal = 35,
  anon_sym_DQUOTE = 36,
  anon_sym_DQUOTE2 = 37,
  sym__interpreted_string_literal_basic_content = 38,
  sym__escape_sequence = 39,
  sym_number = 40,
  sym__left_parenthesis = 41,
  sym__right_parenthesis = 42,
  sym__left_bracket = 43,
  sym__right_bracket = 44,
  sym_word = 45,
  sym_log_file = 46,
  sym_log_level = 47,
  sym_trace = 48,
  sym_debug = 49,
  sym_info = 50,
  sym_warn = 51,
  sym_error = 52,
  sym_date = 53,
  sym_time = 54,
  sym_string_literal = 55,
  sym__interpreted_string_literal = 56,
  aux_sym_log_file_repeat1 = 57,
  aux_sym__interpreted_string_literal_repeat1 = 58,
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
  [anon_sym_True] = "True",
  [sym__raw_string_literal] = "_raw_string_literal",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [sym__interpreted_string_literal_basic_content] = "_interpreted_string_literal_basic_content",
  [sym__escape_sequence] = "_escape_sequence",
  [sym_number] = "number",
  [sym__left_parenthesis] = "_left_parenthesis",
  [sym__right_parenthesis] = "_right_parenthesis",
  [sym__left_bracket] = "_left_bracket",
  [sym__right_bracket] = "_right_bracket",
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
  [anon_sym_True] = anon_sym_True,
  [sym__raw_string_literal] = sym__raw_string_literal,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym__interpreted_string_literal_basic_content] = sym__interpreted_string_literal_basic_content,
  [sym__escape_sequence] = sym__escape_sequence,
  [sym_number] = sym_number,
  [sym__left_parenthesis] = sym__left_parenthesis,
  [sym__right_parenthesis] = sym__right_parenthesis,
  [sym__left_bracket] = sym__left_bracket,
  [sym__right_bracket] = sym__right_bracket,
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
  [anon_sym_True] = {
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym__left_parenthesis] = {
    .visible = false,
    .named = true,
  },
  [sym__right_parenthesis] = {
    .visible = false,
    .named = true,
  },
  [sym__left_bracket] = {
    .visible = false,
    .named = true,
  },
  [sym__right_bracket] = {
    .visible = false,
    .named = true,
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
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == '1') ADVANCE(98);
      if (lookahead == '2') ADVANCE(97);
      if (lookahead == '3') ADVANCE(96);
      if (lookahead == 'A') ADVANCE(111);
      if (lookahead == 'C') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(109);
      if (lookahead == 'E') ADVANCE(112);
      if (lookahead == 'F') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(165);
      if (lookahead == 'T') ADVANCE(13);
      if (lookahead == 'W') ADVANCE(153);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == '\\') ADVANCE(179);
      if (lookahead == ']') ADVANCE(142);
      if (lookahead == '`') ADVANCE(181);
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead == 'v') ADVANCE(192);
      if (lookahead == 'w') ADVANCE(186);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(87);
      END_STATE();
    case 2:
      if (lookahead == '2') ADVANCE(23);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(26);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(24);
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
      if (lookahead == 'E') ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == 'I') ADVANCE(8);
      END_STATE();
    case 11:
      if (lookahead == 'L') ADVANCE(66);
      END_STATE();
    case 12:
      if (lookahead == 'L') ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == 'R') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'R') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'U') ADVANCE(34);
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (lookahead != 0) ADVANCE(88);
      END_STATE();
    case 16:
      if (lookahead == '`') ADVANCE(83);
      if (lookahead != 0) ADVANCE(16);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(82);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(74);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(3);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(25);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
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
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      END_STATE();
    case 33:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 35:
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == '1') ADVANCE(98);
      if (lookahead == '2') ADVANCE(97);
      if (lookahead == '3') ADVANCE(96);
      if (lookahead == 'A') ADVANCE(111);
      if (lookahead == 'C') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(109);
      if (lookahead == 'E') ADVANCE(112);
      if (lookahead == 'F') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(165);
      if (lookahead == 'T') ADVANCE(13);
      if (lookahead == 'W') ADVANCE(153);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == ']') ADVANCE(142);
      if (lookahead == '`') ADVANCE(181);
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == 't') ADVANCE(210);
      if (lookahead == 'v') ADVANCE(192);
      if (lookahead == 'w') ADVANCE(186);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(35)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 36:
      if (eof) ADVANCE(37);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '(') ADVANCE(139);
      if (lookahead == ')') ADVANCE(140);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == '1') ADVANCE(98);
      if (lookahead == '2') ADVANCE(97);
      if (lookahead == '3') ADVANCE(96);
      if (lookahead == 'A') ADVANCE(111);
      if (lookahead == 'C') ADVANCE(113);
      if (lookahead == 'D') ADVANCE(109);
      if (lookahead == 'E') ADVANCE(112);
      if (lookahead == 'F') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(165);
      if (lookahead == 'T') ADVANCE(14);
      if (lookahead == 'W') ADVANCE(153);
      if (lookahead == '[') ADVANCE(141);
      if (lookahead == ']') ADVANCE(142);
      if (lookahead == '`') ADVANCE(181);
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead == 'e') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(115);
      if (lookahead == 'i') ADVANCE(205);
      if (lookahead == 't') ADVANCE(217);
      if (lookahead == 'v') ADVANCE(192);
      if (lookahead == 'w') ADVANCE(186);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(36)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (lookahead != 0) ADVANCE(242);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_trace);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_Trace);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_TRACE);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_verbose);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_verb);
      if (lookahead == 'o') ADVANCE(219);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_debug);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_Debug);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DEBUG);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_info);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_Info);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_INFO);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_warn);
      if (lookahead == 'i') ADVANCE(204);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_Warn);
      if (lookahead == 'i') ADVANCE(203);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_WARN);
      if (lookahead == 'I') ADVANCE(168);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_warning);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_Warning);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_WARNING);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_error);
      if (lookahead == ':') ADVANCE(56);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_error_COLON);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_Error);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_ERROR);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_ALERT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_CRITICAL);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_EMERGENCY);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_FAILURE);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_FAIL);
      if (lookahead == 'U') ADVANCE(176);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_fatal);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_Fatal);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_FATAL);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_year_month_day);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '0') ADVANCE(70);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == ' ' ||
          lookahead == 'T') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(242);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == ' ' ||
          lookahead == 'T') ADVANCE(67);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(70);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(242);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == ' ' ||
          lookahead == 'T') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(242);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == ' ' ||
          lookahead == 'T') ADVANCE(67);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(242);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == 't') ADVANCE(73);
      if (lookahead == ' ' ||
          lookahead == 'T') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(242);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_year_month_day);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__time_with_offset);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__time_with_offset);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__time_with_offset);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '+') ADVANCE(149);
      if (lookahead == ',') ADVANCE(228);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 'T' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(242);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '+') ADVANCE(149);
      if (lookahead == ',') ADVANCE(228);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '.') ADVANCE(229);
      if (lookahead == ':') ADVANCE(151);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 'T' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(242);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '+') ADVANCE(149);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 'T' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(242);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(149);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != 'T' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(242);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_true);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__raw_string_literal);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(88);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(143);
      if (lookahead == '.') ADVANCE(233);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '_') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(143);
      if (lookahead == '0') ADVANCE(94);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(143);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(102);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(143);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(103);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(143);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(143);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(148);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(145);
      if (lookahead == '.') ADVANCE(230);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '_') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '_') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '-') ADVANCE(146);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '/') ADVANCE(144);
      if (lookahead == ':') ADVANCE(223);
      if (lookahead == '_') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '/') ADVANCE(231);
      if (lookahead == ':') ADVANCE(233);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == ':') ADVANCE(224);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'A') ADVANCE(110);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'B') ADVANCE(114);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E') ADVANCE(108);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'e') ADVANCE(116);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'I') ADVANCE(164);
      if (lookahead == 'T') ADVANCE(5);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(242);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'L') ADVANCE(156);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'M') ADVANCE(158);
      if (lookahead == 'R') ADVANCE(171);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'r') ADVANCE(211);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'R') ADVANCE(163);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'U') ADVANCE(160);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'b') ADVANCE(122);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'b') ADVANCE(123);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'e') ADVANCE(117);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'r') ADVANCE(218);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 't') ADVANCE(185);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'u') ADVANCE(195);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(71);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(100);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(101);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(104);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(106);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(233);
      if (lookahead == '-' ||
          lookahead == '.' ||
          lookahead == ':') ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__left_parenthesis);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__right_parenthesis);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__left_bracket);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__right_bracket);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(129);
      if (lookahead == '1') ADVANCE(125);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(226);
      if (lookahead == '1') ADVANCE(221);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(68);
      if (lookahead == '3') ADVANCE(69);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(70);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(130);
      if (lookahead == '1') ADVANCE(126);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(131);
      if (lookahead == '1') ADVANCE(127);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(132);
      if (lookahead == '3') ADVANCE(124);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(134);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '2') ADVANCE(222);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(232);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '2') ADVANCE(128);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(135);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '6') ADVANCE(105);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(137);
      if (('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(225);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(172);
      if (lookahead == 'a') ADVANCE(215);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(180);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(62);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(174);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(167);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(175);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(169);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(45);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(54);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(157);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(177);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(63);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(159);
      if (lookahead == 'n') ADVANCE(193);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(51);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(154);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(161);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(48);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(173);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(170);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(166);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(58);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(178);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(162);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(155);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 177:
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
          lookahead != ']') ADVANCE(242);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(59);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(242);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(241);
      if (lookahead == 'u') ADVANCE(237);
      if (lookahead == 'x') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == 'T' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (lookahead != 0) ADVANCE(93);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'Y') ADVANCE(61);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '`') ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '"' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == 'T' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(16);
      if (lookahead != 0) ADVANCE(181);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(188);
      if (lookahead == 'u') ADVANCE(189);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(188);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(199);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(200);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(216);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(42);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(190);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(81);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(38);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(41);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(212);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(206);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(207);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(44);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(43);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(53);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(52);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(65);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(64);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(50);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(49);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(197);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(198);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(194);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(47);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(46);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(213);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(214);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(182);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(208);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(187);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(57);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(55);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(201);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(202);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(183);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(209);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(191);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_word);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(231);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(220);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(152);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(133);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(136);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(227);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_word);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(138);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_word);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(242);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 36},
  [3] = {.lex_state = 36},
  [4] = {.lex_state = 36},
  [5] = {.lex_state = 36},
  [6] = {.lex_state = 36},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 36},
  [9] = {.lex_state = 36},
  [10] = {.lex_state = 36},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 36},
  [13] = {.lex_state = 36},
  [14] = {.lex_state = 36},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 0},
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
    [anon_sym_True] = ACTIONS(1),
    [sym__raw_string_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym__left_parenthesis] = ACTIONS(1),
    [sym__right_parenthesis] = ACTIONS(1),
    [sym__left_bracket] = ACTIONS(1),
    [sym__right_bracket] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
  },
  [1] = {
    [sym_log_file] = STATE(18),
    [sym_log_level] = STATE(2),
    [sym_trace] = STATE(12),
    [sym_debug] = STATE(12),
    [sym_info] = STATE(12),
    [sym_warn] = STATE(12),
    [sym_error] = STATE(12),
    [sym_date] = STATE(2),
    [sym_time] = STATE(9),
    [sym_string_literal] = STATE(2),
    [sym__interpreted_string_literal] = STATE(11),
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
    [sym_number] = ACTIONS(27),
    [sym__left_parenthesis] = ACTIONS(29),
    [sym__right_parenthesis] = ACTIONS(29),
    [sym__left_bracket] = ACTIONS(29),
    [sym__right_bracket] = ACTIONS(29),
    [sym_word] = ACTIONS(27),
  },
  [2] = {
    [sym_log_level] = STATE(3),
    [sym_trace] = STATE(12),
    [sym_debug] = STATE(12),
    [sym_info] = STATE(12),
    [sym_warn] = STATE(12),
    [sym_error] = STATE(12),
    [sym_date] = STATE(3),
    [sym_time] = STATE(9),
    [sym_string_literal] = STATE(3),
    [sym__interpreted_string_literal] = STATE(11),
    [aux_sym_log_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(31),
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
    [sym_number] = ACTIONS(33),
    [sym__left_parenthesis] = ACTIONS(35),
    [sym__right_parenthesis] = ACTIONS(35),
    [sym__left_bracket] = ACTIONS(35),
    [sym__right_bracket] = ACTIONS(35),
    [sym_word] = ACTIONS(33),
  },
  [3] = {
    [sym_log_level] = STATE(3),
    [sym_trace] = STATE(12),
    [sym_debug] = STATE(12),
    [sym_info] = STATE(12),
    [sym_warn] = STATE(12),
    [sym_error] = STATE(12),
    [sym_date] = STATE(3),
    [sym_time] = STATE(9),
    [sym_string_literal] = STATE(3),
    [sym__interpreted_string_literal] = STATE(11),
    [aux_sym_log_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(37),
    [anon_sym_trace] = ACTIONS(39),
    [anon_sym_Trace] = ACTIONS(42),
    [anon_sym_TRACE] = ACTIONS(42),
    [anon_sym_verbose] = ACTIONS(39),
    [anon_sym_verb] = ACTIONS(39),
    [anon_sym_debug] = ACTIONS(45),
    [anon_sym_Debug] = ACTIONS(45),
    [anon_sym_DEBUG] = ACTIONS(45),
    [anon_sym_info] = ACTIONS(48),
    [anon_sym_Info] = ACTIONS(48),
    [anon_sym_INFO] = ACTIONS(48),
    [anon_sym_warn] = ACTIONS(51),
    [anon_sym_Warn] = ACTIONS(51),
    [anon_sym_WARN] = ACTIONS(51),
    [anon_sym_warning] = ACTIONS(51),
    [anon_sym_Warning] = ACTIONS(51),
    [anon_sym_WARNING] = ACTIONS(51),
    [anon_sym_error] = ACTIONS(54),
    [anon_sym_error_COLON] = ACTIONS(54),
    [anon_sym_Error] = ACTIONS(54),
    [anon_sym_ERROR] = ACTIONS(54),
    [anon_sym_ALERT] = ACTIONS(57),
    [anon_sym_CRITICAL] = ACTIONS(57),
    [anon_sym_EMERGENCY] = ACTIONS(54),
    [anon_sym_FAILURE] = ACTIONS(54),
    [anon_sym_FAIL] = ACTIONS(54),
    [anon_sym_fatal] = ACTIONS(54),
    [anon_sym_Fatal] = ACTIONS(54),
    [anon_sym_FATAL] = ACTIONS(57),
    [sym_year_month_day] = ACTIONS(60),
    [sym__time_with_offset] = ACTIONS(63),
    [sym__time_without_offset] = ACTIONS(63),
    [sym__raw_string_literal] = ACTIONS(66),
    [anon_sym_DQUOTE] = ACTIONS(69),
    [sym_number] = ACTIONS(72),
    [sym__left_parenthesis] = ACTIONS(75),
    [sym__right_parenthesis] = ACTIONS(75),
    [sym__left_bracket] = ACTIONS(75),
    [sym__right_bracket] = ACTIONS(75),
    [sym_word] = ACTIONS(72),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(78),
    [anon_sym_trace] = ACTIONS(80),
    [anon_sym_Trace] = ACTIONS(78),
    [anon_sym_TRACE] = ACTIONS(78),
    [anon_sym_verbose] = ACTIONS(80),
    [anon_sym_verb] = ACTIONS(80),
    [anon_sym_debug] = ACTIONS(80),
    [anon_sym_Debug] = ACTIONS(80),
    [anon_sym_DEBUG] = ACTIONS(80),
    [anon_sym_info] = ACTIONS(80),
    [anon_sym_Info] = ACTIONS(80),
    [anon_sym_INFO] = ACTIONS(80),
    [anon_sym_warn] = ACTIONS(80),
    [anon_sym_Warn] = ACTIONS(80),
    [anon_sym_WARN] = ACTIONS(80),
    [anon_sym_warning] = ACTIONS(80),
    [anon_sym_Warning] = ACTIONS(80),
    [anon_sym_WARNING] = ACTIONS(80),
    [anon_sym_error] = ACTIONS(80),
    [anon_sym_error_COLON] = ACTIONS(80),
    [anon_sym_Error] = ACTIONS(80),
    [anon_sym_ERROR] = ACTIONS(80),
    [anon_sym_ALERT] = ACTIONS(78),
    [anon_sym_CRITICAL] = ACTIONS(78),
    [anon_sym_EMERGENCY] = ACTIONS(80),
    [anon_sym_FAILURE] = ACTIONS(80),
    [anon_sym_FAIL] = ACTIONS(80),
    [anon_sym_fatal] = ACTIONS(80),
    [anon_sym_Fatal] = ACTIONS(80),
    [anon_sym_FATAL] = ACTIONS(78),
    [sym_year_month_day] = ACTIONS(80),
    [sym__time_with_offset] = ACTIONS(80),
    [sym__time_without_offset] = ACTIONS(80),
    [sym__raw_string_literal] = ACTIONS(80),
    [anon_sym_DQUOTE] = ACTIONS(78),
    [sym_number] = ACTIONS(80),
    [sym__left_parenthesis] = ACTIONS(78),
    [sym__right_parenthesis] = ACTIONS(78),
    [sym__left_bracket] = ACTIONS(78),
    [sym__right_bracket] = ACTIONS(78),
    [sym_word] = ACTIONS(80),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(82),
    [anon_sym_trace] = ACTIONS(84),
    [anon_sym_Trace] = ACTIONS(82),
    [anon_sym_TRACE] = ACTIONS(82),
    [anon_sym_verbose] = ACTIONS(84),
    [anon_sym_verb] = ACTIONS(84),
    [anon_sym_debug] = ACTIONS(84),
    [anon_sym_Debug] = ACTIONS(84),
    [anon_sym_DEBUG] = ACTIONS(84),
    [anon_sym_info] = ACTIONS(84),
    [anon_sym_Info] = ACTIONS(84),
    [anon_sym_INFO] = ACTIONS(84),
    [anon_sym_warn] = ACTIONS(84),
    [anon_sym_Warn] = ACTIONS(84),
    [anon_sym_WARN] = ACTIONS(84),
    [anon_sym_warning] = ACTIONS(84),
    [anon_sym_Warning] = ACTIONS(84),
    [anon_sym_WARNING] = ACTIONS(84),
    [anon_sym_error] = ACTIONS(84),
    [anon_sym_error_COLON] = ACTIONS(84),
    [anon_sym_Error] = ACTIONS(84),
    [anon_sym_ERROR] = ACTIONS(84),
    [anon_sym_ALERT] = ACTIONS(82),
    [anon_sym_CRITICAL] = ACTIONS(82),
    [anon_sym_EMERGENCY] = ACTIONS(84),
    [anon_sym_FAILURE] = ACTIONS(84),
    [anon_sym_FAIL] = ACTIONS(84),
    [anon_sym_fatal] = ACTIONS(84),
    [anon_sym_Fatal] = ACTIONS(84),
    [anon_sym_FATAL] = ACTIONS(82),
    [sym_year_month_day] = ACTIONS(84),
    [sym__time_with_offset] = ACTIONS(84),
    [sym__time_without_offset] = ACTIONS(84),
    [sym__raw_string_literal] = ACTIONS(84),
    [anon_sym_DQUOTE] = ACTIONS(82),
    [sym_number] = ACTIONS(84),
    [sym__left_parenthesis] = ACTIONS(82),
    [sym__right_parenthesis] = ACTIONS(82),
    [sym__left_bracket] = ACTIONS(82),
    [sym__right_bracket] = ACTIONS(82),
    [sym_word] = ACTIONS(84),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(86),
    [anon_sym_trace] = ACTIONS(88),
    [anon_sym_Trace] = ACTIONS(86),
    [anon_sym_TRACE] = ACTIONS(86),
    [anon_sym_verbose] = ACTIONS(88),
    [anon_sym_verb] = ACTIONS(88),
    [anon_sym_debug] = ACTIONS(88),
    [anon_sym_Debug] = ACTIONS(88),
    [anon_sym_DEBUG] = ACTIONS(88),
    [anon_sym_info] = ACTIONS(88),
    [anon_sym_Info] = ACTIONS(88),
    [anon_sym_INFO] = ACTIONS(88),
    [anon_sym_warn] = ACTIONS(88),
    [anon_sym_Warn] = ACTIONS(88),
    [anon_sym_WARN] = ACTIONS(88),
    [anon_sym_warning] = ACTIONS(88),
    [anon_sym_Warning] = ACTIONS(88),
    [anon_sym_WARNING] = ACTIONS(88),
    [anon_sym_error] = ACTIONS(88),
    [anon_sym_error_COLON] = ACTIONS(88),
    [anon_sym_Error] = ACTIONS(88),
    [anon_sym_ERROR] = ACTIONS(88),
    [anon_sym_ALERT] = ACTIONS(86),
    [anon_sym_CRITICAL] = ACTIONS(86),
    [anon_sym_EMERGENCY] = ACTIONS(88),
    [anon_sym_FAILURE] = ACTIONS(88),
    [anon_sym_FAIL] = ACTIONS(88),
    [anon_sym_fatal] = ACTIONS(88),
    [anon_sym_Fatal] = ACTIONS(88),
    [anon_sym_FATAL] = ACTIONS(86),
    [sym_year_month_day] = ACTIONS(88),
    [sym__time_with_offset] = ACTIONS(88),
    [sym__time_without_offset] = ACTIONS(88),
    [sym__raw_string_literal] = ACTIONS(88),
    [anon_sym_DQUOTE] = ACTIONS(86),
    [sym_number] = ACTIONS(88),
    [sym__left_parenthesis] = ACTIONS(86),
    [sym__right_parenthesis] = ACTIONS(86),
    [sym__left_bracket] = ACTIONS(86),
    [sym__right_bracket] = ACTIONS(86),
    [sym_word] = ACTIONS(88),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(90),
    [anon_sym_trace] = ACTIONS(92),
    [anon_sym_Trace] = ACTIONS(90),
    [anon_sym_TRACE] = ACTIONS(90),
    [anon_sym_verbose] = ACTIONS(92),
    [anon_sym_verb] = ACTIONS(92),
    [anon_sym_debug] = ACTIONS(92),
    [anon_sym_Debug] = ACTIONS(92),
    [anon_sym_DEBUG] = ACTIONS(92),
    [anon_sym_info] = ACTIONS(92),
    [anon_sym_Info] = ACTIONS(92),
    [anon_sym_INFO] = ACTIONS(92),
    [anon_sym_warn] = ACTIONS(92),
    [anon_sym_Warn] = ACTIONS(92),
    [anon_sym_WARN] = ACTIONS(92),
    [anon_sym_warning] = ACTIONS(92),
    [anon_sym_Warning] = ACTIONS(92),
    [anon_sym_WARNING] = ACTIONS(92),
    [anon_sym_error] = ACTIONS(92),
    [anon_sym_error_COLON] = ACTIONS(92),
    [anon_sym_Error] = ACTIONS(92),
    [anon_sym_ERROR] = ACTIONS(92),
    [anon_sym_ALERT] = ACTIONS(90),
    [anon_sym_CRITICAL] = ACTIONS(90),
    [anon_sym_EMERGENCY] = ACTIONS(92),
    [anon_sym_FAILURE] = ACTIONS(92),
    [anon_sym_FAIL] = ACTIONS(92),
    [anon_sym_fatal] = ACTIONS(92),
    [anon_sym_Fatal] = ACTIONS(92),
    [anon_sym_FATAL] = ACTIONS(90),
    [sym_year_month_day] = ACTIONS(92),
    [sym__time_with_offset] = ACTIONS(92),
    [sym__time_without_offset] = ACTIONS(92),
    [sym__raw_string_literal] = ACTIONS(92),
    [anon_sym_DQUOTE] = ACTIONS(90),
    [sym_number] = ACTIONS(92),
    [sym__left_parenthesis] = ACTIONS(90),
    [sym__right_parenthesis] = ACTIONS(90),
    [sym__left_bracket] = ACTIONS(90),
    [sym__right_bracket] = ACTIONS(90),
    [sym_word] = ACTIONS(92),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [anon_sym_trace] = ACTIONS(96),
    [anon_sym_Trace] = ACTIONS(94),
    [anon_sym_TRACE] = ACTIONS(94),
    [anon_sym_verbose] = ACTIONS(96),
    [anon_sym_verb] = ACTIONS(96),
    [anon_sym_debug] = ACTIONS(96),
    [anon_sym_Debug] = ACTIONS(96),
    [anon_sym_DEBUG] = ACTIONS(96),
    [anon_sym_info] = ACTIONS(96),
    [anon_sym_Info] = ACTIONS(96),
    [anon_sym_INFO] = ACTIONS(96),
    [anon_sym_warn] = ACTIONS(96),
    [anon_sym_Warn] = ACTIONS(96),
    [anon_sym_WARN] = ACTIONS(96),
    [anon_sym_warning] = ACTIONS(96),
    [anon_sym_Warning] = ACTIONS(96),
    [anon_sym_WARNING] = ACTIONS(96),
    [anon_sym_error] = ACTIONS(96),
    [anon_sym_error_COLON] = ACTIONS(96),
    [anon_sym_Error] = ACTIONS(96),
    [anon_sym_ERROR] = ACTIONS(96),
    [anon_sym_ALERT] = ACTIONS(94),
    [anon_sym_CRITICAL] = ACTIONS(94),
    [anon_sym_EMERGENCY] = ACTIONS(96),
    [anon_sym_FAILURE] = ACTIONS(96),
    [anon_sym_FAIL] = ACTIONS(96),
    [anon_sym_fatal] = ACTIONS(96),
    [anon_sym_Fatal] = ACTIONS(96),
    [anon_sym_FATAL] = ACTIONS(94),
    [sym_year_month_day] = ACTIONS(96),
    [sym__time_with_offset] = ACTIONS(96),
    [sym__time_without_offset] = ACTIONS(96),
    [sym__raw_string_literal] = ACTIONS(96),
    [anon_sym_DQUOTE] = ACTIONS(94),
    [sym_number] = ACTIONS(96),
    [sym__left_parenthesis] = ACTIONS(94),
    [sym__right_parenthesis] = ACTIONS(94),
    [sym__left_bracket] = ACTIONS(94),
    [sym__right_bracket] = ACTIONS(94),
    [sym_word] = ACTIONS(96),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(98),
    [anon_sym_trace] = ACTIONS(100),
    [anon_sym_Trace] = ACTIONS(98),
    [anon_sym_TRACE] = ACTIONS(98),
    [anon_sym_verbose] = ACTIONS(100),
    [anon_sym_verb] = ACTIONS(100),
    [anon_sym_debug] = ACTIONS(100),
    [anon_sym_Debug] = ACTIONS(100),
    [anon_sym_DEBUG] = ACTIONS(100),
    [anon_sym_info] = ACTIONS(100),
    [anon_sym_Info] = ACTIONS(100),
    [anon_sym_INFO] = ACTIONS(100),
    [anon_sym_warn] = ACTIONS(100),
    [anon_sym_Warn] = ACTIONS(100),
    [anon_sym_WARN] = ACTIONS(100),
    [anon_sym_warning] = ACTIONS(100),
    [anon_sym_Warning] = ACTIONS(100),
    [anon_sym_WARNING] = ACTIONS(100),
    [anon_sym_error] = ACTIONS(100),
    [anon_sym_error_COLON] = ACTIONS(100),
    [anon_sym_Error] = ACTIONS(100),
    [anon_sym_ERROR] = ACTIONS(100),
    [anon_sym_ALERT] = ACTIONS(98),
    [anon_sym_CRITICAL] = ACTIONS(98),
    [anon_sym_EMERGENCY] = ACTIONS(100),
    [anon_sym_FAILURE] = ACTIONS(100),
    [anon_sym_FAIL] = ACTIONS(100),
    [anon_sym_fatal] = ACTIONS(100),
    [anon_sym_Fatal] = ACTIONS(100),
    [anon_sym_FATAL] = ACTIONS(98),
    [sym_year_month_day] = ACTIONS(100),
    [sym__time_with_offset] = ACTIONS(100),
    [sym__time_without_offset] = ACTIONS(100),
    [sym__raw_string_literal] = ACTIONS(100),
    [anon_sym_DQUOTE] = ACTIONS(98),
    [sym_number] = ACTIONS(100),
    [sym__left_parenthesis] = ACTIONS(98),
    [sym__right_parenthesis] = ACTIONS(98),
    [sym__left_bracket] = ACTIONS(98),
    [sym__right_bracket] = ACTIONS(98),
    [sym_word] = ACTIONS(100),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(102),
    [anon_sym_trace] = ACTIONS(104),
    [anon_sym_Trace] = ACTIONS(102),
    [anon_sym_TRACE] = ACTIONS(102),
    [anon_sym_verbose] = ACTIONS(104),
    [anon_sym_verb] = ACTIONS(104),
    [anon_sym_debug] = ACTIONS(104),
    [anon_sym_Debug] = ACTIONS(104),
    [anon_sym_DEBUG] = ACTIONS(104),
    [anon_sym_info] = ACTIONS(104),
    [anon_sym_Info] = ACTIONS(104),
    [anon_sym_INFO] = ACTIONS(104),
    [anon_sym_warn] = ACTIONS(104),
    [anon_sym_Warn] = ACTIONS(104),
    [anon_sym_WARN] = ACTIONS(104),
    [anon_sym_warning] = ACTIONS(104),
    [anon_sym_Warning] = ACTIONS(104),
    [anon_sym_WARNING] = ACTIONS(104),
    [anon_sym_error] = ACTIONS(104),
    [anon_sym_error_COLON] = ACTIONS(104),
    [anon_sym_Error] = ACTIONS(104),
    [anon_sym_ERROR] = ACTIONS(104),
    [anon_sym_ALERT] = ACTIONS(102),
    [anon_sym_CRITICAL] = ACTIONS(102),
    [anon_sym_EMERGENCY] = ACTIONS(104),
    [anon_sym_FAILURE] = ACTIONS(104),
    [anon_sym_FAIL] = ACTIONS(104),
    [anon_sym_fatal] = ACTIONS(104),
    [anon_sym_Fatal] = ACTIONS(104),
    [anon_sym_FATAL] = ACTIONS(102),
    [sym_year_month_day] = ACTIONS(104),
    [sym__time_with_offset] = ACTIONS(104),
    [sym__time_without_offset] = ACTIONS(104),
    [sym__raw_string_literal] = ACTIONS(104),
    [anon_sym_DQUOTE] = ACTIONS(102),
    [sym_number] = ACTIONS(104),
    [sym__left_parenthesis] = ACTIONS(102),
    [sym__right_parenthesis] = ACTIONS(102),
    [sym__left_bracket] = ACTIONS(102),
    [sym__right_bracket] = ACTIONS(102),
    [sym_word] = ACTIONS(104),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(106),
    [anon_sym_trace] = ACTIONS(108),
    [anon_sym_Trace] = ACTIONS(106),
    [anon_sym_TRACE] = ACTIONS(106),
    [anon_sym_verbose] = ACTIONS(108),
    [anon_sym_verb] = ACTIONS(108),
    [anon_sym_debug] = ACTIONS(108),
    [anon_sym_Debug] = ACTIONS(108),
    [anon_sym_DEBUG] = ACTIONS(108),
    [anon_sym_info] = ACTIONS(108),
    [anon_sym_Info] = ACTIONS(108),
    [anon_sym_INFO] = ACTIONS(108),
    [anon_sym_warn] = ACTIONS(108),
    [anon_sym_Warn] = ACTIONS(108),
    [anon_sym_WARN] = ACTIONS(108),
    [anon_sym_warning] = ACTIONS(108),
    [anon_sym_Warning] = ACTIONS(108),
    [anon_sym_WARNING] = ACTIONS(108),
    [anon_sym_error] = ACTIONS(108),
    [anon_sym_error_COLON] = ACTIONS(108),
    [anon_sym_Error] = ACTIONS(108),
    [anon_sym_ERROR] = ACTIONS(108),
    [anon_sym_ALERT] = ACTIONS(106),
    [anon_sym_CRITICAL] = ACTIONS(106),
    [anon_sym_EMERGENCY] = ACTIONS(108),
    [anon_sym_FAILURE] = ACTIONS(108),
    [anon_sym_FAIL] = ACTIONS(108),
    [anon_sym_fatal] = ACTIONS(108),
    [anon_sym_Fatal] = ACTIONS(108),
    [anon_sym_FATAL] = ACTIONS(106),
    [sym_year_month_day] = ACTIONS(108),
    [sym__time_with_offset] = ACTIONS(108),
    [sym__time_without_offset] = ACTIONS(108),
    [sym__raw_string_literal] = ACTIONS(108),
    [anon_sym_DQUOTE] = ACTIONS(106),
    [sym_number] = ACTIONS(108),
    [sym__left_parenthesis] = ACTIONS(106),
    [sym__right_parenthesis] = ACTIONS(106),
    [sym__left_bracket] = ACTIONS(106),
    [sym__right_bracket] = ACTIONS(106),
    [sym_word] = ACTIONS(108),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(110),
    [anon_sym_trace] = ACTIONS(112),
    [anon_sym_Trace] = ACTIONS(110),
    [anon_sym_TRACE] = ACTIONS(110),
    [anon_sym_verbose] = ACTIONS(112),
    [anon_sym_verb] = ACTIONS(112),
    [anon_sym_debug] = ACTIONS(112),
    [anon_sym_Debug] = ACTIONS(112),
    [anon_sym_DEBUG] = ACTIONS(112),
    [anon_sym_info] = ACTIONS(112),
    [anon_sym_Info] = ACTIONS(112),
    [anon_sym_INFO] = ACTIONS(112),
    [anon_sym_warn] = ACTIONS(112),
    [anon_sym_Warn] = ACTIONS(112),
    [anon_sym_WARN] = ACTIONS(112),
    [anon_sym_warning] = ACTIONS(112),
    [anon_sym_Warning] = ACTIONS(112),
    [anon_sym_WARNING] = ACTIONS(112),
    [anon_sym_error] = ACTIONS(112),
    [anon_sym_error_COLON] = ACTIONS(112),
    [anon_sym_Error] = ACTIONS(112),
    [anon_sym_ERROR] = ACTIONS(112),
    [anon_sym_ALERT] = ACTIONS(110),
    [anon_sym_CRITICAL] = ACTIONS(110),
    [anon_sym_EMERGENCY] = ACTIONS(112),
    [anon_sym_FAILURE] = ACTIONS(112),
    [anon_sym_FAIL] = ACTIONS(112),
    [anon_sym_fatal] = ACTIONS(112),
    [anon_sym_Fatal] = ACTIONS(112),
    [anon_sym_FATAL] = ACTIONS(110),
    [sym_year_month_day] = ACTIONS(112),
    [sym__time_with_offset] = ACTIONS(112),
    [sym__time_without_offset] = ACTIONS(112),
    [sym__raw_string_literal] = ACTIONS(112),
    [anon_sym_DQUOTE] = ACTIONS(110),
    [sym_number] = ACTIONS(112),
    [sym__left_parenthesis] = ACTIONS(110),
    [sym__right_parenthesis] = ACTIONS(110),
    [sym__left_bracket] = ACTIONS(110),
    [sym__right_bracket] = ACTIONS(110),
    [sym_word] = ACTIONS(112),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(114),
    [anon_sym_trace] = ACTIONS(116),
    [anon_sym_Trace] = ACTIONS(114),
    [anon_sym_TRACE] = ACTIONS(114),
    [anon_sym_verbose] = ACTIONS(116),
    [anon_sym_verb] = ACTIONS(116),
    [anon_sym_debug] = ACTIONS(116),
    [anon_sym_Debug] = ACTIONS(116),
    [anon_sym_DEBUG] = ACTIONS(116),
    [anon_sym_info] = ACTIONS(116),
    [anon_sym_Info] = ACTIONS(116),
    [anon_sym_INFO] = ACTIONS(116),
    [anon_sym_warn] = ACTIONS(116),
    [anon_sym_Warn] = ACTIONS(116),
    [anon_sym_WARN] = ACTIONS(116),
    [anon_sym_warning] = ACTIONS(116),
    [anon_sym_Warning] = ACTIONS(116),
    [anon_sym_WARNING] = ACTIONS(116),
    [anon_sym_error] = ACTIONS(116),
    [anon_sym_error_COLON] = ACTIONS(116),
    [anon_sym_Error] = ACTIONS(116),
    [anon_sym_ERROR] = ACTIONS(116),
    [anon_sym_ALERT] = ACTIONS(114),
    [anon_sym_CRITICAL] = ACTIONS(114),
    [anon_sym_EMERGENCY] = ACTIONS(116),
    [anon_sym_FAILURE] = ACTIONS(116),
    [anon_sym_FAIL] = ACTIONS(116),
    [anon_sym_fatal] = ACTIONS(116),
    [anon_sym_Fatal] = ACTIONS(116),
    [anon_sym_FATAL] = ACTIONS(114),
    [sym_year_month_day] = ACTIONS(116),
    [sym__time_with_offset] = ACTIONS(116),
    [sym__time_without_offset] = ACTIONS(116),
    [sym__raw_string_literal] = ACTIONS(116),
    [anon_sym_DQUOTE] = ACTIONS(114),
    [sym_number] = ACTIONS(116),
    [sym__left_parenthesis] = ACTIONS(114),
    [sym__right_parenthesis] = ACTIONS(114),
    [sym__left_bracket] = ACTIONS(114),
    [sym__right_bracket] = ACTIONS(114),
    [sym_word] = ACTIONS(116),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(118),
    [anon_sym_trace] = ACTIONS(120),
    [anon_sym_Trace] = ACTIONS(118),
    [anon_sym_TRACE] = ACTIONS(118),
    [anon_sym_verbose] = ACTIONS(120),
    [anon_sym_verb] = ACTIONS(120),
    [anon_sym_debug] = ACTIONS(120),
    [anon_sym_Debug] = ACTIONS(120),
    [anon_sym_DEBUG] = ACTIONS(120),
    [anon_sym_info] = ACTIONS(120),
    [anon_sym_Info] = ACTIONS(120),
    [anon_sym_INFO] = ACTIONS(120),
    [anon_sym_warn] = ACTIONS(120),
    [anon_sym_Warn] = ACTIONS(120),
    [anon_sym_WARN] = ACTIONS(120),
    [anon_sym_warning] = ACTIONS(120),
    [anon_sym_Warning] = ACTIONS(120),
    [anon_sym_WARNING] = ACTIONS(120),
    [anon_sym_error] = ACTIONS(120),
    [anon_sym_error_COLON] = ACTIONS(120),
    [anon_sym_Error] = ACTIONS(120),
    [anon_sym_ERROR] = ACTIONS(120),
    [anon_sym_ALERT] = ACTIONS(118),
    [anon_sym_CRITICAL] = ACTIONS(118),
    [anon_sym_EMERGENCY] = ACTIONS(120),
    [anon_sym_FAILURE] = ACTIONS(120),
    [anon_sym_FAIL] = ACTIONS(120),
    [anon_sym_fatal] = ACTIONS(120),
    [anon_sym_Fatal] = ACTIONS(120),
    [anon_sym_FATAL] = ACTIONS(118),
    [sym_year_month_day] = ACTIONS(120),
    [sym__time_with_offset] = ACTIONS(120),
    [sym__time_without_offset] = ACTIONS(120),
    [sym__raw_string_literal] = ACTIONS(120),
    [anon_sym_DQUOTE] = ACTIONS(118),
    [sym_number] = ACTIONS(120),
    [sym__left_parenthesis] = ACTIONS(118),
    [sym__right_parenthesis] = ACTIONS(118),
    [sym__left_bracket] = ACTIONS(118),
    [sym__right_bracket] = ACTIONS(118),
    [sym_word] = ACTIONS(120),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(122), 1,
      anon_sym_DQUOTE2,
    STATE(16), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(124), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [11] = 3,
    ACTIONS(126), 1,
      anon_sym_DQUOTE2,
    STATE(17), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(128), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [22] = 3,
    ACTIONS(130), 1,
      anon_sym_DQUOTE2,
    STATE(17), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(132), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [33] = 1,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 11,
  [SMALL_STATE(17)] = 22,
  [SMALL_STATE(18)] = 33,
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
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_file, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(4),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(4),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(5),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(6),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(7),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(8),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(8),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(9),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(10),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(11),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(15),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(3),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(3),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_trace, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_trace, 1),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_debug, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_debug, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_info, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_info, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_warn, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_warn, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_error, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_error, 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level, 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_level, 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(17),
  [135] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
