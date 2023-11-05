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
#define STATE_COUNT 21
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
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
  anon_sym_null = 13,
  sym__raw_string_literal = 14,
  anon_sym_DQUOTE = 15,
  anon_sym_DQUOTE2 = 16,
  sym__interpreted_double_string_basic_content = 17,
  sym__escape_sequence = 18,
  anon_sym_SQUOTE = 19,
  anon_sym_SQUOTE2 = 20,
  sym__interpreted_single_string_basic_content = 21,
  aux_sym_number_token1 = 22,
  aux_sym_number_token2 = 23,
  aux_sym_number_token3 = 24,
  aux_sym_number_token4 = 25,
  aux_sym_number_token5 = 26,
  aux_sym_number_token6 = 27,
  aux_sym_number_token7 = 28,
  anon_sym_LPAREN = 29,
  anon_sym_RPAREN = 30,
  anon_sym_LBRACK = 31,
  anon_sym_RBRACK = 32,
  anon_sym_LBRACE = 33,
  anon_sym_RBRACE = 34,
  anon_sym_EQ = 35,
  anon_sym_COMMA = 36,
  anon_sym_COLON = 37,
  anon_sym_SLASH = 38,
  anon_sym_DASH = 39,
  sym_word = 40,
  sym_log_file = 41,
  sym_log_level = 42,
  sym_date = 43,
  sym_time = 44,
  sym_constant = 45,
  sym_string_literal = 46,
  sym__interpreted_double_string = 47,
  sym__interpreted_single_string = 48,
  sym_number = 49,
  sym__word_separator = 50,
  aux_sym_log_file_repeat1 = 51,
  aux_sym__interpreted_double_string_repeat1 = 52,
  aux_sym__interpreted_single_string_repeat1 = 53,
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

static inline bool sym__interpreted_double_string_basic_content_character_set_4(int32_t c) {
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

static inline bool sym_word_character_set_4(int32_t c) {
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

static inline bool sym_word_character_set_5(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(163);
      if (lookahead == '\n') SKIP(161)
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '\'') ADVANCE(473);
      if (lookahead == '(') ADVANCE(466);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == ',') ADVANCE(466);
      if (lookahead == '-') ADVANCE(466);
      if (lookahead == '/') ADVANCE(466);
      if (lookahead == '0') ADVANCE(229);
      if (lookahead == '1') ADVANCE(234);
      if (lookahead == '2') ADVANCE(232);
      if (lookahead == '3') ADVANCE(231);
      if (lookahead == ':') ADVANCE(466);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == 'A') ADVANCE(330);
      if (lookahead == 'C') ADVANCE(354);
      if (lookahead == 'D') ADVANCE(308);
      if (lookahead == 'E') ADVANCE(337);
      if (lookahead == 'F') ADVANCE(292);
      if (lookahead == 'I') ADVANCE(338);
      if (lookahead == 'T') ADVANCE(355);
      if (lookahead == 'W') ADVANCE(295);
      if (lookahead == '[') ADVANCE(466);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead == ']') ADVANCE(466);
      if (lookahead == '`') ADVANCE(402);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead == 'f') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(454);
      if (lookahead == 't') ADVANCE(440);
      if (lookahead == 'v') ADVANCE(418);
      if (lookahead == 'w') ADVANCE(406);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '}') ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(401);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (lookahead != 0) ADVANCE(466);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(466);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(474);
      if (lookahead == '\\') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(475);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(490);
      if (lookahead == '1') ADVANCE(486);
      if (lookahead == ':') ADVANCE(151);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(191);
      if (lookahead == '3') ADVANCE(192);
      if (lookahead == ':') ADVANCE(151);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(193);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(491);
      if (lookahead == '1') ADVANCE(487);
      if (lookahead == ':') ADVANCE(151);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(492);
      if (lookahead == '1') ADVANCE(488);
      if (lookahead == ':') ADVANCE(151);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(493);
      if (lookahead == '3') ADVANCE(485);
      if (lookahead == ':') ADVANCE(151);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(495);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(145);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(149);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(489);
      if (lookahead == ':') ADVANCE(151);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(498);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 10:
      if (lookahead == '6') ADVANCE(482);
      if (lookahead == ':') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(496);
      if (('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(146);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(494);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(497);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(37);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(70);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(56);
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(42);
      END_STATE();
    case 21:
      if (lookahead == 'A') ADVANCE(63);
      END_STATE();
    case 22:
      if (lookahead == 'B') ADVANCE(65);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(66);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'C') ADVANCE(20);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(22);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(68);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(185);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(165);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(58);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 'F') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 'G') ADVANCE(170);
      END_STATE();
    case 34:
      if (lookahead == 'G') ADVANCE(178);
      END_STATE();
    case 35:
      if (lookahead == 'G') ADVANCE(30);
      END_STATE();
    case 36:
      if (lookahead == 'I') ADVANCE(62);
      END_STATE();
    case 37:
      if (lookahead == 'I') ADVANCE(41);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 38:
      if (lookahead == 'I') ADVANCE(25);
      END_STATE();
    case 39:
      if (lookahead == 'I') ADVANCE(51);
      END_STATE();
    case 40:
      if (lookahead == 'L') ADVANCE(29);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 41:
      if (lookahead == 'L') ADVANCE(186);
      END_STATE();
    case 42:
      if (lookahead == 'L') ADVANCE(185);
      END_STATE();
    case 43:
      if (lookahead == 'M') ADVANCE(21);
      END_STATE();
    case 44:
      if (lookahead == 'M') ADVANCE(31);
      if (lookahead == 'R') ADVANCE(55);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(135);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 45:
      if (lookahead == 'N') ADVANCE(32);
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 46:
      if (lookahead == 'N') ADVANCE(173);
      END_STATE();
    case 47:
      if (lookahead == 'N') ADVANCE(179);
      END_STATE();
    case 48:
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 49:
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 50:
      if (lookahead == 'O') ADVANCE(174);
      END_STATE();
    case 51:
      if (lookahead == 'O') ADVANCE(46);
      END_STATE();
    case 52:
      if (lookahead == 'O') ADVANCE(57);
      END_STATE();
    case 53:
      if (lookahead == 'R') ADVANCE(36);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 54:
      if (lookahead == 'R') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 55:
      if (lookahead == 'R') ADVANCE(52);
      END_STATE();
    case 56:
      if (lookahead == 'R') ADVANCE(47);
      END_STATE();
    case 57:
      if (lookahead == 'R') ADVANCE(185);
      END_STATE();
    case 58:
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 59:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 60:
      if (lookahead == 'R') ADVANCE(27);
      END_STATE();
    case 61:
      if (lookahead == 'T') ADVANCE(185);
      END_STATE();
    case 62:
      if (lookahead == 'T') ADVANCE(38);
      END_STATE();
    case 63:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 64:
      if (lookahead == 'U') ADVANCE(159);
      if (lookahead == 'u') ADVANCE(155);
      if (lookahead == 'x') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      if (lookahead != 0) ADVANCE(467);
      END_STATE();
    case 65:
      if (lookahead == 'U') ADVANCE(33);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 66:
      if (lookahead == 'Y') ADVANCE(185);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(71);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'b') ADVANCE(73);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'e') ADVANCE(68);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(140);
      if (lookahead == 't') ADVANCE(115);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'l') ADVANCE(142);
      if (lookahead == 't') ADVANCE(115);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'r') ADVANCE(135);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(125);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(601);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(599);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(597);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(595);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 104:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 105:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 106:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 107:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 108:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 109:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 110:
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 111:
      if (lookahead == '`') ADVANCE(212);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'u') ADVANCE(118);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(117);
      if (lookahead == 'u') ADVANCE(119);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(138);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(128);
      END_STATE();
    case 116:
      if (lookahead == 'b') ADVANCE(166);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(136);
      END_STATE();
    case 124:
      if (lookahead == 'f') ADVANCE(133);
      END_STATE();
    case 125:
      if (lookahead == 'g') ADVANCE(170);
      END_STATE();
    case 126:
      if (lookahead == 'g') ADVANCE(178);
      END_STATE();
    case 127:
      if (lookahead == 'l') ADVANCE(210);
      END_STATE();
    case 128:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 129:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 130:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 131:
      if (lookahead == 'n') ADVANCE(181);
      END_STATE();
    case 132:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 133:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 134:
      if (lookahead == 'o') ADVANCE(137);
      END_STATE();
    case 135:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 136:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 137:
      if (lookahead == 'r') ADVANCE(185);
      END_STATE();
    case 138:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 139:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 140:
      if (lookahead == 's') ADVANCE(120);
      END_STATE();
    case 141:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 142:
      if (lookahead == 's') ADVANCE(122);
      END_STATE();
    case 143:
      if (lookahead == 'u') ADVANCE(129);
      END_STATE();
    case 144:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(196);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(11);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(147);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(196);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(467);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(602);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(150);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(153);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(154);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(156);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(157);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(158);
      END_STATE();
    case 160:
      if (eof) ADVANCE(163);
      if (lookahead == '\n') SKIP(162)
      if (lookahead == '"') ADVANCE(215);
      if (lookahead == '\'') ADVANCE(473);
      if (lookahead == '(') ADVANCE(466);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == ',') ADVANCE(466);
      if (lookahead == '-') ADVANCE(466);
      if (lookahead == '/') ADVANCE(466);
      if (lookahead == '0') ADVANCE(224);
      if (lookahead == '1') ADVANCE(228);
      if (lookahead == '2') ADVANCE(226);
      if (lookahead == '3') ADVANCE(225);
      if (lookahead == ':') ADVANCE(466);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == 'A') ADVANCE(245);
      if (lookahead == 'C') ADVANCE(247);
      if (lookahead == 'D') ADVANCE(243);
      if (lookahead == 'E') ADVANCE(246);
      if (lookahead == 'F') ADVANCE(241);
      if (lookahead == 'I') ADVANCE(342);
      if (lookahead == 'T') ADVANCE(359);
      if (lookahead == 'W') ADVANCE(297);
      if (lookahead == '[') ADVANCE(466);
      if (lookahead == '\\') ADVANCE(710);
      if (lookahead == ']') ADVANCE(466);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'd') ADVANCE(251);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'f') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(455);
      if (lookahead == 't') ADVANCE(444);
      if (lookahead == 'v') ADVANCE(419);
      if (lookahead == 'w') ADVANCE(408);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '}') ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(222);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(257);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (lookahead != 0) ADVANCE(463);
      END_STATE();
    case 161:
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '\'') ADVANCE(473);
      if (lookahead == '(') ADVANCE(604);
      if (lookahead == ')') ADVANCE(605);
      if (lookahead == ',') ADVANCE(611);
      if (lookahead == '-') ADVANCE(614);
      if (lookahead == '/') ADVANCE(613);
      if (lookahead == '0') ADVANCE(545);
      if (lookahead == '1') ADVANCE(549);
      if (lookahead == '2') ADVANCE(548);
      if (lookahead == '3') ADVANCE(547);
      if (lookahead == ':') ADVANCE(612);
      if (lookahead == '=') ADVANCE(610);
      if (lookahead == 'A') ADVANCE(40);
      if (lookahead == 'C') ADVANCE(53);
      if (lookahead == 'D') ADVANCE(26);
      if (lookahead == 'E') ADVANCE(44);
      if (lookahead == 'F') ADVANCE(17);
      if (lookahead == 'I') ADVANCE(45);
      if (lookahead == 'T') ADVANCE(54);
      if (lookahead == 'W') ADVANCE(19);
      if (lookahead == '[') ADVANCE(606);
      if (lookahead == ']') ADVANCE(607);
      if (lookahead == '`') ADVANCE(111);
      if (lookahead == 'd') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(72);
      if (lookahead == 'f') ADVANCE(67);
      if (lookahead == 'i') ADVANCE(130);
      if (lookahead == 'n') ADVANCE(143);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == 'v') ADVANCE(123);
      if (lookahead == 'w') ADVANCE(114);
      if (lookahead == '{') ADVANCE(608);
      if (lookahead == '}') ADVANCE(609);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(161)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(565);
      END_STATE();
    case 162:
      if (eof) ADVANCE(163);
      if (lookahead == '"') ADVANCE(214);
      if (lookahead == '\'') ADVANCE(473);
      if (lookahead == '(') ADVANCE(604);
      if (lookahead == ')') ADVANCE(605);
      if (lookahead == ',') ADVANCE(611);
      if (lookahead == '-') ADVANCE(614);
      if (lookahead == '/') ADVANCE(613);
      if (lookahead == '0') ADVANCE(501);
      if (lookahead == '1') ADVANCE(504);
      if (lookahead == '2') ADVANCE(503);
      if (lookahead == '3') ADVANCE(502);
      if (lookahead == ':') ADVANCE(612);
      if (lookahead == '=') ADVANCE(610);
      if (lookahead == 'A') ADVANCE(619);
      if (lookahead == 'C') ADVANCE(621);
      if (lookahead == 'D') ADVANCE(617);
      if (lookahead == 'E') ADVANCE(620);
      if (lookahead == 'F') ADVANCE(615);
      if (lookahead == 'I') ADVANCE(692);
      if (lookahead == 'T') ADVANCE(700);
      if (lookahead == 'W') ADVANCE(671);
      if (lookahead == '[') ADVANCE(606);
      if (lookahead == ']') ADVANCE(607);
      if (lookahead == '`') ADVANCE(712);
      if (lookahead == 'd') ADVANCE(625);
      if (lookahead == 'e') ADVANCE(628);
      if (lookahead == 'f') ADVANCE(623);
      if (lookahead == 'i') ADVANCE(731);
      if (lookahead == 'n') ADVANCE(744);
      if (lookahead == 't') ADVANCE(740);
      if (lookahead == 'v') ADVANCE(724);
      if (lookahead == 'w') ADVANCE(715);
      if (lookahead == '{') ADVANCE(608);
      if (lookahead == '}') ADVANCE(609);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(647);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(162)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(520);
      if (lookahead != 0) ADVANCE(754);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_trace);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_trace);
      if (lookahead == ':') ADVANCE(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_trace);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(141);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_trace);
      if (lookahead == ':') ADVANCE(164);
      if (lookahead == 'o') ADVANCE(742);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(754);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_trace);
      if (lookahead == ':') ADVANCE(164);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(754);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_debug);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_debug);
      if (lookahead == ':') ADVANCE(169);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_debug);
      if (lookahead == ':') ADVANCE(169);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(754);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_info);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_info);
      if (lookahead == ':') ADVANCE(172);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_info);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == 'R') ADVANCE(43);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_info);
      if (lookahead == ':') ADVANCE(172);
      if (lookahead == 'R') ADVANCE(691);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(754);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_info);
      if (lookahead == ':') ADVANCE(172);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(754);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_warn);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_warn);
      if (lookahead == ':') ADVANCE(177);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_warn);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(49);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_warn);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == 'I') ADVANCE(696);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(754);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_warn);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_warn);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == 'i') ADVANCE(733);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(754);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_warn);
      if (lookahead == ':') ADVANCE(177);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(754);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_error);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == ':') ADVANCE(184);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'U') ADVANCE(60);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == ':') ADVANCE(184);
      if (lookahead == 'U') ADVANCE(706);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(754);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == ':') ADVANCE(184);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(754);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym_year_month_day);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == ' ') ADVANCE(189);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(195);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(754);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '0') ADVANCE(193);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(193);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(189);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_year_month_day);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym__time_with_offset);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym__time_with_offset);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(144);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(144);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == ',') ADVANCE(148);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(144);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(196);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(144);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(201);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(anon_sym_true);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(anon_sym_True);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(anon_sym_false);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(anon_sym_False);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(anon_sym_null);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__raw_string_literal);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ' ') ADVANCE(466);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(463);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ' ') ADVANCE(456);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(268);
      if (lookahead == '.') ADVANCE(286);
      if (lookahead == '/') ADVANCE(290);
      if (lookahead == ':') ADVANCE(269);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ' ') ADVANCE(456);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == ',') ADVANCE(460);
      if (lookahead == '-') ADVANCE(268);
      if (lookahead == '.') ADVANCE(286);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(290);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ' ') ADVANCE(456);
      if (lookahead == '+') ADVANCE(267);
      if (lookahead == '-') ADVANCE(268);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(466);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ' ') ADVANCE(456);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(267);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '\'') ADVANCE(473);
      if (lookahead == '(') ADVANCE(466);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == ',') ADVANCE(466);
      if (lookahead == '-') ADVANCE(466);
      if (lookahead == '/') ADVANCE(466);
      if (lookahead == '0') ADVANCE(229);
      if (lookahead == '1') ADVANCE(234);
      if (lookahead == '2') ADVANCE(232);
      if (lookahead == '3') ADVANCE(231);
      if (lookahead == ':') ADVANCE(466);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == 'A') ADVANCE(330);
      if (lookahead == 'C') ADVANCE(354);
      if (lookahead == 'D') ADVANCE(308);
      if (lookahead == 'E') ADVANCE(337);
      if (lookahead == 'F') ADVANCE(292);
      if (lookahead == 'I') ADVANCE(338);
      if (lookahead == 'T') ADVANCE(355);
      if (lookahead == 'W') ADVANCE(295);
      if (lookahead == '[') ADVANCE(466);
      if (lookahead == ']') ADVANCE(466);
      if (lookahead == '`') ADVANCE(402);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead == 'e') ADVANCE(382);
      if (lookahead == 'f') ADVANCE(378);
      if (lookahead == 'i') ADVANCE(430);
      if (lookahead == 'n') ADVANCE(454);
      if (lookahead == 't') ADVANCE(440);
      if (lookahead == 'v') ADVANCE(418);
      if (lookahead == 'w') ADVANCE(406);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '}') ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(221);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(401);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '\'') ADVANCE(473);
      if (lookahead == '(') ADVANCE(466);
      if (lookahead == ')') ADVANCE(466);
      if (lookahead == ',') ADVANCE(466);
      if (lookahead == '-') ADVANCE(466);
      if (lookahead == '/') ADVANCE(466);
      if (lookahead == '0') ADVANCE(224);
      if (lookahead == '1') ADVANCE(228);
      if (lookahead == '2') ADVANCE(226);
      if (lookahead == '3') ADVANCE(225);
      if (lookahead == ':') ADVANCE(466);
      if (lookahead == '=') ADVANCE(466);
      if (lookahead == 'A') ADVANCE(245);
      if (lookahead == 'C') ADVANCE(247);
      if (lookahead == 'D') ADVANCE(243);
      if (lookahead == 'E') ADVANCE(246);
      if (lookahead == 'F') ADVANCE(241);
      if (lookahead == 'I') ADVANCE(342);
      if (lookahead == 'T') ADVANCE(359);
      if (lookahead == 'W') ADVANCE(297);
      if (lookahead == '[') ADVANCE(466);
      if (lookahead == ']') ADVANCE(466);
      if (lookahead == '`') ADVANCE(403);
      if (lookahead == 'd') ADVANCE(251);
      if (lookahead == 'e') ADVANCE(253);
      if (lookahead == 'f') ADVANCE(249);
      if (lookahead == 'i') ADVANCE(433);
      if (lookahead == 'n') ADVANCE(455);
      if (lookahead == 't') ADVANCE(444);
      if (lookahead == 'v') ADVANCE(419);
      if (lookahead == 'w') ADVANCE(408);
      if (lookahead == '{') ADVANCE(466);
      if (lookahead == '}') ADVANCE(466);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(222);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(257);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '/') ADVANCE(290);
      if (lookahead == ':') ADVANCE(284);
      if (lookahead == '_') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '0') ADVANCE(223);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == 'x') ADVANCE(462);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(290);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(290);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(237);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(238);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(237);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(238);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '0') ADVANCE(230);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == 'x') ADVANCE(465);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(290);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == ':') ADVANCE(284);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(239);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(290);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(240);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(259);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(266);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(260);
      if (lookahead == ':') ADVANCE(290);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == '/') ADVANCE(265);
      if (lookahead == ':') ADVANCE(290);
      if (lookahead == '_') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == '.') ADVANCE(263);
      if (lookahead == '/') ADVANCE(265);
      if (lookahead == ':') ADVANCE(284);
      if (lookahead == '_') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(227);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == ':') ADVANCE(290);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(264);
      if (lookahead == ':') ADVANCE(284);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(265);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(233);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == 'A') ADVANCE(244);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == 'a') ADVANCE(252);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == 'B') ADVANCE(248);
      if (lookahead == '_') ADVANCE(289);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == 'E') ADVANCE(242);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == 'e') ADVANCE(250);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == 'I') ADVANCE(333);
      if (lookahead == 'T') ADVANCE(298);
      if (lookahead == '_') ADVANCE(289);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == 'L') ADVANCE(313);
      if (lookahead == '_') ADVANCE(289);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == 'M') ADVANCE(316);
      if (lookahead == 'R') ADVANCE(360);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == 'r') ADVANCE(445);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == 'R') ADVANCE(325);
      if (lookahead == '_') ADVANCE(289);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == 'U') ADVANCE(320);
      if (lookahead == '_') ADVANCE(289);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == 'a') ADVANCE(252);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == 'b') ADVANCE(254);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == 'e') ADVANCE(250);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == 'l') ADVANCE(451);
      if (lookahead == 't') ADVANCE(409);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == 'r') ADVANCE(445);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == 'u') ADVANCE(423);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '_') ADVANCE(289);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(258);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '_') ADVANCE(289);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(258);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(289);
      if (lookahead == '_') ADVANCE(289);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(288);
      if (lookahead == ':') ADVANCE(290);
      if (lookahead == '_') ADVANCE(289);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(287);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(392);
      if (lookahead == '1') ADVANCE(388);
      if (lookahead == ':') ADVANCE(464);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(261);
      if (lookahead == '3') ADVANCE(385);
      if (lookahead == ':') ADVANCE(464);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(386);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(386);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(466);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(218);
      if (lookahead == '_') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(256);
      if (lookahead == '1') ADVANCE(255);
      if (lookahead == ':') ADVANCE(464);
      if (sym__interpreted_double_string_basic_content_character_set_3(lookahead)) ADVANCE(466);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(393);
      if (lookahead == '1') ADVANCE(389);
      if (lookahead == ':') ADVANCE(464);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(394);
      if (lookahead == '1') ADVANCE(390);
      if (lookahead == ':') ADVANCE(464);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(395);
      if (lookahead == '3') ADVANCE(384);
      if (lookahead == ':') ADVANCE(464);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(398);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '2') ADVANCE(457);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '2') ADVANCE(391);
      if (lookahead == ':') ADVANCE(464);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(400);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '6') ADVANCE(262);
      if (lookahead == ':') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(399);
      if (('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(466);
      if (lookahead == 'I') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(466);
      if (lookahead == 'I') ADVANCE(343);
      if (sym__interpreted_double_string_basic_content_character_set_3(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(466);
      if (lookahead == 'R') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(466);
      if (lookahead == 'R') ADVANCE(336);
      if (sym__interpreted_double_string_basic_content_character_set_3(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(466);
      if (lookahead == 'U') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(466);
      if (lookahead == 'U') ADVANCE(366);
      if (sym__interpreted_double_string_basic_content_character_set_3(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(466);
      if (lookahead == 'i') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(466);
      if (lookahead == 'i') ADVANCE(434);
      if (sym__interpreted_double_string_basic_content_character_set_3(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(466);
      if (lookahead == 'o') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(466);
      if (lookahead == 'o') ADVANCE(453);
      if (sym__interpreted_double_string_basic_content_character_set_3(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(466);
      if (sym__interpreted_double_string_basic_content_character_set_3(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(290);
      if (lookahead == '_') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(397);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(396);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (sym__interpreted_double_string_basic_content_character_set_3(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(464);
      if (sym__interpreted_double_string_basic_content_character_set_3(lookahead)) ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(257);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(464);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == '_') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'A') ADVANCE(324);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == 'a') ADVANCE(381);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'A') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'A') ADVANCE(306);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'A') ADVANCE(357);
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'A') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'A') ADVANCE(361);
      if (lookahead == 'a') ADVANCE(449);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'A') ADVANCE(334);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'A') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'A') ADVANCE(374);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'B') ADVANCE(375);
      if (lookahead == '_') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'C') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'C') ADVANCE(377);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'C') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'C') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'C') ADVANCE(310);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'C') ADVANCE(298);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(301);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(379);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(280);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(367);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(347);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(368);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'F') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'F') ADVANCE(349);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'G') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'G') ADVANCE(280);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'G') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'G') ADVANCE(314);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(331);
      if (lookahead == 'T') ADVANCE(296);
      if (lookahead == '_') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(372);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(307);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(351);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'L') ADVANCE(311);
      if (lookahead == '_') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'L') ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'L') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'L') ADVANCE(275);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'L') ADVANCE(280);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'M') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'M') ADVANCE(300);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'M') ADVANCE(315);
      if (lookahead == 'R') ADVANCE(356);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == 'r') ADVANCE(441);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(317);
      if (lookahead == 'n') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(270);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(318);
      if (lookahead == 'n') ADVANCE(421);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(320);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(280);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(271);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(302);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(303);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'O') ADVANCE(272);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'O') ADVANCE(273);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'O') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'O') ADVANCE(344);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'O') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'O') ADVANCE(362);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(323);
      if (lookahead == '_') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(294);
      if (lookahead == 'r') ADVANCE(405);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(353);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(345);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(280);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(310);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(370);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(322);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'T') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'T') ADVANCE(280);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'T') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'T') ADVANCE(327);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'T') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'T') ADVANCE(329);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'U') ADVANCE(319);
      if (lookahead == '_') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'Y') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'Y') ADVANCE(280);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == 'a') ADVANCE(381);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == 'b') ADVANCE(383);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == 'e') ADVANCE(379);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == 'l') ADVANCE(450);
      if (lookahead == 't') ADVANCE(407);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == 'r') ADVANCE(441);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == 'u') ADVANCE(422);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(387);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(386);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(466);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(466);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(386);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(466);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(235);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(236);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(282);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(291);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(235);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(236);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(282);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(401);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(387);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(290);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(290);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '`') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(402);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '`') ADVANCE(463);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(412);
      if (lookahead == 'u') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(413);
      if (lookahead == 'u') ADVANCE(416);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(449);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(427);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'b') ADVANCE(278);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'b') ADVANCE(279);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'c') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'c') ADVANCE(417);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'e') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'e') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'e') ADVANCE(463);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'e') ADVANCE(280);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'e') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'e') ADVANCE(446);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'f') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'f') ADVANCE(437);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'g') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'g') ADVANCE(280);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'l') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'l') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'l') ADVANCE(463);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'l') ADVANCE(280);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'l') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'l') ADVANCE(426);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(276);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(421);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(423);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(277);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'o') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'o') ADVANCE(280);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'o') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'o') ADVANCE(447);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(281);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(405);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(439);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(411);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(280);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(435);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 's') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 's') ADVANCE(416);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 's') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 's') ADVANCE(417);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'u') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'u') ADVANCE(429);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(267);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(463);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(466);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(467);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(472);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(754);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(754);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym__interpreted_single_string_basic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(475);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(481);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(668);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0') ADVANCE(199);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(194);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(476);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(477);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(483);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(484);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(476);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(477);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(483);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(199);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(499);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '_') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(513);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(641);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '0') ADVANCE(500);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == 'x') ADVANCE(745);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(591);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(644);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(590);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(517);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(644);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(591);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(590);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(644);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(591);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(644);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(506);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(634);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(514);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(630);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(508);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(635);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(631);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(510);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(636);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(632);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(512);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(637);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(633);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(505);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(638);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(507);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(600);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(509);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(639);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(640);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(513);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(641);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(515);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(642);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(643);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(517);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(644);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(645);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(646);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(542);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(598);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(648);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(522);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(649);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(650);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(525);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(651);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(652);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(596);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(530);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(654);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(655);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(656);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(533);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(657);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(534);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(658);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(535);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(659);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(660);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(661);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(662);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(663);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(664);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(665);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(594);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(666);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '0') ADVANCE(546);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(152);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(592);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(593);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(592);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(593);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(559);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(553);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(568);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(555);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(574);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(557);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(588);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(601);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(554);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(556);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(560);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(561);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(562);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(563);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(564);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(587);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(599);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(567);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(569);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(570);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(571);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(572);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(597);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(573);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(575);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(576);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(577);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(578);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(579);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(580);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(581);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(582);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(583);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(584);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(585);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(586);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(595);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(589);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(667);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '_') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(513);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(641);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(667);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '_') ADVANCE(669);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(513);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(641);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '_') ADVANCE(16);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(558);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(666);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(651);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(665);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(635);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '_') ADVANCE(16);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(602);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(603);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(754);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == 'A') ADVANCE(618);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == 'a') ADVANCE(626);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(644);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == 'B') ADVANCE(622);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(641);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == 'E') ADVANCE(616);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == 'e') ADVANCE(624);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(644);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == 'I') ADVANCE(689);
      if (lookahead == 'T') ADVANCE(672);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(641);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == 'L') ADVANCE(679);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(644);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == 'M') ADVANCE(681);
      if (lookahead == 'R') ADVANCE(701);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == 'r') ADVANCE(736);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(644);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == 'R') ADVANCE(686);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(644);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == 'U') ADVANCE(683);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(638);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == 'a') ADVANCE(627);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(644);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == 'b') ADVANCE(629);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(641);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == 'e') ADVANCE(624);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(644);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == 'l') ADVANCE(741);
      if (lookahead == 't') ADVANCE(716);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(641);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == 'l') ADVANCE(743);
      if (lookahead == 't') ADVANCE(716);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(641);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == 'r') ADVANCE(736);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(644);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (lookahead == 'u') ADVANCE(726);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(638);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(600);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(598);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(596);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(594);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(630);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(631);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(632);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(633);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(634);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(636);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(637);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(638);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(639);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(640);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(641);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(642);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(643);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(644);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(645);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(646);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(648);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(649);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(650);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(652);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(653);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(654);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(655);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(656);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(657);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(658);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(659);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(660);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(661);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(662);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(663);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(664);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(669);
      if (lookahead == '_') ADVANCE(669);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(666);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(754);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(479);
      if (lookahead == '1') ADVANCE(478);
      if (lookahead == ':') ADVANCE(151);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(754);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(754);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(480);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(754);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(675);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(702);
      if (lookahead == 'a') ADVANCE(739);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(690);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(709);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(711);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(678);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(672);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(188);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(168);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(704);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(695);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(705);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(697);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(171);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(183);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(680);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(708);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(676);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(698);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(187);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(188);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'M') ADVANCE(673);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(682);
      if (lookahead == 'n') ADVANCE(725);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(176);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(180);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(674);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(684);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(175);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(693);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(703);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(670);
      if (lookahead == 'r') ADVANCE(713);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(699);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(694);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(188);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(707);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(685);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(677);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(188);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(687);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(688);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(753);
      if (lookahead == 'u') ADVANCE(749);
      if (lookahead == 'x') ADVANCE(747);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if (sym__escape_sequence_character_set_1(lookahead)) ADVANCE(467);
      if (lookahead != 0) ADVANCE(472);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'Y') ADVANCE(188);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '`') ADVANCE(213);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(111);
      if (lookahead != 0) ADVANCE(712);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(718);
      if (lookahead == 'u') ADVANCE(719);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(718);
      if (lookahead == 'u') ADVANCE(720);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(739);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(729);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(167);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(722);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(205);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(203);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(209);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(168);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(207);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(737);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(734);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(171);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(183);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(211);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(188);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(728);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(725);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(182);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(727);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(176);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(738);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(735);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(717);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(188);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(732);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(714);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(721);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(722);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(723);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(730);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(603);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(754);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(472);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(754);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(746);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(754);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(747);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(754);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(748);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(754);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(749);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(754);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(750);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(754);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(751);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(754);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(752);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(754);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(sym_word);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(754);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 162},
  [2] = {.lex_state = 162},
  [3] = {.lex_state = 162},
  [4] = {.lex_state = 160},
  [5] = {.lex_state = 162},
  [6] = {.lex_state = 162},
  [7] = {.lex_state = 162},
  [8] = {.lex_state = 162},
  [9] = {.lex_state = 162},
  [10] = {.lex_state = 162},
  [11] = {.lex_state = 162},
  [12] = {.lex_state = 162},
  [13] = {.lex_state = 162},
  [14] = {.lex_state = 162},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 0},
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
    [sym_log_file] = STATE(20),
    [sym_log_level] = STATE(2),
    [sym_date] = STATE(2),
    [sym_time] = STATE(6),
    [sym_constant] = STATE(2),
    [sym_string_literal] = STATE(2),
    [sym__interpreted_double_string] = STATE(9),
    [sym__interpreted_single_string] = STATE(9),
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
    [anon_sym_True] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_False] = ACTIONS(11),
    [anon_sym_null] = ACTIONS(11),
    [sym__raw_string_literal] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_number_token1] = ACTIONS(19),
    [aux_sym_number_token2] = ACTIONS(19),
    [aux_sym_number_token3] = ACTIONS(19),
    [aux_sym_number_token4] = ACTIONS(19),
    [aux_sym_number_token5] = ACTIONS(19),
    [aux_sym_number_token6] = ACTIONS(19),
    [aux_sym_number_token7] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [anon_sym_RPAREN] = ACTIONS(21),
    [anon_sym_LBRACK] = ACTIONS(21),
    [anon_sym_RBRACK] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(21),
    [anon_sym_RBRACE] = ACTIONS(21),
    [anon_sym_EQ] = ACTIONS(21),
    [anon_sym_COMMA] = ACTIONS(21),
    [anon_sym_COLON] = ACTIONS(21),
    [anon_sym_SLASH] = ACTIONS(21),
    [anon_sym_DASH] = ACTIONS(21),
    [sym_word] = ACTIONS(23),
  },
  [2] = {
    [sym_log_level] = STATE(3),
    [sym_date] = STATE(3),
    [sym_time] = STATE(6),
    [sym_constant] = STATE(3),
    [sym_string_literal] = STATE(3),
    [sym__interpreted_double_string] = STATE(9),
    [sym__interpreted_single_string] = STATE(9),
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
    [anon_sym_True] = ACTIONS(11),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_False] = ACTIONS(11),
    [anon_sym_null] = ACTIONS(11),
    [sym__raw_string_literal] = ACTIONS(13),
    [anon_sym_DQUOTE] = ACTIONS(15),
    [anon_sym_SQUOTE] = ACTIONS(17),
    [aux_sym_number_token1] = ACTIONS(19),
    [aux_sym_number_token2] = ACTIONS(19),
    [aux_sym_number_token3] = ACTIONS(19),
    [aux_sym_number_token4] = ACTIONS(19),
    [aux_sym_number_token5] = ACTIONS(19),
    [aux_sym_number_token6] = ACTIONS(19),
    [aux_sym_number_token7] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(27),
    [anon_sym_RPAREN] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_RBRACE] = ACTIONS(27),
    [anon_sym_EQ] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
    [anon_sym_COLON] = ACTIONS(27),
    [anon_sym_SLASH] = ACTIONS(27),
    [anon_sym_DASH] = ACTIONS(27),
    [sym_word] = ACTIONS(29),
  },
  [3] = {
    [sym_log_level] = STATE(3),
    [sym_date] = STATE(3),
    [sym_time] = STATE(6),
    [sym_constant] = STATE(3),
    [sym_string_literal] = STATE(3),
    [sym__interpreted_double_string] = STATE(9),
    [sym__interpreted_single_string] = STATE(9),
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
    [anon_sym_True] = ACTIONS(42),
    [anon_sym_false] = ACTIONS(42),
    [anon_sym_False] = ACTIONS(42),
    [anon_sym_null] = ACTIONS(42),
    [sym__raw_string_literal] = ACTIONS(45),
    [anon_sym_DQUOTE] = ACTIONS(48),
    [anon_sym_SQUOTE] = ACTIONS(51),
    [aux_sym_number_token1] = ACTIONS(54),
    [aux_sym_number_token2] = ACTIONS(54),
    [aux_sym_number_token3] = ACTIONS(54),
    [aux_sym_number_token4] = ACTIONS(54),
    [aux_sym_number_token5] = ACTIONS(54),
    [aux_sym_number_token6] = ACTIONS(54),
    [aux_sym_number_token7] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_RBRACK] = ACTIONS(57),
    [anon_sym_LBRACE] = ACTIONS(57),
    [anon_sym_RBRACE] = ACTIONS(57),
    [anon_sym_EQ] = ACTIONS(57),
    [anon_sym_COMMA] = ACTIONS(57),
    [anon_sym_COLON] = ACTIONS(57),
    [anon_sym_SLASH] = ACTIONS(57),
    [anon_sym_DASH] = ACTIONS(57),
    [sym_word] = ACTIONS(60),
  },
  [4] = {
    [aux_sym__interpreted_double_string_repeat1] = STATE(17),
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
    [anon_sym_null] = ACTIONS(65),
    [sym__raw_string_literal] = ACTIONS(65),
    [anon_sym_DQUOTE] = ACTIONS(65),
    [anon_sym_DQUOTE2] = ACTIONS(67),
    [sym__interpreted_double_string_basic_content] = ACTIONS(69),
    [sym__escape_sequence] = ACTIONS(69),
    [anon_sym_SQUOTE] = ACTIONS(65),
    [aux_sym_number_token1] = ACTIONS(65),
    [aux_sym_number_token2] = ACTIONS(65),
    [aux_sym_number_token3] = ACTIONS(65),
    [aux_sym_number_token4] = ACTIONS(65),
    [aux_sym_number_token5] = ACTIONS(65),
    [aux_sym_number_token6] = ACTIONS(65),
    [aux_sym_number_token7] = ACTIONS(65),
    [anon_sym_LPAREN] = ACTIONS(65),
    [anon_sym_RPAREN] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(65),
    [anon_sym_RBRACK] = ACTIONS(65),
    [anon_sym_LBRACE] = ACTIONS(65),
    [anon_sym_RBRACE] = ACTIONS(65),
    [anon_sym_EQ] = ACTIONS(65),
    [anon_sym_COMMA] = ACTIONS(65),
    [anon_sym_COLON] = ACTIONS(65),
    [anon_sym_SLASH] = ACTIONS(65),
    [anon_sym_DASH] = ACTIONS(65),
    [sym_word] = ACTIONS(65),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(71),
    [sym_trace] = ACTIONS(73),
    [sym_debug] = ACTIONS(73),
    [sym_info] = ACTIONS(73),
    [sym_warn] = ACTIONS(73),
    [sym_error] = ACTIONS(73),
    [sym_year_month_day] = ACTIONS(73),
    [sym__time_with_offset] = ACTIONS(73),
    [sym__time_without_offset] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_True] = ACTIONS(73),
    [anon_sym_false] = ACTIONS(73),
    [anon_sym_False] = ACTIONS(73),
    [anon_sym_null] = ACTIONS(73),
    [sym__raw_string_literal] = ACTIONS(73),
    [anon_sym_DQUOTE] = ACTIONS(71),
    [anon_sym_SQUOTE] = ACTIONS(71),
    [aux_sym_number_token1] = ACTIONS(73),
    [aux_sym_number_token2] = ACTIONS(73),
    [aux_sym_number_token3] = ACTIONS(73),
    [aux_sym_number_token4] = ACTIONS(73),
    [aux_sym_number_token5] = ACTIONS(73),
    [aux_sym_number_token6] = ACTIONS(73),
    [aux_sym_number_token7] = ACTIONS(73),
    [anon_sym_LPAREN] = ACTIONS(71),
    [anon_sym_RPAREN] = ACTIONS(71),
    [anon_sym_LBRACK] = ACTIONS(71),
    [anon_sym_RBRACK] = ACTIONS(71),
    [anon_sym_LBRACE] = ACTIONS(71),
    [anon_sym_RBRACE] = ACTIONS(71),
    [anon_sym_EQ] = ACTIONS(71),
    [anon_sym_COMMA] = ACTIONS(71),
    [anon_sym_COLON] = ACTIONS(71),
    [anon_sym_SLASH] = ACTIONS(71),
    [anon_sym_DASH] = ACTIONS(71),
    [sym_word] = ACTIONS(73),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(75),
    [sym_trace] = ACTIONS(77),
    [sym_debug] = ACTIONS(77),
    [sym_info] = ACTIONS(77),
    [sym_warn] = ACTIONS(77),
    [sym_error] = ACTIONS(77),
    [sym_year_month_day] = ACTIONS(77),
    [sym__time_with_offset] = ACTIONS(77),
    [sym__time_without_offset] = ACTIONS(77),
    [anon_sym_true] = ACTIONS(77),
    [anon_sym_True] = ACTIONS(77),
    [anon_sym_false] = ACTIONS(77),
    [anon_sym_False] = ACTIONS(77),
    [anon_sym_null] = ACTIONS(77),
    [sym__raw_string_literal] = ACTIONS(77),
    [anon_sym_DQUOTE] = ACTIONS(75),
    [anon_sym_SQUOTE] = ACTIONS(75),
    [aux_sym_number_token1] = ACTIONS(77),
    [aux_sym_number_token2] = ACTIONS(77),
    [aux_sym_number_token3] = ACTIONS(77),
    [aux_sym_number_token4] = ACTIONS(77),
    [aux_sym_number_token5] = ACTIONS(77),
    [aux_sym_number_token6] = ACTIONS(77),
    [aux_sym_number_token7] = ACTIONS(77),
    [anon_sym_LPAREN] = ACTIONS(75),
    [anon_sym_RPAREN] = ACTIONS(75),
    [anon_sym_LBRACK] = ACTIONS(75),
    [anon_sym_RBRACK] = ACTIONS(75),
    [anon_sym_LBRACE] = ACTIONS(75),
    [anon_sym_RBRACE] = ACTIONS(75),
    [anon_sym_EQ] = ACTIONS(75),
    [anon_sym_COMMA] = ACTIONS(75),
    [anon_sym_COLON] = ACTIONS(75),
    [anon_sym_SLASH] = ACTIONS(75),
    [anon_sym_DASH] = ACTIONS(75),
    [sym_word] = ACTIONS(77),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(79),
    [sym_trace] = ACTIONS(81),
    [sym_debug] = ACTIONS(81),
    [sym_info] = ACTIONS(81),
    [sym_warn] = ACTIONS(81),
    [sym_error] = ACTIONS(81),
    [sym_year_month_day] = ACTIONS(81),
    [sym__time_with_offset] = ACTIONS(81),
    [sym__time_without_offset] = ACTIONS(81),
    [anon_sym_true] = ACTIONS(81),
    [anon_sym_True] = ACTIONS(81),
    [anon_sym_false] = ACTIONS(81),
    [anon_sym_False] = ACTIONS(81),
    [anon_sym_null] = ACTIONS(81),
    [sym__raw_string_literal] = ACTIONS(81),
    [anon_sym_DQUOTE] = ACTIONS(79),
    [anon_sym_SQUOTE] = ACTIONS(79),
    [aux_sym_number_token1] = ACTIONS(81),
    [aux_sym_number_token2] = ACTIONS(81),
    [aux_sym_number_token3] = ACTIONS(81),
    [aux_sym_number_token4] = ACTIONS(81),
    [aux_sym_number_token5] = ACTIONS(81),
    [aux_sym_number_token6] = ACTIONS(81),
    [aux_sym_number_token7] = ACTIONS(81),
    [anon_sym_LPAREN] = ACTIONS(79),
    [anon_sym_RPAREN] = ACTIONS(79),
    [anon_sym_LBRACK] = ACTIONS(79),
    [anon_sym_RBRACK] = ACTIONS(79),
    [anon_sym_LBRACE] = ACTIONS(79),
    [anon_sym_RBRACE] = ACTIONS(79),
    [anon_sym_EQ] = ACTIONS(79),
    [anon_sym_COMMA] = ACTIONS(79),
    [anon_sym_COLON] = ACTIONS(79),
    [anon_sym_SLASH] = ACTIONS(79),
    [anon_sym_DASH] = ACTIONS(79),
    [sym_word] = ACTIONS(81),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_trace] = ACTIONS(85),
    [sym_debug] = ACTIONS(85),
    [sym_info] = ACTIONS(85),
    [sym_warn] = ACTIONS(85),
    [sym_error] = ACTIONS(85),
    [sym_year_month_day] = ACTIONS(85),
    [sym__time_with_offset] = ACTIONS(85),
    [sym__time_without_offset] = ACTIONS(85),
    [anon_sym_true] = ACTIONS(85),
    [anon_sym_True] = ACTIONS(85),
    [anon_sym_false] = ACTIONS(85),
    [anon_sym_False] = ACTIONS(85),
    [anon_sym_null] = ACTIONS(85),
    [sym__raw_string_literal] = ACTIONS(85),
    [anon_sym_DQUOTE] = ACTIONS(83),
    [anon_sym_SQUOTE] = ACTIONS(83),
    [aux_sym_number_token1] = ACTIONS(85),
    [aux_sym_number_token2] = ACTIONS(85),
    [aux_sym_number_token3] = ACTIONS(85),
    [aux_sym_number_token4] = ACTIONS(85),
    [aux_sym_number_token5] = ACTIONS(85),
    [aux_sym_number_token6] = ACTIONS(85),
    [aux_sym_number_token7] = ACTIONS(85),
    [anon_sym_LPAREN] = ACTIONS(83),
    [anon_sym_RPAREN] = ACTIONS(83),
    [anon_sym_LBRACK] = ACTIONS(83),
    [anon_sym_RBRACK] = ACTIONS(83),
    [anon_sym_LBRACE] = ACTIONS(83),
    [anon_sym_RBRACE] = ACTIONS(83),
    [anon_sym_EQ] = ACTIONS(83),
    [anon_sym_COMMA] = ACTIONS(83),
    [anon_sym_COLON] = ACTIONS(83),
    [anon_sym_SLASH] = ACTIONS(83),
    [anon_sym_DASH] = ACTIONS(83),
    [sym_word] = ACTIONS(85),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_trace] = ACTIONS(89),
    [sym_debug] = ACTIONS(89),
    [sym_info] = ACTIONS(89),
    [sym_warn] = ACTIONS(89),
    [sym_error] = ACTIONS(89),
    [sym_year_month_day] = ACTIONS(89),
    [sym__time_with_offset] = ACTIONS(89),
    [sym__time_without_offset] = ACTIONS(89),
    [anon_sym_true] = ACTIONS(89),
    [anon_sym_True] = ACTIONS(89),
    [anon_sym_false] = ACTIONS(89),
    [anon_sym_False] = ACTIONS(89),
    [anon_sym_null] = ACTIONS(89),
    [sym__raw_string_literal] = ACTIONS(89),
    [anon_sym_DQUOTE] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(87),
    [aux_sym_number_token1] = ACTIONS(89),
    [aux_sym_number_token2] = ACTIONS(89),
    [aux_sym_number_token3] = ACTIONS(89),
    [aux_sym_number_token4] = ACTIONS(89),
    [aux_sym_number_token5] = ACTIONS(89),
    [aux_sym_number_token6] = ACTIONS(89),
    [aux_sym_number_token7] = ACTIONS(89),
    [anon_sym_LPAREN] = ACTIONS(87),
    [anon_sym_RPAREN] = ACTIONS(87),
    [anon_sym_LBRACK] = ACTIONS(87),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_LBRACE] = ACTIONS(87),
    [anon_sym_RBRACE] = ACTIONS(87),
    [anon_sym_EQ] = ACTIONS(87),
    [anon_sym_COMMA] = ACTIONS(87),
    [anon_sym_COLON] = ACTIONS(87),
    [anon_sym_SLASH] = ACTIONS(87),
    [anon_sym_DASH] = ACTIONS(87),
    [sym_word] = ACTIONS(89),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym_trace] = ACTIONS(93),
    [sym_debug] = ACTIONS(93),
    [sym_info] = ACTIONS(93),
    [sym_warn] = ACTIONS(93),
    [sym_error] = ACTIONS(93),
    [sym_year_month_day] = ACTIONS(93),
    [sym__time_with_offset] = ACTIONS(93),
    [sym__time_without_offset] = ACTIONS(93),
    [anon_sym_true] = ACTIONS(93),
    [anon_sym_True] = ACTIONS(93),
    [anon_sym_false] = ACTIONS(93),
    [anon_sym_False] = ACTIONS(93),
    [anon_sym_null] = ACTIONS(93),
    [sym__raw_string_literal] = ACTIONS(93),
    [anon_sym_DQUOTE] = ACTIONS(91),
    [anon_sym_SQUOTE] = ACTIONS(91),
    [aux_sym_number_token1] = ACTIONS(93),
    [aux_sym_number_token2] = ACTIONS(93),
    [aux_sym_number_token3] = ACTIONS(93),
    [aux_sym_number_token4] = ACTIONS(93),
    [aux_sym_number_token5] = ACTIONS(93),
    [aux_sym_number_token6] = ACTIONS(93),
    [aux_sym_number_token7] = ACTIONS(93),
    [anon_sym_LPAREN] = ACTIONS(91),
    [anon_sym_RPAREN] = ACTIONS(91),
    [anon_sym_LBRACK] = ACTIONS(91),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_LBRACE] = ACTIONS(91),
    [anon_sym_RBRACE] = ACTIONS(91),
    [anon_sym_EQ] = ACTIONS(91),
    [anon_sym_COMMA] = ACTIONS(91),
    [anon_sym_COLON] = ACTIONS(91),
    [anon_sym_SLASH] = ACTIONS(91),
    [anon_sym_DASH] = ACTIONS(91),
    [sym_word] = ACTIONS(93),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(95),
    [sym_trace] = ACTIONS(97),
    [sym_debug] = ACTIONS(97),
    [sym_info] = ACTIONS(97),
    [sym_warn] = ACTIONS(97),
    [sym_error] = ACTIONS(97),
    [sym_year_month_day] = ACTIONS(97),
    [sym__time_with_offset] = ACTIONS(97),
    [sym__time_without_offset] = ACTIONS(97),
    [anon_sym_true] = ACTIONS(97),
    [anon_sym_True] = ACTIONS(97),
    [anon_sym_false] = ACTIONS(97),
    [anon_sym_False] = ACTIONS(97),
    [anon_sym_null] = ACTIONS(97),
    [sym__raw_string_literal] = ACTIONS(97),
    [anon_sym_DQUOTE] = ACTIONS(95),
    [anon_sym_SQUOTE] = ACTIONS(95),
    [aux_sym_number_token1] = ACTIONS(97),
    [aux_sym_number_token2] = ACTIONS(97),
    [aux_sym_number_token3] = ACTIONS(97),
    [aux_sym_number_token4] = ACTIONS(97),
    [aux_sym_number_token5] = ACTIONS(97),
    [aux_sym_number_token6] = ACTIONS(97),
    [aux_sym_number_token7] = ACTIONS(97),
    [anon_sym_LPAREN] = ACTIONS(95),
    [anon_sym_RPAREN] = ACTIONS(95),
    [anon_sym_LBRACK] = ACTIONS(95),
    [anon_sym_RBRACK] = ACTIONS(95),
    [anon_sym_LBRACE] = ACTIONS(95),
    [anon_sym_RBRACE] = ACTIONS(95),
    [anon_sym_EQ] = ACTIONS(95),
    [anon_sym_COMMA] = ACTIONS(95),
    [anon_sym_COLON] = ACTIONS(95),
    [anon_sym_SLASH] = ACTIONS(95),
    [anon_sym_DASH] = ACTIONS(95),
    [sym_word] = ACTIONS(97),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_trace] = ACTIONS(101),
    [sym_debug] = ACTIONS(101),
    [sym_info] = ACTIONS(101),
    [sym_warn] = ACTIONS(101),
    [sym_error] = ACTIONS(101),
    [sym_year_month_day] = ACTIONS(101),
    [sym__time_with_offset] = ACTIONS(101),
    [sym__time_without_offset] = ACTIONS(101),
    [anon_sym_true] = ACTIONS(101),
    [anon_sym_True] = ACTIONS(101),
    [anon_sym_false] = ACTIONS(101),
    [anon_sym_False] = ACTIONS(101),
    [anon_sym_null] = ACTIONS(101),
    [sym__raw_string_literal] = ACTIONS(101),
    [anon_sym_DQUOTE] = ACTIONS(99),
    [anon_sym_SQUOTE] = ACTIONS(99),
    [aux_sym_number_token1] = ACTIONS(101),
    [aux_sym_number_token2] = ACTIONS(101),
    [aux_sym_number_token3] = ACTIONS(101),
    [aux_sym_number_token4] = ACTIONS(101),
    [aux_sym_number_token5] = ACTIONS(101),
    [aux_sym_number_token6] = ACTIONS(101),
    [aux_sym_number_token7] = ACTIONS(101),
    [anon_sym_LPAREN] = ACTIONS(99),
    [anon_sym_RPAREN] = ACTIONS(99),
    [anon_sym_LBRACK] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_LBRACE] = ACTIONS(99),
    [anon_sym_RBRACE] = ACTIONS(99),
    [anon_sym_EQ] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(99),
    [anon_sym_COLON] = ACTIONS(99),
    [anon_sym_SLASH] = ACTIONS(99),
    [anon_sym_DASH] = ACTIONS(99),
    [sym_word] = ACTIONS(101),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(103),
    [sym_trace] = ACTIONS(105),
    [sym_debug] = ACTIONS(105),
    [sym_info] = ACTIONS(105),
    [sym_warn] = ACTIONS(105),
    [sym_error] = ACTIONS(105),
    [sym_year_month_day] = ACTIONS(105),
    [sym__time_with_offset] = ACTIONS(105),
    [sym__time_without_offset] = ACTIONS(105),
    [anon_sym_true] = ACTIONS(105),
    [anon_sym_True] = ACTIONS(105),
    [anon_sym_false] = ACTIONS(105),
    [anon_sym_False] = ACTIONS(105),
    [anon_sym_null] = ACTIONS(105),
    [sym__raw_string_literal] = ACTIONS(105),
    [anon_sym_DQUOTE] = ACTIONS(103),
    [anon_sym_SQUOTE] = ACTIONS(103),
    [aux_sym_number_token1] = ACTIONS(105),
    [aux_sym_number_token2] = ACTIONS(105),
    [aux_sym_number_token3] = ACTIONS(105),
    [aux_sym_number_token4] = ACTIONS(105),
    [aux_sym_number_token5] = ACTIONS(105),
    [aux_sym_number_token6] = ACTIONS(105),
    [aux_sym_number_token7] = ACTIONS(105),
    [anon_sym_LPAREN] = ACTIONS(103),
    [anon_sym_RPAREN] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(103),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_LBRACE] = ACTIONS(103),
    [anon_sym_RBRACE] = ACTIONS(103),
    [anon_sym_EQ] = ACTIONS(103),
    [anon_sym_COMMA] = ACTIONS(103),
    [anon_sym_COLON] = ACTIONS(103),
    [anon_sym_SLASH] = ACTIONS(103),
    [anon_sym_DASH] = ACTIONS(103),
    [sym_word] = ACTIONS(105),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [sym_trace] = ACTIONS(109),
    [sym_debug] = ACTIONS(109),
    [sym_info] = ACTIONS(109),
    [sym_warn] = ACTIONS(109),
    [sym_error] = ACTIONS(109),
    [sym_year_month_day] = ACTIONS(109),
    [sym__time_with_offset] = ACTIONS(109),
    [sym__time_without_offset] = ACTIONS(109),
    [anon_sym_true] = ACTIONS(109),
    [anon_sym_True] = ACTIONS(109),
    [anon_sym_false] = ACTIONS(109),
    [anon_sym_False] = ACTIONS(109),
    [anon_sym_null] = ACTIONS(109),
    [sym__raw_string_literal] = ACTIONS(109),
    [anon_sym_DQUOTE] = ACTIONS(107),
    [anon_sym_SQUOTE] = ACTIONS(107),
    [aux_sym_number_token1] = ACTIONS(109),
    [aux_sym_number_token2] = ACTIONS(109),
    [aux_sym_number_token3] = ACTIONS(109),
    [aux_sym_number_token4] = ACTIONS(109),
    [aux_sym_number_token5] = ACTIONS(109),
    [aux_sym_number_token6] = ACTIONS(109),
    [aux_sym_number_token7] = ACTIONS(109),
    [anon_sym_LPAREN] = ACTIONS(107),
    [anon_sym_RPAREN] = ACTIONS(107),
    [anon_sym_LBRACK] = ACTIONS(107),
    [anon_sym_RBRACK] = ACTIONS(107),
    [anon_sym_LBRACE] = ACTIONS(107),
    [anon_sym_RBRACE] = ACTIONS(107),
    [anon_sym_EQ] = ACTIONS(107),
    [anon_sym_COMMA] = ACTIONS(107),
    [anon_sym_COLON] = ACTIONS(107),
    [anon_sym_SLASH] = ACTIONS(107),
    [anon_sym_DASH] = ACTIONS(107),
    [sym_word] = ACTIONS(109),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(113), 1,
      anon_sym_SQUOTE2,
    STATE(19), 1,
      aux_sym__interpreted_single_string_repeat1,
    ACTIONS(111), 2,
      sym__escape_sequence,
      sym__interpreted_single_string_basic_content,
  [11] = 3,
    ACTIONS(117), 1,
      anon_sym_SQUOTE2,
    STATE(15), 1,
      aux_sym__interpreted_single_string_repeat1,
    ACTIONS(115), 2,
      sym__escape_sequence,
      sym__interpreted_single_string_basic_content,
  [22] = 3,
    ACTIONS(119), 1,
      anon_sym_DQUOTE2,
    STATE(18), 1,
      aux_sym__interpreted_double_string_repeat1,
    ACTIONS(121), 2,
      sym__interpreted_double_string_basic_content,
      sym__escape_sequence,
  [33] = 3,
    ACTIONS(123), 1,
      anon_sym_DQUOTE2,
    STATE(18), 1,
      aux_sym__interpreted_double_string_repeat1,
    ACTIONS(125), 2,
      sym__interpreted_double_string_basic_content,
      sym__escape_sequence,
  [44] = 3,
    ACTIONS(131), 1,
      anon_sym_SQUOTE2,
    STATE(19), 1,
      aux_sym__interpreted_single_string_repeat1,
    ACTIONS(128), 2,
      sym__escape_sequence,
      sym__interpreted_single_string_basic_content,
  [55] = 1,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 11,
  [SMALL_STATE(17)] = 22,
  [SMALL_STATE(18)] = 33,
  [SMALL_STATE(19)] = 44,
  [SMALL_STATE(20)] = 55,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
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
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(9),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(4),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(16),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(11),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(3),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_separator, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_separator, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_level, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_single_string, 3),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_single_string, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_double_string, 3),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_double_string, 3),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_double_string, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_double_string, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_single_string, 2),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_single_string, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__interpreted_double_string_repeat1, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_double_string_repeat1, 2), SHIFT_REPEAT(18),
  [128] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_single_string_repeat1, 2), SHIFT_REPEAT(19),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__interpreted_single_string_repeat1, 2),
  [133] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
