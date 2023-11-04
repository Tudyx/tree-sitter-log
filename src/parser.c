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
#define STATE_COUNT 16
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_trace = 1,
  sym_debug = 2,
  sym_info = 3,
  sym_warn = 4,
  sym_error = 5,
  sym_year_month_day = 6,
  sym__time_with_offset = 7,
  sym__time_without_offset = 8,
  anon_sym_true = 9,
  anon_sym_True = 10,
  anon_sym_false = 11,
  anon_sym_False = 12,
  sym__raw_string_literal = 13,
  anon_sym_DQUOTE = 14,
  anon_sym_DQUOTE2 = 15,
  sym__interpreted_string_literal_basic_content = 16,
  sym__escape_sequence = 17,
  aux_sym_number_token1 = 18,
  aux_sym_number_token2 = 19,
  aux_sym_number_token3 = 20,
  aux_sym_number_token4 = 21,
  aux_sym_number_token5 = 22,
  aux_sym_number_token6 = 23,
  aux_sym_number_token7 = 24,
  anon_sym_LPAREN = 25,
  anon_sym_RPAREN = 26,
  anon_sym_T = 27,
  anon_sym_LBRACK = 28,
  anon_sym_RBRACK = 29,
  anon_sym_LBRACE = 30,
  anon_sym_RBRACE = 31,
  anon_sym_EQ = 32,
  sym_word = 33,
  sym_log_file = 34,
  sym_log_level = 35,
  sym_date = 36,
  sym_time = 37,
  sym_constant = 38,
  sym_string_literal = 39,
  sym__interpreted_string_literal = 40,
  sym_number = 41,
  sym__word_separator = 42,
  aux_sym_log_file_repeat1 = 43,
  aux_sym__interpreted_string_literal_repeat1 = 44,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_trace] = "trace",
  [sym_debug] = "debug",
  [sym_info] = "info",
  [sym_warn] = "warn",
  [sym_error] = "error",
  [sym_year_month_day] = "year_month_day",
  [sym__time_with_offset] = "_time_with_offset",
  [sym__time_without_offset] = "_time_without_offset",
  [anon_sym_true] = "true",
  [anon_sym_True] = "True",
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
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_EQ] = "=",
  [sym_word] = "word",
  [sym_log_file] = "log_file",
  [sym_log_level] = "log_level",
  [sym_date] = "date",
  [sym_time] = "time",
  [sym_constant] = "constant",
  [sym_string_literal] = "string_literal",
  [sym__interpreted_string_literal] = "_interpreted_string_literal",
  [sym_number] = "number",
  [sym__word_separator] = "_word_separator",
  [aux_sym_log_file_repeat1] = "log_file_repeat1",
  [aux_sym__interpreted_string_literal_repeat1] = "_interpreted_string_literal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_trace] = sym_trace,
  [sym_debug] = sym_debug,
  [sym_info] = sym_info,
  [sym_warn] = sym_warn,
  [sym_error] = sym_error,
  [sym_year_month_day] = sym_year_month_day,
  [sym__time_with_offset] = sym__time_with_offset,
  [sym__time_without_offset] = sym__time_without_offset,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_True] = anon_sym_True,
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
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_word] = sym_word,
  [sym_log_file] = sym_log_file,
  [sym_log_level] = sym_log_level,
  [sym_date] = sym_date,
  [sym_time] = sym_time,
  [sym_constant] = sym_constant,
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
};

static inline bool sym__interpreted_string_literal_basic_content_character_set_1(int32_t c) {
  return (c < 'T'
    ? (c < '('
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= ')' || c == '='))
    : (c <= 'T' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym__interpreted_string_literal_basic_content_character_set_2(int32_t c) {
  return (c < 'T'
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= ' ' || (c < '='
        ? (c >= '(' && c <= ')')
        : c <= '=')))
    : (c <= 'T' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym__interpreted_string_literal_basic_content_character_set_3(int32_t c) {
  return (c < '='
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= ' ' || (c >= '(' && c <= ')')))
    : (c <= '=' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym__escape_sequence_character_set_1(int32_t c) {
  return (c < '='
    ? (c < ' '
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : c <= '\r')
      : (c <= ' ' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= '=' || (c < ']'
      ? (c < '['
        ? c == 'T'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_1(int32_t c) {
  return (c < '='
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= '=' || (c < ']'
      ? (c < '['
        ? c == 'T'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_2(int32_t c) {
  return (c < '='
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= '=' || (c < '{'
      ? (c < ']'
        ? c == '['
        : c <= ']')
      : (c <= '{' || c == '}'))));
}

static inline bool sym_word_character_set_3(int32_t c) {
  return (c < '='
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '('
        ? c == '"'
        : c <= ')')))
    : (c <= '=' || (c < ']'
      ? (c < '['
        ? c == 'T'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_4(int32_t c) {
  return (c < '('
    ? (c < '\r'
      ? (c < '\t'
        ? c == 0
        : c <= '\n')
      : (c <= '\r' || (c < '"'
        ? c == ' '
        : c <= '"')))
    : (c <= ')' || (c < ']'
      ? (c < '['
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(31);
      if (lookahead == '\n') SKIP(30)
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '(') ADVANCE(219);
      if (lookahead == ')') ADVANCE(219);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == '1') ADVANCE(81);
      if (lookahead == '2') ADVANCE(79);
      if (lookahead == '3') ADVANCE(78);
      if (lookahead == '=') ADVANCE(219);
      if (lookahead == 'A') ADVANCE(127);
      if (lookahead == 'C') ADVANCE(137);
      if (lookahead == 'D') ADVANCE(115);
      if (lookahead == 'E') ADVANCE(130);
      if (lookahead == 'F') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(131);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'W') ADVANCE(110);
      if (lookahead == '[') ADVANCE(219);
      if (lookahead == '\\') ADVANCE(348);
      if (lookahead == ']') ADVANCE(219);
      if (lookahead == '`') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == 'v') ADVANCE(186);
      if (lookahead == 'w') ADVANCE(178);
      if (lookahead == '{') ADVANCE(219);
      if (lookahead == '}') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(172);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead != 0) ADVANCE(218);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(70);
      if (lookahead == '\\') ADVANCE(11);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(219);
      END_STATE();
    case 2:
      if (lookahead == '2') ADVANCE(18);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(21);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(35);
      END_STATE();
    case 9:
      if (lookahead == 'I') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'L') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'U') ADVANCE(29);
      if (lookahead == 'u') ADVANCE(25);
      if (lookahead == 'x') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (lookahead != 0) ADVANCE(220);
      END_STATE();
    case 12:
      if (lookahead == '`') ADVANCE(67);
      if (lookahead != 0) ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(2);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(56);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(3);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(20);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
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
      if (eof) ADVANCE(31);
      if (lookahead == '"') ADVANCE(69);
      if (lookahead == '(') ADVANCE(298);
      if (lookahead == ')') ADVANCE(299);
      if (lookahead == '0') ADVANCE(246);
      if (lookahead == '1') ADVANCE(250);
      if (lookahead == '2') ADVANCE(249);
      if (lookahead == '3') ADVANCE(248);
      if (lookahead == '=') ADVANCE(305);
      if (lookahead == 'A') ADVANCE(330);
      if (lookahead == 'C') ADVANCE(339);
      if (lookahead == 'D') ADVANCE(319);
      if (lookahead == 'E') ADVANCE(332);
      if (lookahead == 'F') ADVANCE(315);
      if (lookahead == 'I') ADVANCE(333);
      if (lookahead == 'T') ADVANCE(300);
      if (lookahead == 'W') ADVANCE(316);
      if (lookahead == '[') ADVANCE(301);
      if (lookahead == ']') ADVANCE(302);
      if (lookahead == '`') ADVANCE(395);
      if (lookahead == 'd') ADVANCE(353);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead == 'f') ADVANCE(351);
      if (lookahead == 'i') ADVANCE(410);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead == 'v') ADVANCE(405);
      if (lookahead == 'w') ADVANCE(398);
      if (lookahead == '{') ADVANCE(303);
      if (lookahead == '}') ADVANCE(304);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(375);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(30)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(266);
      if (lookahead != 0) ADVANCE(443);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_trace);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_trace);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(422);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_trace);
      if (lookahead == ':') ADVANCE(36);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_trace);
      if (lookahead == ':') ADVANCE(32);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_trace);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_debug);
      if (lookahead == ':') ADVANCE(38);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_debug);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_info);
      if (lookahead == ':') ADVANCE(40);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_info);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_warn);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'I') ADVANCE(336);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_warn);
      if (lookahead == ':') ADVANCE(44);
      if (lookahead == 'i') ADVANCE(412);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_warn);
      if (lookahead == ':') ADVANCE(44);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_warn);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_error);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == ':') ADVANCE(49);
      if (lookahead == 'U') ADVANCE(345);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == ':') ADVANCE(49);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == ':') ADVANCE(45);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_error);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_year_month_day);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '0') ADVANCE(53);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == ' ' ||
          lookahead == 'T') ADVANCE(50);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(443);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == ' ' ||
          lookahead == 'T') ADVANCE(50);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(53);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(443);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == ' ' ||
          lookahead == 'T') ADVANCE(50);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(443);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == ' ' ||
          lookahead == 'T') ADVANCE(50);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(443);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_year_month_day);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__time_with_offset);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__time_with_offset);
      if (lookahead == '_') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__time_with_offset);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '+') ADVANCE(311);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead == '.') ADVANCE(429);
      if (lookahead == '/') ADVANCE(433);
      if (lookahead == ':') ADVANCE(313);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(443);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '+') ADVANCE(311);
      if (lookahead == ',') ADVANCE(428);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead == '.') ADVANCE(429);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(443);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '+') ADVANCE(311);
      if (lookahead == '-') ADVANCE(312);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(58);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(443);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(17);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(311);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(443);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_true);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_false);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_False);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__raw_string_literal);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == ' ') ADVANCE(202);
      if (lookahead == '+') ADVANCE(93);
      if (lookahead == ',') ADVANCE(211);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == '/') ADVANCE(216);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(218);
      if (sym__interpreted_string_literal_basic_content_character_set_1(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == ' ') ADVANCE(202);
      if (lookahead == '+') ADVANCE(93);
      if (lookahead == ',') ADVANCE(211);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '.') ADVANCE(212);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(216);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(218);
      if (sym__interpreted_string_literal_basic_content_character_set_1(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == ' ') ADVANCE(202);
      if (lookahead == '+') ADVANCE(93);
      if (lookahead == '-') ADVANCE(94);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(218);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_1(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == ' ') ADVANCE(202);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(93);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(218);
      if (sym__interpreted_string_literal_basic_content_character_set_1(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '(') ADVANCE(219);
      if (lookahead == ')') ADVANCE(219);
      if (lookahead == '0') ADVANCE(76);
      if (lookahead == '1') ADVANCE(81);
      if (lookahead == '2') ADVANCE(79);
      if (lookahead == '3') ADVANCE(78);
      if (lookahead == '=') ADVANCE(219);
      if (lookahead == 'A') ADVANCE(127);
      if (lookahead == 'C') ADVANCE(137);
      if (lookahead == 'D') ADVANCE(115);
      if (lookahead == 'E') ADVANCE(130);
      if (lookahead == 'F') ADVANCE(107);
      if (lookahead == 'I') ADVANCE(131);
      if (lookahead == 'T') ADVANCE(138);
      if (lookahead == 'W') ADVANCE(110);
      if (lookahead == '[') ADVANCE(219);
      if (lookahead == ']') ADVANCE(219);
      if (lookahead == '`') ADVANCE(174);
      if (lookahead == 'd') ADVANCE(151);
      if (lookahead == 'e') ADVANCE(153);
      if (lookahead == 'f') ADVANCE(149);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 't') ADVANCE(195);
      if (lookahead == 'v') ADVANCE(186);
      if (lookahead == 'w') ADVANCE(178);
      if (lookahead == '{') ADVANCE(219);
      if (lookahead == '}') ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(75);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(172);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '0') ADVANCE(77);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == 'x') ADVANCE(217);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(216);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(84);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(216);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(85);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '-') ADVANCE(86);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(213);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '-') ADVANCE(90);
      if (lookahead == ':') ADVANCE(205);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '0') ADVANCE(163);
      if (lookahead == '1') ADVANCE(159);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '0') ADVANCE(88);
      if (lookahead == '3') ADVANCE(154);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(155);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '0') ADVANCE(155);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == ' ' ||
          lookahead == 'T') ADVANCE(219);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(219);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '0') ADVANCE(72);
      if (lookahead == '_') ADVANCE(216);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '0') ADVANCE(164);
      if (lookahead == '1') ADVANCE(160);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '0') ADVANCE(165);
      if (lookahead == '1') ADVANCE(161);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '0') ADVANCE(166);
      if (lookahead == '3') ADVANCE(158);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(169);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '2') ADVANCE(203);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(214);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '2') ADVANCE(162);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(171);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '2') ADVANCE(204);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(215);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '6') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(170);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == ':') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == ':') ADVANCE(218);
      if (lookahead == 'I') ADVANCE(132);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == ':') ADVANCE(218);
      if (lookahead == 'U') ADVANCE(144);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == ':') ADVANCE(218);
      if (lookahead == 'i') ADVANCE(191);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == ':') ADVANCE(218);
      if (lookahead == 'o') ADVANCE(201);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == ':') ADVANCE(218);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == ':') ADVANCE(216);
      if (lookahead == '_') ADVANCE(216);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(213);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == ':') ADVANCE(207);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == ':') ADVANCE(206);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == ':') ADVANCE(208);
      if (lookahead == '_') ADVANCE(216);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'A') ADVANCE(125);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == 'a') ADVANCE(152);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'A') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'A') ADVANCE(129);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'A') ADVANCE(140);
      if (lookahead == 'a') ADVANCE(199);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'B') ADVANCE(147);
      if (lookahead == '_') ADVANCE(216);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'C') ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'C') ADVANCE(148);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'C') ADVANCE(109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'E') ADVANCE(111);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(150);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'E') ADVANCE(102);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'E') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'E') ADVANCE(142);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'E') ADVANCE(134);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'E') ADVANCE(143);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'F') ADVANCE(135);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'G') ADVANCE(102);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'G') ADVANCE(119);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'I') ADVANCE(145);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'I') ADVANCE(128);
      if (lookahead == 'T') ADVANCE(109);
      if (lookahead == '_') ADVANCE(216);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_3(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'I') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'L') ADVANCE(118);
      if (lookahead == '_') ADVANCE(216);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'L') ADVANCE(99);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'L') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'M') ADVANCE(120);
      if (lookahead == 'R') ADVANCE(139);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(196);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'N') ADVANCE(121);
      if (lookahead == 'n') ADVANCE(187);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'N') ADVANCE(122);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'N') ADVANCE(98);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'N') ADVANCE(113);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'O') ADVANCE(102);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'O') ADVANCE(141);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'R') ADVANCE(124);
      if (lookahead == '_') ADVANCE(216);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'R') ADVANCE(108);
      if (lookahead == 'r') ADVANCE(175);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'R') ADVANCE(136);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'R') ADVANCE(133);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'R') ADVANCE(102);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'R') ADVANCE(146);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'R') ADVANCE(123);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'R') ADVANCE(116);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'T') ADVANCE(126);
      if (sym__interpreted_string_literal_basic_content_character_set_3(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'T') ADVANCE(97);
      if (sym__interpreted_string_literal_basic_content_character_set_3(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'U') ADVANCE(122);
      if (lookahead == '_') ADVANCE(216);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'Y') ADVANCE(102);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == 'a') ADVANCE(152);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == 'b') ADVANCE(157);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == 'e') ADVANCE(150);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == 'l') ADVANCE(200);
      if (lookahead == 't') ADVANCE(177);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == 'r') ADVANCE(196);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == ' ' ||
          lookahead == 'T') ADVANCE(219);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(155);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == ' ' ||
          lookahead == 'T') ADVANCE(219);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == 't') ADVANCE(218);
      if (lookahead == ' ' ||
          lookahead == 'T') ADVANCE(219);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == '=' ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == 'u') ADVANCE(188);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(156);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(82);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(83);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(103);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(106);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(83);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(103);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(172);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(71);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(72);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '_') ADVANCE(216);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(216);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '`') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '`') ADVANCE(218);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'a') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(182);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'a') ADVANCE(181);
      if (lookahead == 'u') ADVANCE(183);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'a') ADVANCE(189);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'a') ADVANCE(199);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'b') ADVANCE(101);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'c') ADVANCE(185);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'c') ADVANCE(184);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'e') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'e') ADVANCE(218);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'e') ADVANCE(102);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'e') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'e') ADVANCE(197);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'f') ADVANCE(193);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'g') ADVANCE(102);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'l') ADVANCE(102);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'n') ADVANCE(187);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'n') ADVANCE(188);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'n') ADVANCE(100);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'o') ADVANCE(102);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'o') ADVANCE(198);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'r') ADVANCE(176);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'r') ADVANCE(194);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'r') ADVANCE(179);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'r') ADVANCE(102);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 'r') ADVANCE(192);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 's') ADVANCE(183);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == 's') ADVANCE(184);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(95);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(104);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(168);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(209);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(210);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(167);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(74);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(73);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (sym__interpreted_string_literal_basic_content_character_set_2(lookahead)) ADVANCE(219);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(218);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__interpreted_string_literal_basic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(219);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '-') ADVANCE(310);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '-') ADVANCE(307);
      if (lookahead == ':') ADVANCE(433);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0') ADVANCE(60);
      if (lookahead == '_') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ':') ADVANCE(433);
      if (lookahead == '_') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(430);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ':') ADVANCE(426);
      if (lookahead == '_') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(433);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(54);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(226);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(227);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(229);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(230);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(226);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(229);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(433);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '0') ADVANCE(247);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'x') ADVANCE(434);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == ':') ADVANCE(424);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(292);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(291);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(292);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(363);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(365);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(367);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(370);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(371);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(373);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(374);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(377);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(388);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(389);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(390);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(392);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(394);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(306);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == ':') ADVANCE(424);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(308);
      if (lookahead == ':') ADVANCE(433);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(380);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(394);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(363);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(297);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'R') ADVANCE(4);
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(236);
      if (lookahead == '1') ADVANCE(232);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(51);
      if (lookahead == '3') ADVANCE(52);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(53);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(237);
      if (lookahead == '1') ADVANCE(233);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(238);
      if (lookahead == '1') ADVANCE(234);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(239);
      if (lookahead == '3') ADVANCE(231);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(241);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '2') ADVANCE(423);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(431);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '2') ADVANCE(235);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(244);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '6') ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(242);
      if (('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(425);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(329);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'a') ADVANCE(354);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(341);
      if (lookahead == 'a') ADVANCE(419);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'B') ADVANCE(349);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(350);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(317);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'e') ADVANCE(352);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(47);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(343);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(335);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(344);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(337);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(37);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(43);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(322);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(346);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(331);
      if (lookahead == 'T') ADVANCE(5);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(443);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(321);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(46);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(323);
      if (lookahead == 'R') ADVANCE(340);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'r') ADVANCE(416);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(324);
      if (lookahead == 'n') ADVANCE(406);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(41);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(318);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(326);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(39);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(342);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(328);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(338);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(334);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(47);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(347);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(327);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(320);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(9);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(443);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(48);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(443);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(442);
      if (lookahead == 'u') ADVANCE(437);
      if (lookahead == 'x') ADVANCE(435);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (sym__escape_sequence_character_set_1(lookahead)) ADVANCE(220);
      if (lookahead != 0) ADVANCE(225);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(325);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'Y') ADVANCE(47);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'a') ADVANCE(355);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'b') ADVANCE(357);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'e') ADVANCE(352);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'l') ADVANCE(420);
      if (lookahead == 't') ADVANCE(397);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'l') ADVANCE(421);
      if (lookahead == 't') ADVANCE(397);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'r') ADVANCE(416);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (lookahead == 'u') ADVANCE(407);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(296);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(295);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(294);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(293);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(358);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(359);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(360);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(361);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(362);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(364);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(365);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(367);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(368);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(369);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(370);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(371);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(372);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(373);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(374);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(376);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(377);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(379);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(381);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(382);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(383);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(384);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(385);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(386);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(387);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(388);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(389);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(390);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(391);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(392);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '_') ADVANCE(440);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(433);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(393);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '`') ADVANCE(68);
      if (sym__escape_sequence_character_set_1(lookahead)) ADVANCE(12);
      if (lookahead != 0) ADVANCE(395);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(400);
      if (lookahead == 'u') ADVANCE(401);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(409);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(419);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(33);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(404);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(63);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(66);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(65);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(34);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(417);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(413);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(37);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(43);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(47);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(406);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(42);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(408);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(39);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(418);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(396);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(414);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(399);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(47);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(411);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(402);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(403);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(404);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(314);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(240);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(427);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(243);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(314);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(245);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(297);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(432);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(435);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(436);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(437);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(438);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(378);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(439);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(441);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_word);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(443);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 30},
  [2] = {.lex_state = 30},
  [3] = {.lex_state = 30},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 30},
  [6] = {.lex_state = 30},
  [7] = {.lex_state = 30},
  [8] = {.lex_state = 30},
  [9] = {.lex_state = 30},
  [10] = {.lex_state = 30},
  [11] = {.lex_state = 30},
  [12] = {.lex_state = 30},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_trace] = ACTIONS(1),
    [sym_debug] = ACTIONS(1),
    [sym_info] = ACTIONS(1),
    [sym_warn] = ACTIONS(1),
    [sym_error] = ACTIONS(1),
    [sym_year_month_day] = ACTIONS(1),
    [sym__time_with_offset] = ACTIONS(1),
    [sym__time_without_offset] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [sym__raw_string_literal] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym__interpreted_string_literal_basic_content] = ACTIONS(1),
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
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
  },
  [1] = {
    [sym_log_file] = STATE(15),
    [sym_log_level] = STATE(2),
    [sym_date] = STATE(2),
    [sym_time] = STATE(6),
    [sym_constant] = STATE(2),
    [sym_string_literal] = STATE(2),
    [sym__interpreted_string_literal] = STATE(9),
    [sym_number] = STATE(2),
    [sym__word_separator] = STATE(2),
    [aux_sym_log_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_trace] = ACTIONS(5),
    [sym_debug] = ACTIONS(5),
    [sym_info] = ACTIONS(5),
    [sym_warn] = ACTIONS(5),
    [sym_error] = ACTIONS(5),
    [sym_year_month_day] = ACTIONS(7),
    [sym__time_with_offset] = ACTIONS(9),
    [sym__time_without_offset] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_True] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_False] = ACTIONS(11),
    [sym__raw_string_literal] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_number_token1] = ACTIONS(19),
    [aux_sym_number_token2] = ACTIONS(19),
    [aux_sym_number_token3] = ACTIONS(19),
    [aux_sym_number_token4] = ACTIONS(19),
    [aux_sym_number_token5] = ACTIONS(19),
    [aux_sym_number_token6] = ACTIONS(19),
    [aux_sym_number_token7] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_T] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_EQ] = ACTIONS(21),
    [sym_word] = ACTIONS(23),
  },
  [2] = {
    [sym_log_level] = STATE(3),
    [sym_date] = STATE(3),
    [sym_time] = STATE(6),
    [sym_constant] = STATE(3),
    [sym_string_literal] = STATE(3),
    [sym__interpreted_string_literal] = STATE(9),
    [sym_number] = STATE(3),
    [sym__word_separator] = STATE(3),
    [aux_sym_log_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(25),
    [sym_trace] = ACTIONS(5),
    [sym_debug] = ACTIONS(5),
    [sym_info] = ACTIONS(5),
    [sym_warn] = ACTIONS(5),
    [sym_error] = ACTIONS(5),
    [sym_year_month_day] = ACTIONS(7),
    [sym__time_with_offset] = ACTIONS(9),
    [sym__time_without_offset] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(11),
    [anon_sym_True] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_False] = ACTIONS(11),
    [sym__raw_string_literal] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [aux_sym_number_token1] = ACTIONS(19),
    [aux_sym_number_token2] = ACTIONS(19),
    [aux_sym_number_token3] = ACTIONS(19),
    [aux_sym_number_token4] = ACTIONS(19),
    [aux_sym_number_token5] = ACTIONS(19),
    [aux_sym_number_token6] = ACTIONS(19),
    [aux_sym_number_token7] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_T] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(27),
    [sym_word] = ACTIONS(29),
  },
  [3] = {
    [sym_log_level] = STATE(3),
    [sym_date] = STATE(3),
    [sym_time] = STATE(6),
    [sym_constant] = STATE(3),
    [sym_string_literal] = STATE(3),
    [sym__interpreted_string_literal] = STATE(9),
    [sym_number] = STATE(3),
    [sym__word_separator] = STATE(3),
    [aux_sym_log_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(31),
    [sym_trace] = ACTIONS(33),
    [sym_debug] = ACTIONS(33),
    [sym_info] = ACTIONS(33),
    [sym_warn] = ACTIONS(33),
    [sym_error] = ACTIONS(33),
    [sym_year_month_day] = ACTIONS(36),
    [sym__time_with_offset] = ACTIONS(39),
    [sym__time_without_offset] = ACTIONS(39),
    [anon_sym_true] = ACTIONS(42),
    [anon_sym_True] = ACTIONS(45),
    [anon_sym_false] = ACTIONS(42),
    [anon_sym_False] = ACTIONS(42),
    [sym__raw_string_literal] = ACTIONS(48),
    [anon_sym_DQUOTE] = ACTIONS(51),
    [aux_sym_number_token1] = ACTIONS(54),
    [aux_sym_number_token2] = ACTIONS(54),
    [aux_sym_number_token3] = ACTIONS(54),
    [aux_sym_number_token4] = ACTIONS(54),
    [aux_sym_number_token5] = ACTIONS(54),
    [aux_sym_number_token6] = ACTIONS(54),
    [aux_sym_number_token7] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_T] = ACTIONS(60),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(57),
    [sym_word] = ACTIONS(60),
  },
  [4] = {
    [aux_sym__interpreted_string_literal_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(63),
    [sym_trace] = ACTIONS(65),
    [sym_debug] = ACTIONS(65),
    [sym_info] = ACTIONS(65),
    [sym_warn] = ACTIONS(65),
    [sym_error] = ACTIONS(65),
    [sym_year_month_day] = ACTIONS(65),
    [sym__time_with_offset] = ACTIONS(65),
    [sym__time_without_offset] = ACTIONS(65),
    [anon_sym_true] = ACTIONS(65),
    [anon_sym_True] = ACTIONS(65),
    [anon_sym_false] = ACTIONS(65),
    [anon_sym_False] = ACTIONS(65),
    [sym__raw_string_literal] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_DQUOTE2] = ACTIONS(67),
    [sym__interpreted_string_literal_basic_content] = ACTIONS(69),
    [sym__escape_sequence] = ACTIONS(71),
    [aux_sym_number_token1] = ACTIONS(65),
    [aux_sym_number_token2] = ACTIONS(65),
    [aux_sym_number_token3] = ACTIONS(65),
    [aux_sym_number_token4] = ACTIONS(65),
    [aux_sym_number_token5] = ACTIONS(65),
    [aux_sym_number_token6] = ACTIONS(65),
    [aux_sym_number_token7] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_T] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [sym_word] = ACTIONS(65),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_trace] = ACTIONS(75),
    [sym_debug] = ACTIONS(75),
    [sym_info] = ACTIONS(75),
    [sym_warn] = ACTIONS(75),
    [sym_error] = ACTIONS(75),
    [sym_year_month_day] = ACTIONS(75),
    [sym__time_with_offset] = ACTIONS(75),
    [sym__time_without_offset] = ACTIONS(75),
    [anon_sym_true] = ACTIONS(75),
    [anon_sym_True] = ACTIONS(73),
    [anon_sym_false] = ACTIONS(75),
    [anon_sym_False] = ACTIONS(75),
    [sym__raw_string_literal] = ACTIONS(75),
    [anon_sym_DQUOTE] = ACTIONS(73),
    [aux_sym_number_token1] = ACTIONS(75),
    [aux_sym_number_token2] = ACTIONS(75),
    [aux_sym_number_token3] = ACTIONS(75),
    [aux_sym_number_token4] = ACTIONS(75),
    [aux_sym_number_token5] = ACTIONS(75),
    [aux_sym_number_token6] = ACTIONS(75),
    [aux_sym_number_token7] = ACTIONS(75),
    [anon_sym_LPAREN] = ACTIONS(73),
    [anon_sym_RPAREN] = ACTIONS(73),
    [anon_sym_T] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_LBRACE] = ACTIONS(73),
    [anon_sym_RBRACE] = ACTIONS(73),
    [anon_sym_EQ] = ACTIONS(73),
    [sym_word] = ACTIONS(75),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [sym_trace] = ACTIONS(79),
    [sym_debug] = ACTIONS(79),
    [sym_info] = ACTIONS(79),
    [sym_warn] = ACTIONS(79),
    [sym_error] = ACTIONS(79),
    [sym_year_month_day] = ACTIONS(79),
    [sym__time_with_offset] = ACTIONS(79),
    [sym__time_without_offset] = ACTIONS(79),
    [anon_sym_true] = ACTIONS(79),
    [anon_sym_True] = ACTIONS(77),
    [anon_sym_false] = ACTIONS(79),
    [anon_sym_False] = ACTIONS(79),
    [sym__raw_string_literal] = ACTIONS(79),
    [anon_sym_DQUOTE] = ACTIONS(77),
    [aux_sym_number_token1] = ACTIONS(79),
    [aux_sym_number_token2] = ACTIONS(79),
    [aux_sym_number_token3] = ACTIONS(79),
    [aux_sym_number_token4] = ACTIONS(79),
    [aux_sym_number_token5] = ACTIONS(79),
    [aux_sym_number_token6] = ACTIONS(79),
    [aux_sym_number_token7] = ACTIONS(79),
    [anon_sym_LPAREN] = ACTIONS(77),
    [anon_sym_RPAREN] = ACTIONS(77),
    [anon_sym_T] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_RBRACK] = ACTIONS(77),
    [anon_sym_LBRACE] = ACTIONS(77),
    [anon_sym_RBRACE] = ACTIONS(77),
    [anon_sym_EQ] = ACTIONS(77),
    [sym_word] = ACTIONS(79),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [sym_trace] = ACTIONS(83),
    [sym_debug] = ACTIONS(83),
    [sym_info] = ACTIONS(83),
    [sym_warn] = ACTIONS(83),
    [sym_error] = ACTIONS(83),
    [sym_year_month_day] = ACTIONS(83),
    [sym__time_with_offset] = ACTIONS(83),
    [sym__time_without_offset] = ACTIONS(83),
    [anon_sym_true] = ACTIONS(83),
    [anon_sym_True] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(83),
    [anon_sym_False] = ACTIONS(83),
    [sym__raw_string_literal] = ACTIONS(83),
    [anon_sym_DQUOTE] = ACTIONS(81),
    [aux_sym_number_token1] = ACTIONS(83),
    [aux_sym_number_token2] = ACTIONS(83),
    [aux_sym_number_token3] = ACTIONS(83),
    [aux_sym_number_token4] = ACTIONS(83),
    [aux_sym_number_token5] = ACTIONS(83),
    [aux_sym_number_token6] = ACTIONS(83),
    [aux_sym_number_token7] = ACTIONS(83),
    [anon_sym_LPAREN] = ACTIONS(81),
    [anon_sym_RPAREN] = ACTIONS(81),
    [anon_sym_T] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_RBRACK] = ACTIONS(81),
    [anon_sym_LBRACE] = ACTIONS(81),
    [anon_sym_RBRACE] = ACTIONS(81),
    [anon_sym_EQ] = ACTIONS(81),
    [sym_word] = ACTIONS(83),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(85),
    [sym_trace] = ACTIONS(87),
    [sym_debug] = ACTIONS(87),
    [sym_info] = ACTIONS(87),
    [sym_warn] = ACTIONS(87),
    [sym_error] = ACTIONS(87),
    [sym_year_month_day] = ACTIONS(87),
    [sym__time_with_offset] = ACTIONS(87),
    [sym__time_without_offset] = ACTIONS(87),
    [anon_sym_true] = ACTIONS(87),
    [anon_sym_True] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(87),
    [anon_sym_False] = ACTIONS(87),
    [sym__raw_string_literal] = ACTIONS(87),
    [anon_sym_DQUOTE] = ACTIONS(85),
    [aux_sym_number_token1] = ACTIONS(87),
    [aux_sym_number_token2] = ACTIONS(87),
    [aux_sym_number_token3] = ACTIONS(87),
    [aux_sym_number_token4] = ACTIONS(87),
    [aux_sym_number_token5] = ACTIONS(87),
    [aux_sym_number_token6] = ACTIONS(87),
    [aux_sym_number_token7] = ACTIONS(87),
    [anon_sym_LPAREN] = ACTIONS(85),
    [anon_sym_RPAREN] = ACTIONS(85),
    [anon_sym_T] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(85),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_LBRACE] = ACTIONS(85),
    [anon_sym_RBRACE] = ACTIONS(85),
    [anon_sym_EQ] = ACTIONS(85),
    [sym_word] = ACTIONS(87),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [sym_trace] = ACTIONS(91),
    [sym_debug] = ACTIONS(91),
    [sym_info] = ACTIONS(91),
    [sym_warn] = ACTIONS(91),
    [sym_error] = ACTIONS(91),
    [sym_year_month_day] = ACTIONS(91),
    [sym__time_with_offset] = ACTIONS(91),
    [sym__time_without_offset] = ACTIONS(91),
    [anon_sym_true] = ACTIONS(91),
    [anon_sym_True] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(91),
    [anon_sym_False] = ACTIONS(91),
    [sym__raw_string_literal] = ACTIONS(91),
    [anon_sym_DQUOTE] = ACTIONS(89),
    [aux_sym_number_token1] = ACTIONS(91),
    [aux_sym_number_token2] = ACTIONS(91),
    [aux_sym_number_token3] = ACTIONS(91),
    [aux_sym_number_token4] = ACTIONS(91),
    [aux_sym_number_token5] = ACTIONS(91),
    [aux_sym_number_token6] = ACTIONS(91),
    [aux_sym_number_token7] = ACTIONS(91),
    [anon_sym_LPAREN] = ACTIONS(89),
    [anon_sym_RPAREN] = ACTIONS(89),
    [anon_sym_T] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(89),
    [anon_sym_LBRACE] = ACTIONS(89),
    [anon_sym_RBRACE] = ACTIONS(89),
    [anon_sym_EQ] = ACTIONS(89),
    [sym_word] = ACTIONS(91),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [sym_trace] = ACTIONS(95),
    [sym_debug] = ACTIONS(95),
    [sym_info] = ACTIONS(95),
    [sym_warn] = ACTIONS(95),
    [sym_error] = ACTIONS(95),
    [sym_year_month_day] = ACTIONS(95),
    [sym__time_with_offset] = ACTIONS(95),
    [sym__time_without_offset] = ACTIONS(95),
    [anon_sym_true] = ACTIONS(95),
    [anon_sym_True] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(95),
    [anon_sym_False] = ACTIONS(95),
    [sym__raw_string_literal] = ACTIONS(95),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [aux_sym_number_token1] = ACTIONS(95),
    [aux_sym_number_token2] = ACTIONS(95),
    [aux_sym_number_token3] = ACTIONS(95),
    [aux_sym_number_token4] = ACTIONS(95),
    [aux_sym_number_token5] = ACTIONS(95),
    [aux_sym_number_token6] = ACTIONS(95),
    [aux_sym_number_token7] = ACTIONS(95),
    [anon_sym_LPAREN] = ACTIONS(93),
    [anon_sym_RPAREN] = ACTIONS(93),
    [anon_sym_T] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_LBRACE] = ACTIONS(93),
    [anon_sym_RBRACE] = ACTIONS(93),
    [anon_sym_EQ] = ACTIONS(93),
    [sym_word] = ACTIONS(95),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(97),
    [sym_trace] = ACTIONS(99),
    [sym_debug] = ACTIONS(99),
    [sym_info] = ACTIONS(99),
    [sym_warn] = ACTIONS(99),
    [sym_error] = ACTIONS(99),
    [sym_year_month_day] = ACTIONS(99),
    [sym__time_with_offset] = ACTIONS(99),
    [sym__time_without_offset] = ACTIONS(99),
    [anon_sym_true] = ACTIONS(99),
    [anon_sym_True] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(99),
    [anon_sym_False] = ACTIONS(99),
    [sym__raw_string_literal] = ACTIONS(99),
    [anon_sym_DQUOTE] = ACTIONS(97),
    [aux_sym_number_token1] = ACTIONS(99),
    [aux_sym_number_token2] = ACTIONS(99),
    [aux_sym_number_token3] = ACTIONS(99),
    [aux_sym_number_token4] = ACTIONS(99),
    [aux_sym_number_token5] = ACTIONS(99),
    [aux_sym_number_token6] = ACTIONS(99),
    [aux_sym_number_token7] = ACTIONS(99),
    [anon_sym_LPAREN] = ACTIONS(97),
    [anon_sym_RPAREN] = ACTIONS(97),
    [anon_sym_T] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(97),
    [anon_sym_RBRACK] = ACTIONS(97),
    [anon_sym_LBRACE] = ACTIONS(97),
    [anon_sym_RBRACE] = ACTIONS(97),
    [anon_sym_EQ] = ACTIONS(97),
    [sym_word] = ACTIONS(99),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_trace] = ACTIONS(103),
    [sym_debug] = ACTIONS(103),
    [sym_info] = ACTIONS(103),
    [sym_warn] = ACTIONS(103),
    [sym_error] = ACTIONS(103),
    [sym_year_month_day] = ACTIONS(103),
    [sym__time_with_offset] = ACTIONS(103),
    [sym__time_without_offset] = ACTIONS(103),
    [anon_sym_true] = ACTIONS(103),
    [anon_sym_True] = ACTIONS(101),
    [anon_sym_false] = ACTIONS(103),
    [anon_sym_False] = ACTIONS(103),
    [sym__raw_string_literal] = ACTIONS(103),
    [anon_sym_DQUOTE] = ACTIONS(101),
    [aux_sym_number_token1] = ACTIONS(103),
    [aux_sym_number_token2] = ACTIONS(103),
    [aux_sym_number_token3] = ACTIONS(103),
    [aux_sym_number_token4] = ACTIONS(103),
    [aux_sym_number_token5] = ACTIONS(103),
    [aux_sym_number_token6] = ACTIONS(103),
    [aux_sym_number_token7] = ACTIONS(103),
    [anon_sym_LPAREN] = ACTIONS(101),
    [anon_sym_RPAREN] = ACTIONS(101),
    [anon_sym_T] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(101),
    [anon_sym_LBRACE] = ACTIONS(101),
    [anon_sym_RBRACE] = ACTIONS(101),
    [anon_sym_EQ] = ACTIONS(101),
    [sym_word] = ACTIONS(103),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(105), 1,
      anon_sym_DQUOTE2,
    STATE(14), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(107), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [11] = 3,
    ACTIONS(109), 1,
      anon_sym_DQUOTE2,
    STATE(14), 1,
      aux_sym__interpreted_string_literal_repeat1,
    ACTIONS(111), 2,
      sym__interpreted_string_literal_basic_content,
      sym__escape_sequence,
  [22] = 1,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 11,
  [SMALL_STATE(15)] = 22,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_file, 1),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(5),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(6),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(7),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(8),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(8),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(9),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(4),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(10),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(3),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_separator, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_separator, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_level, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_string_literal, 3),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_string_literal, 3),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_string_literal_repeat1, 2), SHIFT_REPEAT(14),
  [114] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
