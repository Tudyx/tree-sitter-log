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
  sym__raw_string_literal = 13,
  anon_sym_DQUOTE = 14,
  anon_sym_DQUOTE2 = 15,
  sym__interpreted_double_string_basic_content = 16,
  sym__escape_sequence = 17,
  anon_sym_SQUOTE = 18,
  anon_sym_SQUOTE2 = 19,
  sym__interpreted_single_string_basic_content = 20,
  aux_sym_number_token1 = 21,
  aux_sym_number_token2 = 22,
  aux_sym_number_token3 = 23,
  aux_sym_number_token4 = 24,
  aux_sym_number_token5 = 25,
  aux_sym_number_token6 = 26,
  aux_sym_number_token7 = 27,
  anon_sym_LPAREN = 28,
  anon_sym_RPAREN = 29,
  anon_sym_T = 30,
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
  [anon_sym_T] = "T",
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
  [anon_sym_T] = anon_sym_T,
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
  return (c < ':'
    ? (c < '"'
      ? (c < '\r'
        ? (c >= '\t' && c <= '\n')
        : (c <= '\r' || c == ' '))
      : (c <= '"' || (c < ','
        ? (c >= '(' && c <= ')')
        : (c <= '-' || c == '/'))))
    : (c <= ':' || (c < ']'
      ? (c < 'T'
        ? c == '='
        : (c <= 'T' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym__interpreted_double_string_basic_content_character_set_1(int32_t c) {
  return (c < '='
    ? (c < ' '
      ? (c < '\r'
        ? c == '\t'
        : c <= '\r')
      : (c <= ' ' || (c < ','
        ? (c >= '(' && c <= ')')
        : c <= ',')))
    : (c <= '=' || (c < ']'
      ? (c < '['
        ? c == 'T'
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
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

static inline bool sym__interpreted_double_string_basic_content_character_set_4(int32_t c) {
  return (c < '='
    ? (c < '('
      ? (c < '\r'
        ? c == '\t'
        : (c <= '\r' || c == ' '))
      : (c <= ')' || (c < '/'
        ? (c >= ',' && c <= '-')
        : c <= '/')))
    : (c <= '=' || (c < ']'
      ? (c < '['
        ? c == 'T'
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
      ? (c < 'T'
        ? c == '='
        : (c <= 'T' || c == '['))
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym__interpreted_double_string_basic_content_character_set_6(int32_t c) {
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
      ? (c < 'T'
        ? c == '='
        : (c <= 'T' || c == '['))
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
      ? (c < 'T'
        ? c == '='
        : (c <= 'T' || c == '['))
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
    : (c <= '/' || (c < '['
      ? (c < '='
        ? c == ':'
        : (c <= '=' || c == 'T'))
      : (c <= '[' || (c < '{'
        ? c == ']'
        : (c <= '{' || c == '}'))))));
}

static inline bool sym_word_character_set_4(int32_t c) {
  return (c < '/'
    ? (c < ' '
      ? (c < '\t'
        ? c == 0
        : (c <= '\n' || c == '\r'))
      : (c <= ' ' || (c < '('
        ? c == '"'
        : (c <= ')' || (c >= ',' && c <= '-')))))
    : (c <= ':' || (c < ']'
      ? (c < 'T'
        ? c == '='
        : (c <= 'T' || c == '['))
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
      ? (c < 'T'
        ? c == '='
        : (c <= 'T' || c == '['))
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
    : (c <= ',' || (c < ']'
      ? (c < '['
        ? c == '='
        : c <= '[')
      : (c <= ']' || (c < '}'
        ? c == '{'
        : c <= '}')))));
}

static inline bool sym_word_character_set_7(int32_t c) {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(154);
      if (lookahead == '\n') SKIP(152)
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '\'') ADVANCE(433);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == ')') ADVANCE(426);
      if (lookahead == ',') ADVANCE(426);
      if (lookahead == '-') ADVANCE(426);
      if (lookahead == '/') ADVANCE(426);
      if (lookahead == '0') ADVANCE(214);
      if (lookahead == '1') ADVANCE(219);
      if (lookahead == '2') ADVANCE(217);
      if (lookahead == '3') ADVANCE(216);
      if (lookahead == ':') ADVANCE(426);
      if (lookahead == '=') ADVANCE(426);
      if (lookahead == 'A') ADVANCE(305);
      if (lookahead == 'C') ADVANCE(322);
      if (lookahead == 'D') ADVANCE(286);
      if (lookahead == 'E') ADVANCE(309);
      if (lookahead == 'F') ADVANCE(276);
      if (lookahead == 'I') ADVANCE(310);
      if (lookahead == 'T') ADVANCE(323);
      if (lookahead == 'W') ADVANCE(278);
      if (lookahead == '[') ADVANCE(426);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead == ']') ADVANCE(426);
      if (lookahead == '`') ADVANCE(367);
      if (lookahead == 'd') ADVANCE(345);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'f') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(391);
      if (lookahead == 't') ADVANCE(401);
      if (lookahead == 'v') ADVANCE(383);
      if (lookahead == 'w') ADVANCE(373);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '}') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(366);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (lookahead != 0) ADVANCE(426);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(426);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(434);
      if (lookahead == '\\') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(435);
      END_STATE();
    case 3:
      if (lookahead == '0') ADVANCE(450);
      if (lookahead == '1') ADVANCE(446);
      if (lookahead == ':') ADVANCE(141);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(180);
      if (lookahead == '3') ADVANCE(181);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(182);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(451);
      if (lookahead == '1') ADVANCE(447);
      if (lookahead == ':') ADVANCE(141);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(452);
      if (lookahead == '1') ADVANCE(448);
      if (lookahead == ':') ADVANCE(141);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(453);
      if (lookahead == '3') ADVANCE(445);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(455);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 8:
      if (lookahead == '2') ADVANCE(135);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(139);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(449);
      if (lookahead == ':') ADVANCE(141);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(458);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 10:
      if (lookahead == '6') ADVANCE(442);
      if (lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(456);
      if (('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(136);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(454);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 13:
      if (lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(457);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 14:
      if (lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 17:
      if (lookahead == 'A') ADVANCE(36);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == 'a') ADVANCE(63);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 18:
      if (lookahead == 'A') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'A') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 20:
      if (lookahead == 'A') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'B') ADVANCE(58);
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(59);
      END_STATE();
    case 23:
      if (lookahead == 'C') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'C') ADVANCE(20);
      END_STATE();
    case 25:
      if (lookahead == 'E') ADVANCE(21);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(61);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 26:
      if (lookahead == 'E') ADVANCE(174);
      END_STATE();
    case 27:
      if (lookahead == 'E') ADVANCE(156);
      END_STATE();
    case 28:
      if (lookahead == 'E') ADVANCE(52);
      END_STATE();
    case 29:
      if (lookahead == 'E') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 31:
      if (lookahead == 'F') ADVANCE(46);
      END_STATE();
    case 32:
      if (lookahead == 'G') ADVANCE(161);
      END_STATE();
    case 33:
      if (lookahead == 'G') ADVANCE(167);
      END_STATE();
    case 34:
      if (lookahead == 'G') ADVANCE(29);
      END_STATE();
    case 35:
      if (lookahead == 'I') ADVANCE(56);
      END_STATE();
    case 36:
      if (lookahead == 'I') ADVANCE(39);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 37:
      if (lookahead == 'I') ADVANCE(24);
      END_STATE();
    case 38:
      if (lookahead == 'L') ADVANCE(28);
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 39:
      if (lookahead == 'L') ADVANCE(175);
      END_STATE();
    case 40:
      if (lookahead == 'L') ADVANCE(174);
      END_STATE();
    case 41:
      if (lookahead == 'M') ADVANCE(30);
      if (lookahead == 'R') ADVANCE(49);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(126);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 42:
      if (lookahead == 'N') ADVANCE(31);
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 43:
      if (lookahead == 'N') ADVANCE(168);
      END_STATE();
    case 44:
      if (lookahead == 'N') ADVANCE(22);
      END_STATE();
    case 45:
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 46:
      if (lookahead == 'O') ADVANCE(164);
      END_STATE();
    case 47:
      if (lookahead == 'O') ADVANCE(51);
      END_STATE();
    case 48:
      if (lookahead == 'R') ADVANCE(35);
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 49:
      if (lookahead == 'R') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 'R') ADVANCE(43);
      END_STATE();
    case 51:
      if (lookahead == 'R') ADVANCE(174);
      END_STATE();
    case 52:
      if (lookahead == 'R') ADVANCE(55);
      END_STATE();
    case 53:
      if (lookahead == 'R') ADVANCE(34);
      END_STATE();
    case 54:
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 55:
      if (lookahead == 'T') ADVANCE(174);
      END_STATE();
    case 56:
      if (lookahead == 'T') ADVANCE(37);
      END_STATE();
    case 57:
      if (lookahead == 'U') ADVANCE(150);
      if (lookahead == 'u') ADVANCE(145);
      if (lookahead == 'x') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(430);
      if (lookahead != 0) ADVANCE(427);
      END_STATE();
    case 58:
      if (lookahead == 'U') ADVANCE(32);
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 59:
      if (lookahead == 'Y') ADVANCE(174);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == 'a') ADVANCE(64);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(66);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == 'e') ADVANCE(61);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 63:
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(131);
      if (lookahead == 't') ADVANCE(107);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 64:
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == 'l') ADVANCE(133);
      if (lookahead == 't') ADVANCE(107);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == 'r') ADVANCE(126);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == 'u') ADVANCE(118);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 67:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(561);
      END_STATE();
    case 68:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(559);
      END_STATE();
    case 69:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(557);
      END_STATE();
    case 70:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(555);
      END_STATE();
    case 71:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 72:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 73:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 74:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 75:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 76:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 77:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 78:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 79:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 80:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 81:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 82:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 83:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 84:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 85:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 86:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 87:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 88:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 89:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 90:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 91:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 92:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 93:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 94:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 95:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 96:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 97:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 98:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 99:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 100:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 101:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 102:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 103:
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 104:
      if (lookahead == '`') ADVANCE(198);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(111);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(112);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(120);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(129);
      END_STATE();
    case 109:
      if (lookahead == 'b') ADVANCE(157);
      END_STATE();
    case 110:
      if (lookahead == 'c') ADVANCE(114);
      END_STATE();
    case 111:
      if (lookahead == 'e') ADVANCE(193);
      END_STATE();
    case 112:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 113:
      if (lookahead == 'e') ADVANCE(196);
      END_STATE();
    case 114:
      if (lookahead == 'e') ADVANCE(156);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(194);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 117:
      if (lookahead == 'f') ADVANCE(124);
      END_STATE();
    case 118:
      if (lookahead == 'g') ADVANCE(161);
      END_STATE();
    case 119:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 120:
      if (lookahead == 'l') ADVANCE(174);
      END_STATE();
    case 121:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 122:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 123:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(164);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(128);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(125);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 131:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(114);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(115);
      END_STATE();
    case 134:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(185);
      END_STATE();
    case 135:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(11);
      END_STATE();
    case 136:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(137);
      END_STATE();
    case 137:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(185);
      END_STATE();
    case 138:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 139:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 140:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(427);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(562);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(140);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(144);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(145);
      END_STATE();
    case 147:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(146);
      END_STATE();
    case 148:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 149:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(147);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(149);
      END_STATE();
    case 151:
      if (eof) ADVANCE(154);
      if (lookahead == '\n') SKIP(153)
      if (lookahead == '"') ADVANCE(201);
      if (lookahead == '\'') ADVANCE(433);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == ')') ADVANCE(426);
      if (lookahead == ',') ADVANCE(426);
      if (lookahead == '-') ADVANCE(426);
      if (lookahead == '/') ADVANCE(426);
      if (lookahead == '0') ADVANCE(209);
      if (lookahead == '1') ADVANCE(213);
      if (lookahead == '2') ADVANCE(211);
      if (lookahead == '3') ADVANCE(210);
      if (lookahead == ':') ADVANCE(426);
      if (lookahead == '=') ADVANCE(426);
      if (lookahead == 'A') ADVANCE(230);
      if (lookahead == 'C') ADVANCE(232);
      if (lookahead == 'D') ADVANCE(228);
      if (lookahead == 'E') ADVANCE(231);
      if (lookahead == 'F') ADVANCE(226);
      if (lookahead == 'I') ADVANCE(313);
      if (lookahead == 'T') ADVANCE(323);
      if (lookahead == 'W') ADVANCE(280);
      if (lookahead == '[') ADVANCE(426);
      if (lookahead == '\\') ADVANCE(657);
      if (lookahead == ']') ADVANCE(426);
      if (lookahead == '`') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(236);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead == 't') ADVANCE(405);
      if (lookahead == 'v') ADVANCE(384);
      if (lookahead == 'w') ADVANCE(374);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '}') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(243);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (lookahead != 0) ADVANCE(423);
      END_STATE();
    case 152:
      if (eof) ADVANCE(154);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '\'') ADVANCE(433);
      if (lookahead == '(') ADVANCE(564);
      if (lookahead == ')') ADVANCE(565);
      if (lookahead == ',') ADVANCE(572);
      if (lookahead == '-') ADVANCE(575);
      if (lookahead == '/') ADVANCE(574);
      if (lookahead == '0') ADVANCE(505);
      if (lookahead == '1') ADVANCE(509);
      if (lookahead == '2') ADVANCE(508);
      if (lookahead == '3') ADVANCE(507);
      if (lookahead == ':') ADVANCE(573);
      if (lookahead == '=') ADVANCE(571);
      if (lookahead == 'A') ADVANCE(38);
      if (lookahead == 'C') ADVANCE(48);
      if (lookahead == 'D') ADVANCE(25);
      if (lookahead == 'E') ADVANCE(41);
      if (lookahead == 'F') ADVANCE(17);
      if (lookahead == 'I') ADVANCE(42);
      if (lookahead == 'T') ADVANCE(566);
      if (lookahead == 'W') ADVANCE(19);
      if (lookahead == '[') ADVANCE(567);
      if (lookahead == ']') ADVANCE(568);
      if (lookahead == '`') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(62);
      if (lookahead == 'e') ADVANCE(65);
      if (lookahead == 'f') ADVANCE(60);
      if (lookahead == 'i') ADVANCE(121);
      if (lookahead == 't') ADVANCE(130);
      if (lookahead == 'v') ADVANCE(116);
      if (lookahead == 'w') ADVANCE(108);
      if (lookahead == '{') ADVANCE(569);
      if (lookahead == '}') ADVANCE(570);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(84);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(152)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(525);
      END_STATE();
    case 153:
      if (eof) ADVANCE(154);
      if (lookahead == '"') ADVANCE(200);
      if (lookahead == '\'') ADVANCE(433);
      if (lookahead == '(') ADVANCE(564);
      if (lookahead == ')') ADVANCE(565);
      if (lookahead == ',') ADVANCE(572);
      if (lookahead == '-') ADVANCE(575);
      if (lookahead == '/') ADVANCE(574);
      if (lookahead == '0') ADVANCE(461);
      if (lookahead == '1') ADVANCE(464);
      if (lookahead == '2') ADVANCE(463);
      if (lookahead == '3') ADVANCE(462);
      if (lookahead == ':') ADVANCE(573);
      if (lookahead == '=') ADVANCE(571);
      if (lookahead == 'A') ADVANCE(580);
      if (lookahead == 'C') ADVANCE(582);
      if (lookahead == 'D') ADVANCE(578);
      if (lookahead == 'E') ADVANCE(581);
      if (lookahead == 'F') ADVANCE(576);
      if (lookahead == 'I') ADVANCE(643);
      if (lookahead == 'T') ADVANCE(566);
      if (lookahead == 'W') ADVANCE(631);
      if (lookahead == '[') ADVANCE(567);
      if (lookahead == ']') ADVANCE(568);
      if (lookahead == '`') ADVANCE(659);
      if (lookahead == 'd') ADVANCE(586);
      if (lookahead == 'e') ADVANCE(589);
      if (lookahead == 'f') ADVANCE(584);
      if (lookahead == 'i') ADVANCE(674);
      if (lookahead == 't') ADVANCE(679);
      if (lookahead == 'v') ADVANCE(669);
      if (lookahead == 'w') ADVANCE(662);
      if (lookahead == '{') ADVANCE(569);
      if (lookahead == '}') ADVANCE(570);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(608);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(153)
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(480);
      if (lookahead != 0) ADVANCE(698);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_trace);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_trace);
      if (lookahead == ':') ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_trace);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_trace);
      if (lookahead == ':') ADVANCE(155);
      if (lookahead == 'o') ADVANCE(686);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(698);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_trace);
      if (lookahead == ':') ADVANCE(155);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(698);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_debug);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_debug);
      if (lookahead == ':') ADVANCE(160);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_debug);
      if (lookahead == ':') ADVANCE(160);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(698);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_info);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_info);
      if (lookahead == ':') ADVANCE(163);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_info);
      if (lookahead == ':') ADVANCE(163);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(698);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_warn);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_warn);
      if (lookahead == ':') ADVANCE(166);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_warn);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == 'I') ADVANCE(45);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_warn);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == 'I') ADVANCE(646);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(698);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_warn);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_warn);
      if (lookahead == ':') ADVANCE(166);
      if (lookahead == 'i') ADVANCE(676);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(698);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_warn);
      if (lookahead == ':') ADVANCE(166);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(698);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_error);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == ':') ADVANCE(173);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == 'U') ADVANCE(54);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == ':') ADVANCE(173);
      if (lookahead == 'U') ADVANCE(654);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(698);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_error);
      if (lookahead == ':') ADVANCE(173);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(698);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_year_month_day);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(687);
      if (lookahead == 't') ADVANCE(184);
      if (lookahead == ' ' ||
          lookahead == 'T') ADVANCE(178);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(440);
      if (!sym_word_character_set_2(lookahead)) ADVANCE(698);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '0') ADVANCE(182);
      if (lookahead == '_') ADVANCE(141);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '_') ADVANCE(141);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(182);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '_') ADVANCE(141);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(182);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_year_month_day);
      if (lookahead == '_') ADVANCE(141);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(178);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_year_month_day);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__time_with_offset);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__time_with_offset);
      if (lookahead == '_') ADVANCE(141);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(10);
      if (lookahead == '_') ADVANCE(141);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '_') ADVANCE(141);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '_') ADVANCE(141);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(185);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(189);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__time_without_offset);
      if (lookahead == ' ') ADVANCE(134);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(8);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_true);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(anon_sym_false);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(anon_sym_False);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym__raw_string_literal);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym__raw_string_literal);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ' ') ADVANCE(415);
      if (lookahead == '+') ADVANCE(253);
      if (lookahead == ',') ADVANCE(419);
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == '/') ADVANCE(272);
      if (lookahead == ':') ADVANCE(255);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ' ') ADVANCE(415);
      if (lookahead == '+') ADVANCE(253);
      if (lookahead == ',') ADVANCE(419);
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '.') ADVANCE(268);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(272);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ' ') ADVANCE(415);
      if (lookahead == '+') ADVANCE(253);
      if (lookahead == '-') ADVANCE(254);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(426);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ' ') ADVANCE(415);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(253);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '\'') ADVANCE(433);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == ')') ADVANCE(426);
      if (lookahead == ',') ADVANCE(426);
      if (lookahead == '-') ADVANCE(426);
      if (lookahead == '/') ADVANCE(426);
      if (lookahead == '0') ADVANCE(214);
      if (lookahead == '1') ADVANCE(219);
      if (lookahead == '2') ADVANCE(217);
      if (lookahead == '3') ADVANCE(216);
      if (lookahead == ':') ADVANCE(426);
      if (lookahead == '=') ADVANCE(426);
      if (lookahead == 'A') ADVANCE(305);
      if (lookahead == 'C') ADVANCE(322);
      if (lookahead == 'D') ADVANCE(286);
      if (lookahead == 'E') ADVANCE(309);
      if (lookahead == 'F') ADVANCE(276);
      if (lookahead == 'I') ADVANCE(310);
      if (lookahead == 'T') ADVANCE(323);
      if (lookahead == 'W') ADVANCE(278);
      if (lookahead == '[') ADVANCE(426);
      if (lookahead == ']') ADVANCE(426);
      if (lookahead == '`') ADVANCE(367);
      if (lookahead == 'd') ADVANCE(345);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead == 'f') ADVANCE(343);
      if (lookahead == 'i') ADVANCE(391);
      if (lookahead == 't') ADVANCE(401);
      if (lookahead == 'v') ADVANCE(383);
      if (lookahead == 'w') ADVANCE(373);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '}') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(206);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(366);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '\'') ADVANCE(433);
      if (lookahead == '(') ADVANCE(426);
      if (lookahead == ')') ADVANCE(426);
      if (lookahead == ',') ADVANCE(426);
      if (lookahead == '-') ADVANCE(426);
      if (lookahead == '/') ADVANCE(426);
      if (lookahead == '0') ADVANCE(209);
      if (lookahead == '1') ADVANCE(213);
      if (lookahead == '2') ADVANCE(211);
      if (lookahead == '3') ADVANCE(210);
      if (lookahead == ':') ADVANCE(426);
      if (lookahead == '=') ADVANCE(426);
      if (lookahead == 'A') ADVANCE(230);
      if (lookahead == 'C') ADVANCE(232);
      if (lookahead == 'D') ADVANCE(228);
      if (lookahead == 'E') ADVANCE(231);
      if (lookahead == 'F') ADVANCE(226);
      if (lookahead == 'I') ADVANCE(313);
      if (lookahead == 'T') ADVANCE(323);
      if (lookahead == 'W') ADVANCE(280);
      if (lookahead == '[') ADVANCE(426);
      if (lookahead == ']') ADVANCE(426);
      if (lookahead == '`') ADVANCE(368);
      if (lookahead == 'd') ADVANCE(236);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'f') ADVANCE(234);
      if (lookahead == 'i') ADVANCE(394);
      if (lookahead == 't') ADVANCE(405);
      if (lookahead == 'v') ADVANCE(384);
      if (lookahead == 'w') ADVANCE(374);
      if (lookahead == '{') ADVANCE(426);
      if (lookahead == '}') ADVANCE(426);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(207);
      if (lookahead == 'B' ||
          ('a' <= lookahead && lookahead <= 'c')) ADVANCE(243);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '/') ADVANCE(272);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '0') ADVANCE(208);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'x') ADVANCE(422);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(272);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(272);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(222);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(223);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(222);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(223);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '0') ADVANCE(215);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == 'x') ADVANCE(425);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(272);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(224);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(272);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(225);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(224);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(245);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(252);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(246);
      if (lookahead == ':') ADVANCE(272);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == ':') ADVANCE(272);
      if (lookahead == '_') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == '.') ADVANCE(249);
      if (lookahead == '/') ADVANCE(251);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_') ADVANCE(421);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(212);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == ':') ADVANCE(272);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '-') ADVANCE(250);
      if (lookahead == ':') ADVANCE(266);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(251);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == 'A') ADVANCE(229);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'a') ADVANCE(237);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == 'B') ADVANCE(233);
      if (lookahead == '_') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == 'E') ADVANCE(227);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'e') ADVANCE(235);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == 'I') ADVANCE(308);
      if (lookahead == 'T') ADVANCE(279);
      if (lookahead == '_') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (sym__interpreted_double_string_basic_content_character_set_2(lookahead)) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == 'L') ADVANCE(291);
      if (lookahead == '_') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == 'M') ADVANCE(294);
      if (lookahead == 'R') ADVANCE(327);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'r') ADVANCE(406);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == 'R') ADVANCE(303);
      if (lookahead == '_') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == 'U') ADVANCE(298);
      if (lookahead == '_') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'a') ADVANCE(237);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'b') ADVANCE(240);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'e') ADVANCE(235);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'l') ADVANCE(412);
      if (lookahead == 't') ADVANCE(372);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'r') ADVANCE(406);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 't') ADVANCE(423);
      if (lookahead == ' ' ||
          lookahead == 'T') ADVANCE(426);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (sym__interpreted_double_string_basic_content_character_set_3(lookahead)) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '_') ADVANCE(421);
      if (lookahead == 'u') ADVANCE(388);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '_') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(244);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '_') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(244);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(271);
      if (lookahead == '_') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '.') ADVANCE(270);
      if (lookahead == ':') ADVANCE(272);
      if (lookahead == '_') ADVANCE(421);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(269);
      if (sym__interpreted_double_string_basic_content_character_set_1(lookahead)) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(357);
      if (lookahead == '1') ADVANCE(353);
      if (lookahead == ':') ADVANCE(424);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(247);
      if (lookahead == '3') ADVANCE(350);
      if (lookahead == ':') ADVANCE(424);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(351);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(351);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(426);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(203);
      if (lookahead == '_') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(242);
      if (lookahead == '1') ADVANCE(241);
      if (lookahead == ':') ADVANCE(424);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(426);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(358);
      if (lookahead == '1') ADVANCE(354);
      if (lookahead == ':') ADVANCE(424);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(359);
      if (lookahead == '1') ADVANCE(355);
      if (lookahead == ':') ADVANCE(424);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '0') ADVANCE(360);
      if (lookahead == '3') ADVANCE(349);
      if (lookahead == ':') ADVANCE(424);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(363);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '2') ADVANCE(416);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '2') ADVANCE(356);
      if (lookahead == ':') ADVANCE(424);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(365);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '6') ADVANCE(248);
      if (lookahead == ':') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(364);
      if (('7' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(426);
      if (lookahead == 'I') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(426);
      if (lookahead == 'I') ADVANCE(314);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(426);
      if (lookahead == 'U') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(426);
      if (lookahead == 'U') ADVANCE(335);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(426);
      if (lookahead == 'i') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(426);
      if (lookahead == 'i') ADVANCE(395);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(426);
      if (lookahead == 'o') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(426);
      if (lookahead == 'o') ADVANCE(414);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(426);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(362);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(361);
      if (('6' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(424);
      if (sym__interpreted_double_string_basic_content_character_set_4(lookahead)) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(272);
      if (lookahead == '_') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(269);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == ':') ADVANCE(267);
      if (lookahead == '_') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'A') ADVANCE(302);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == 'a') ADVANCE(346);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'A') ADVANCE(284);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'A') ADVANCE(325);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'A') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'A') ADVANCE(328);
      if (lookahead == 'a') ADVANCE(410);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'B') ADVANCE(340);
      if (lookahead == '_') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'C') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'C') ADVANCE(342);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'C') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'C') ADVANCE(279);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(281);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == 'e') ADVANCE(344);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(264);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(333);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(316);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'E') ADVANCE(334);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'F') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'F') ADVANCE(319);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'G') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'G') ADVANCE(264);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'G') ADVANCE(292);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'G') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(306);
      if (lookahead == 'T') ADVANCE(279);
      if (lookahead == '_') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(338);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'I') ADVANCE(285);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'L') ADVANCE(289);
      if (lookahead == '_') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'L') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'L') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'L') ADVANCE(259);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'M') ADVANCE(293);
      if (lookahead == 'R') ADVANCE(324);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == 'r') ADVANCE(402);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(295);
      if (lookahead == 'n') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(256);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(296);
      if (lookahead == 'n') ADVANCE(386);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(298);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(257);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(283);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'N') ADVANCE(282);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'O') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'O') ADVANCE(264);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'O') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'O') ADVANCE(329);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(301);
      if (lookahead == '_') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(321);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(315);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(264);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(287);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(336);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(299);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'R') ADVANCE(288);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'T') ADVANCE(265);
      if (sym__interpreted_double_string_basic_content_character_set_6(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'T') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'T') ADVANCE(304);
      if (sym__interpreted_double_string_basic_content_character_set_6(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'T') ADVANCE(304);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'U') ADVANCE(297);
      if (lookahead == '_') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'Y') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'Y') ADVANCE(264);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == 'a') ADVANCE(346);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == 'b') ADVANCE(348);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == 'e') ADVANCE(344);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == 'l') ADVANCE(411);
      if (lookahead == 't') ADVANCE(370);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == 'r') ADVANCE(402);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == 'u') ADVANCE(387);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(352);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(351);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(426);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(426);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(351);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(426);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(220);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(221);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(273);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(275);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(220);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(221);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(273);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(366);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(352);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '_') ADVANCE(424);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(272);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '`') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '`') ADVANCE(423);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(377);
      if (lookahead == 'u') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(378);
      if (lookahead == 'u') ADVANCE(381);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(390);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'a') ADVANCE(410);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'b') ADVANCE(262);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'b') ADVANCE(263);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'c') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'c') ADVANCE(382);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'e') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'e') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'e') ADVANCE(423);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'e') ADVANCE(264);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'e') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'e') ADVANCE(407);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'f') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'f') ADVANCE(398);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'g') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'g') ADVANCE(264);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'l') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'l') ADVANCE(264);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(260);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(386);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(388);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'n') ADVANCE(261);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'o') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'o') ADVANCE(264);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'o') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'o') ADVANCE(408);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(265);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(371);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(400);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(376);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(264);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 'r') ADVANCE(396);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 's') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 's') ADVANCE(381);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 's') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == 's') ADVANCE(382);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(253);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(205);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(243);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (sym__interpreted_double_string_basic_content_character_set_5(lookahead)) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(423);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym__interpreted_double_string_basic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(426);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(698);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(428);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(429);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(698);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym__escape_sequence);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym__interpreted_single_string_basic_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '-') ADVANCE(7);
      if (lookahead == '_') ADVANCE(141);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '-') ADVANCE(4);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '_') ADVANCE(141);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(687);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(441);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(440);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(687);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(441);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(440);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(687);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(440);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '.') ADVANCE(629);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '_') ADVANCE(687);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(440);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '0') ADVANCE(188);
      if (lookahead == '_') ADVANCE(141);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '_') ADVANCE(141);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == ':') ADVANCE(13);
      if (lookahead == '_') ADVANCE(141);
      if (('-' <= lookahead && lookahead <= '/')) ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(141);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(183);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(436);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(437);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(443);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(141);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(444);
      if (('4' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(141);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(436);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(141);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(437);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(141);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(141);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (lookahead == '0' ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(141);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(187);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(141);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(183);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(141);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(188);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(141);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(186);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(141);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(444);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (lookahead == '_') ADVANCE(141);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(459);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '_') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(602);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '0') ADVANCE(460);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == 'x') ADVANCE(688);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(551);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(605);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(550);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(477);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(605);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(551);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(550);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(605);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(605);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(466);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(595);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(474);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(591);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(468);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(596);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(483);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(592);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(470);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(597);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(489);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(593);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(472);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(598);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(503);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(594);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(465);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(599);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(467);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(469);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(600);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(471);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(601);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(602);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(475);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(603);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(476);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(604);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(477);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(605);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(478);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(606);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(479);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(607);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(502);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(558);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(481);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(609);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(482);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(610);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(484);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(612);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(485);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(613);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(486);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(614);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(487);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(556);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(488);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(615);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(490);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(616);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(491);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(617);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(492);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(618);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(493);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(619);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(494);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(620);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(495);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(621);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(496);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(622);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(497);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(623);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(498);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(624);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(499);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(500);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(626);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(501);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(627);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(554);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(504);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(611);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '0') ADVANCE(506);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == 'x') ADVANCE(142);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(553);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(552);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('2' <= lookahead && lookahead <= '9')) ADVANCE(522);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(553);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(552);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(553);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(511);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(519);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(513);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(528);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(515);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(534);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(517);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(548);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(510);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(512);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(561);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(514);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(76);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(516);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(520);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(79);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(521);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(522);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(523);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(524);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(547);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(559);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(526);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(527);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(529);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(530);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(531);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(532);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(557);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(533);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(535);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(536);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(537);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(538);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(95);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(539);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(540);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(541);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(98);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(542);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(543);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(544);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(545);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(546);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(549);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(555);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/' ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(549);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '_') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(602);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == '.') ADVANCE(628);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '_') ADVANCE(695);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(473);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(602);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_number_token2);
      if (lookahead == '-') ADVANCE(5);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == '.' ||
          lookahead == '/') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(518);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(611);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_number_token3);
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(613);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_number_token4);
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(627);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_number_token5);
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(596);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_number_token6);
      if (lookahead == '_') ADVANCE(148);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(562);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_number_token7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(563);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(698);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(anon_sym_T);
      if (lookahead == 'R') ADVANCE(18);
      if (lookahead == 'r') ADVANCE(105);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == 'A') ADVANCE(579);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == 'a') ADVANCE(587);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(605);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == 'B') ADVANCE(583);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(602);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == 'E') ADVANCE(577);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == 'e') ADVANCE(585);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(605);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == 'I') ADVANCE(642);
      if (lookahead == 'T') ADVANCE(20);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(602);
      if (!sym_word_character_set_6(lookahead)) ADVANCE(698);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == 'L') ADVANCE(634);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(605);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == 'M') ADVANCE(636);
      if (lookahead == 'R') ADVANCE(649);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == 'r') ADVANCE(680);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(605);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == 'R') ADVANCE(641);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(605);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == 'U') ADVANCE(638);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(599);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == 'a') ADVANCE(588);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(605);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == 'b') ADVANCE(590);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(602);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == 'e') ADVANCE(585);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(605);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == 'l') ADVANCE(684);
      if (lookahead == 't') ADVANCE(661);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(602);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == 'l') ADVANCE(685);
      if (lookahead == 't') ADVANCE(661);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(602);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == 'r') ADVANCE(680);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(605);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (lookahead == 'u') ADVANCE(671);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(599);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(560);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(558);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(556);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(554);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(591);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(592);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(593);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(594);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(595);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(597);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(598);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(599);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(600);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(601);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(602);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(603);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(604);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(605);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(606);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(607);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(611);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(609);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(610);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(612);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(614);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(615);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(616);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(617);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(618);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(619);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(620);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(621);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(622);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(623);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(624);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(625);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '.') ADVANCE(630);
      if (lookahead == '_') ADVANCE(695);
      if (('-' <= lookahead && lookahead <= '/') ||
          lookahead == ':') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(626);
      if (!sym_word_character_set_5(lookahead)) ADVANCE(698);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '0') ADVANCE(439);
      if (lookahead == '1') ADVANCE(438);
      if (lookahead == ':') ADVANCE(141);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(440);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(698);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(179);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(440);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(698);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ':') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(440);
      if (!sym_word_character_set_1(lookahead)) ADVANCE(698);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'A') ADVANCE(650);
      if (lookahead == 'a') ADVANCE(683);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'C') ADVANCE(658);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(177);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(652);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(645);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'E') ADVANCE(653);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'F') ADVANCE(647);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(162);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(172);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'G') ADVANCE(635);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'I') ADVANCE(656);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'L') ADVANCE(176);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(637);
      if (lookahead == 'n') ADVANCE(670);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(169);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(632);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'N') ADVANCE(639);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(165);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'O') ADVANCE(651);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(648);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(644);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(177);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(655);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(640);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'R') ADVANCE(633);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(174);
      if (!sym_word_character_set_7(lookahead)) ADVANCE(698);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'T') ADVANCE(37);
      if (!sym_word_character_set_7(lookahead)) ADVANCE(698);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'U') ADVANCE(697);
      if (lookahead == 'u') ADVANCE(692);
      if (lookahead == 'x') ADVANCE(690);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (sym__escape_sequence_character_set_1(lookahead)) ADVANCE(427);
      if (lookahead != 0) ADVANCE(432);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'Y') ADVANCE(177);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '`') ADVANCE(199);
      if (sym__raw_string_literal_character_set_1(lookahead)) ADVANCE(104);
      if (lookahead != 0) ADVANCE(659);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(664);
      if (lookahead == 'u') ADVANCE(665);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(673);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(683);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'b') ADVANCE(158);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'c') ADVANCE(668);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(192);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(197);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(195);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(159);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(681);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'f') ADVANCE(677);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(162);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'g') ADVANCE(172);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(177);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(670);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(171);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'n') ADVANCE(672);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(165);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'o') ADVANCE(682);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(660);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(678);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(663);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(177);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(675);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(666);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(667);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(668);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(440);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(698);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(563);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(698);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(432);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(698);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(689);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(698);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(690);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(698);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(691);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(698);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(692);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(698);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(693);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(698);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(611);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(698);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(694);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(698);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(696);
      if (!sym_word_character_set_4(lookahead)) ADVANCE(698);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(sym_word);
      if (!sym_word_character_set_3(lookahead)) ADVANCE(698);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 153},
  [2] = {.lex_state = 153},
  [3] = {.lex_state = 153},
  [4] = {.lex_state = 151},
  [5] = {.lex_state = 153},
  [6] = {.lex_state = 153},
  [7] = {.lex_state = 153},
  [8] = {.lex_state = 153},
  [9] = {.lex_state = 153},
  [10] = {.lex_state = 153},
  [11] = {.lex_state = 153},
  [12] = {.lex_state = 153},
  [13] = {.lex_state = 153},
  [14] = {.lex_state = 153},
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
    [anon_sym_T] = ACTIONS(1),
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
    [anon_sym_True] = ACTIONS(13),
    [anon_sym_false] = ACTIONS(11),
    [anon_sym_False] = ACTIONS(11),
    [sym__raw_string_literal] = ACTIONS(15),
    [anon_sym_DQUOTE] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_number_token1] = ACTIONS(21),
    [aux_sym_number_token2] = ACTIONS(21),
    [aux_sym_number_token3] = ACTIONS(21),
    [aux_sym_number_token4] = ACTIONS(21),
    [aux_sym_number_token5] = ACTIONS(21),
    [aux_sym_number_token6] = ACTIONS(21),
    [aux_sym_number_token7] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(23),
    [anon_sym_RPAREN] = ACTIONS(23),
    [anon_sym_T] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(23),
    [anon_sym_RBRACK] = ACTIONS(23),
    [anon_sym_LBRACE] = ACTIONS(23),
    [anon_sym_RBRACE] = ACTIONS(23),
    [anon_sym_EQ] = ACTIONS(23),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_COLON] = ACTIONS(23),
    [anon_sym_SLASH] = ACTIONS(23),
    [anon_sym_DASH] = ACTIONS(23),
    [sym_word] = ACTIONS(25),
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
    [ts_builtin_sym_end] = ACTIONS(27),
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
    [anon_sym_SQUOTE] = ACTIONS(19),
    [aux_sym_number_token1] = ACTIONS(21),
    [aux_sym_number_token2] = ACTIONS(21),
    [aux_sym_number_token3] = ACTIONS(21),
    [aux_sym_number_token4] = ACTIONS(21),
    [aux_sym_number_token5] = ACTIONS(21),
    [aux_sym_number_token6] = ACTIONS(21),
    [aux_sym_number_token7] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(29),
    [anon_sym_RPAREN] = ACTIONS(29),
    [anon_sym_T] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(29),
    [anon_sym_RBRACE] = ACTIONS(29),
    [anon_sym_EQ] = ACTIONS(29),
    [anon_sym_COMMA] = ACTIONS(29),
    [anon_sym_COLON] = ACTIONS(29),
    [anon_sym_SLASH] = ACTIONS(29),
    [anon_sym_DASH] = ACTIONS(29),
    [sym_word] = ACTIONS(31),
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
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_trace] = ACTIONS(35),
    [sym_debug] = ACTIONS(35),
    [sym_info] = ACTIONS(35),
    [sym_warn] = ACTIONS(35),
    [sym_error] = ACTIONS(35),
    [sym_year_month_day] = ACTIONS(38),
    [sym__time_with_offset] = ACTIONS(41),
    [sym__time_without_offset] = ACTIONS(41),
    [anon_sym_true] = ACTIONS(44),
    [anon_sym_True] = ACTIONS(47),
    [anon_sym_false] = ACTIONS(44),
    [anon_sym_False] = ACTIONS(44),
    [sym__raw_string_literal] = ACTIONS(50),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [aux_sym_number_token1] = ACTIONS(59),
    [aux_sym_number_token2] = ACTIONS(59),
    [aux_sym_number_token3] = ACTIONS(59),
    [aux_sym_number_token4] = ACTIONS(59),
    [aux_sym_number_token5] = ACTIONS(59),
    [aux_sym_number_token6] = ACTIONS(59),
    [aux_sym_number_token7] = ACTIONS(59),
    [anon_sym_LPAREN] = ACTIONS(62),
    [anon_sym_RPAREN] = ACTIONS(62),
    [anon_sym_T] = ACTIONS(65),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_RBRACK] = ACTIONS(62),
    [anon_sym_LBRACE] = ACTIONS(62),
    [anon_sym_RBRACE] = ACTIONS(62),
    [anon_sym_EQ] = ACTIONS(62),
    [anon_sym_COMMA] = ACTIONS(62),
    [anon_sym_COLON] = ACTIONS(62),
    [anon_sym_SLASH] = ACTIONS(62),
    [anon_sym_DASH] = ACTIONS(62),
    [sym_word] = ACTIONS(65),
  },
  [4] = {
    [aux_sym__interpreted_double_string_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(68),
    [sym_trace] = ACTIONS(70),
    [sym_debug] = ACTIONS(70),
    [sym_info] = ACTIONS(70),
    [sym_warn] = ACTIONS(70),
    [sym_error] = ACTIONS(70),
    [sym_year_month_day] = ACTIONS(70),
    [sym__time_with_offset] = ACTIONS(70),
    [sym__time_without_offset] = ACTIONS(70),
    [anon_sym_true] = ACTIONS(70),
    [anon_sym_True] = ACTIONS(70),
    [anon_sym_false] = ACTIONS(70),
    [anon_sym_False] = ACTIONS(70),
    [sym__raw_string_literal] = ACTIONS(70),
    [anon_sym_DQUOTE] = ACTIONS(70),
    [anon_sym_DQUOTE2] = ACTIONS(72),
    [sym__interpreted_double_string_basic_content] = ACTIONS(74),
    [sym__escape_sequence] = ACTIONS(74),
    [anon_sym_SQUOTE] = ACTIONS(70),
    [aux_sym_number_token1] = ACTIONS(70),
    [aux_sym_number_token2] = ACTIONS(70),
    [aux_sym_number_token3] = ACTIONS(70),
    [aux_sym_number_token4] = ACTIONS(70),
    [aux_sym_number_token5] = ACTIONS(70),
    [aux_sym_number_token6] = ACTIONS(70),
    [aux_sym_number_token7] = ACTIONS(70),
    [anon_sym_LPAREN] = ACTIONS(70),
    [anon_sym_RPAREN] = ACTIONS(70),
    [anon_sym_T] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(70),
    [anon_sym_RBRACK] = ACTIONS(70),
    [anon_sym_LBRACE] = ACTIONS(70),
    [anon_sym_RBRACE] = ACTIONS(70),
    [anon_sym_EQ] = ACTIONS(70),
    [anon_sym_COMMA] = ACTIONS(70),
    [anon_sym_COLON] = ACTIONS(70),
    [anon_sym_SLASH] = ACTIONS(70),
    [anon_sym_DASH] = ACTIONS(70),
    [sym_word] = ACTIONS(70),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(76),
    [sym_trace] = ACTIONS(78),
    [sym_debug] = ACTIONS(78),
    [sym_info] = ACTIONS(78),
    [sym_warn] = ACTIONS(78),
    [sym_error] = ACTIONS(78),
    [sym_year_month_day] = ACTIONS(78),
    [sym__time_with_offset] = ACTIONS(78),
    [sym__time_without_offset] = ACTIONS(78),
    [anon_sym_true] = ACTIONS(78),
    [anon_sym_True] = ACTIONS(76),
    [anon_sym_false] = ACTIONS(78),
    [anon_sym_False] = ACTIONS(78),
    [sym__raw_string_literal] = ACTIONS(78),
    [anon_sym_DQUOTE] = ACTIONS(76),
    [anon_sym_SQUOTE] = ACTIONS(76),
    [aux_sym_number_token1] = ACTIONS(78),
    [aux_sym_number_token2] = ACTIONS(78),
    [aux_sym_number_token3] = ACTIONS(78),
    [aux_sym_number_token4] = ACTIONS(78),
    [aux_sym_number_token5] = ACTIONS(78),
    [aux_sym_number_token6] = ACTIONS(78),
    [aux_sym_number_token7] = ACTIONS(78),
    [anon_sym_LPAREN] = ACTIONS(76),
    [anon_sym_RPAREN] = ACTIONS(76),
    [anon_sym_T] = ACTIONS(78),
    [anon_sym_LBRACK] = ACTIONS(76),
    [anon_sym_RBRACK] = ACTIONS(76),
    [anon_sym_LBRACE] = ACTIONS(76),
    [anon_sym_RBRACE] = ACTIONS(76),
    [anon_sym_EQ] = ACTIONS(76),
    [anon_sym_COMMA] = ACTIONS(76),
    [anon_sym_COLON] = ACTIONS(76),
    [anon_sym_SLASH] = ACTIONS(76),
    [anon_sym_DASH] = ACTIONS(76),
    [sym_word] = ACTIONS(78),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(80),
    [sym_trace] = ACTIONS(82),
    [sym_debug] = ACTIONS(82),
    [sym_info] = ACTIONS(82),
    [sym_warn] = ACTIONS(82),
    [sym_error] = ACTIONS(82),
    [sym_year_month_day] = ACTIONS(82),
    [sym__time_with_offset] = ACTIONS(82),
    [sym__time_without_offset] = ACTIONS(82),
    [anon_sym_true] = ACTIONS(82),
    [anon_sym_True] = ACTIONS(80),
    [anon_sym_false] = ACTIONS(82),
    [anon_sym_False] = ACTIONS(82),
    [sym__raw_string_literal] = ACTIONS(82),
    [anon_sym_DQUOTE] = ACTIONS(80),
    [anon_sym_SQUOTE] = ACTIONS(80),
    [aux_sym_number_token1] = ACTIONS(82),
    [aux_sym_number_token2] = ACTIONS(82),
    [aux_sym_number_token3] = ACTIONS(82),
    [aux_sym_number_token4] = ACTIONS(82),
    [aux_sym_number_token5] = ACTIONS(82),
    [aux_sym_number_token6] = ACTIONS(82),
    [aux_sym_number_token7] = ACTIONS(82),
    [anon_sym_LPAREN] = ACTIONS(80),
    [anon_sym_RPAREN] = ACTIONS(80),
    [anon_sym_T] = ACTIONS(82),
    [anon_sym_LBRACK] = ACTIONS(80),
    [anon_sym_RBRACK] = ACTIONS(80),
    [anon_sym_LBRACE] = ACTIONS(80),
    [anon_sym_RBRACE] = ACTIONS(80),
    [anon_sym_EQ] = ACTIONS(80),
    [anon_sym_COMMA] = ACTIONS(80),
    [anon_sym_COLON] = ACTIONS(80),
    [anon_sym_SLASH] = ACTIONS(80),
    [anon_sym_DASH] = ACTIONS(80),
    [sym_word] = ACTIONS(82),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(84),
    [sym_trace] = ACTIONS(86),
    [sym_debug] = ACTIONS(86),
    [sym_info] = ACTIONS(86),
    [sym_warn] = ACTIONS(86),
    [sym_error] = ACTIONS(86),
    [sym_year_month_day] = ACTIONS(86),
    [sym__time_with_offset] = ACTIONS(86),
    [sym__time_without_offset] = ACTIONS(86),
    [anon_sym_true] = ACTIONS(86),
    [anon_sym_True] = ACTIONS(84),
    [anon_sym_false] = ACTIONS(86),
    [anon_sym_False] = ACTIONS(86),
    [sym__raw_string_literal] = ACTIONS(86),
    [anon_sym_DQUOTE] = ACTIONS(84),
    [anon_sym_SQUOTE] = ACTIONS(84),
    [aux_sym_number_token1] = ACTIONS(86),
    [aux_sym_number_token2] = ACTIONS(86),
    [aux_sym_number_token3] = ACTIONS(86),
    [aux_sym_number_token4] = ACTIONS(86),
    [aux_sym_number_token5] = ACTIONS(86),
    [aux_sym_number_token6] = ACTIONS(86),
    [aux_sym_number_token7] = ACTIONS(86),
    [anon_sym_LPAREN] = ACTIONS(84),
    [anon_sym_RPAREN] = ACTIONS(84),
    [anon_sym_T] = ACTIONS(86),
    [anon_sym_LBRACK] = ACTIONS(84),
    [anon_sym_RBRACK] = ACTIONS(84),
    [anon_sym_LBRACE] = ACTIONS(84),
    [anon_sym_RBRACE] = ACTIONS(84),
    [anon_sym_EQ] = ACTIONS(84),
    [anon_sym_COMMA] = ACTIONS(84),
    [anon_sym_COLON] = ACTIONS(84),
    [anon_sym_SLASH] = ACTIONS(84),
    [anon_sym_DASH] = ACTIONS(84),
    [sym_word] = ACTIONS(86),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(88),
    [sym_trace] = ACTIONS(90),
    [sym_debug] = ACTIONS(90),
    [sym_info] = ACTIONS(90),
    [sym_warn] = ACTIONS(90),
    [sym_error] = ACTIONS(90),
    [sym_year_month_day] = ACTIONS(90),
    [sym__time_with_offset] = ACTIONS(90),
    [sym__time_without_offset] = ACTIONS(90),
    [anon_sym_true] = ACTIONS(90),
    [anon_sym_True] = ACTIONS(88),
    [anon_sym_false] = ACTIONS(90),
    [anon_sym_False] = ACTIONS(90),
    [sym__raw_string_literal] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(88),
    [anon_sym_SQUOTE] = ACTIONS(88),
    [aux_sym_number_token1] = ACTIONS(90),
    [aux_sym_number_token2] = ACTIONS(90),
    [aux_sym_number_token3] = ACTIONS(90),
    [aux_sym_number_token4] = ACTIONS(90),
    [aux_sym_number_token5] = ACTIONS(90),
    [aux_sym_number_token6] = ACTIONS(90),
    [aux_sym_number_token7] = ACTIONS(90),
    [anon_sym_LPAREN] = ACTIONS(88),
    [anon_sym_RPAREN] = ACTIONS(88),
    [anon_sym_T] = ACTIONS(90),
    [anon_sym_LBRACK] = ACTIONS(88),
    [anon_sym_RBRACK] = ACTIONS(88),
    [anon_sym_LBRACE] = ACTIONS(88),
    [anon_sym_RBRACE] = ACTIONS(88),
    [anon_sym_EQ] = ACTIONS(88),
    [anon_sym_COMMA] = ACTIONS(88),
    [anon_sym_COLON] = ACTIONS(88),
    [anon_sym_SLASH] = ACTIONS(88),
    [anon_sym_DASH] = ACTIONS(88),
    [sym_word] = ACTIONS(90),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym_trace] = ACTIONS(94),
    [sym_debug] = ACTIONS(94),
    [sym_info] = ACTIONS(94),
    [sym_warn] = ACTIONS(94),
    [sym_error] = ACTIONS(94),
    [sym_year_month_day] = ACTIONS(94),
    [sym__time_with_offset] = ACTIONS(94),
    [sym__time_without_offset] = ACTIONS(94),
    [anon_sym_true] = ACTIONS(94),
    [anon_sym_True] = ACTIONS(92),
    [anon_sym_false] = ACTIONS(94),
    [anon_sym_False] = ACTIONS(94),
    [sym__raw_string_literal] = ACTIONS(94),
    [anon_sym_DQUOTE] = ACTIONS(92),
    [anon_sym_SQUOTE] = ACTIONS(92),
    [aux_sym_number_token1] = ACTIONS(94),
    [aux_sym_number_token2] = ACTIONS(94),
    [aux_sym_number_token3] = ACTIONS(94),
    [aux_sym_number_token4] = ACTIONS(94),
    [aux_sym_number_token5] = ACTIONS(94),
    [aux_sym_number_token6] = ACTIONS(94),
    [aux_sym_number_token7] = ACTIONS(94),
    [anon_sym_LPAREN] = ACTIONS(92),
    [anon_sym_RPAREN] = ACTIONS(92),
    [anon_sym_T] = ACTIONS(94),
    [anon_sym_LBRACK] = ACTIONS(92),
    [anon_sym_RBRACK] = ACTIONS(92),
    [anon_sym_LBRACE] = ACTIONS(92),
    [anon_sym_RBRACE] = ACTIONS(92),
    [anon_sym_EQ] = ACTIONS(92),
    [anon_sym_COMMA] = ACTIONS(92),
    [anon_sym_COLON] = ACTIONS(92),
    [anon_sym_SLASH] = ACTIONS(92),
    [anon_sym_DASH] = ACTIONS(92),
    [sym_word] = ACTIONS(94),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(96),
    [sym_trace] = ACTIONS(98),
    [sym_debug] = ACTIONS(98),
    [sym_info] = ACTIONS(98),
    [sym_warn] = ACTIONS(98),
    [sym_error] = ACTIONS(98),
    [sym_year_month_day] = ACTIONS(98),
    [sym__time_with_offset] = ACTIONS(98),
    [sym__time_without_offset] = ACTIONS(98),
    [anon_sym_true] = ACTIONS(98),
    [anon_sym_True] = ACTIONS(96),
    [anon_sym_false] = ACTIONS(98),
    [anon_sym_False] = ACTIONS(98),
    [sym__raw_string_literal] = ACTIONS(98),
    [anon_sym_DQUOTE] = ACTIONS(96),
    [anon_sym_SQUOTE] = ACTIONS(96),
    [aux_sym_number_token1] = ACTIONS(98),
    [aux_sym_number_token2] = ACTIONS(98),
    [aux_sym_number_token3] = ACTIONS(98),
    [aux_sym_number_token4] = ACTIONS(98),
    [aux_sym_number_token5] = ACTIONS(98),
    [aux_sym_number_token6] = ACTIONS(98),
    [aux_sym_number_token7] = ACTIONS(98),
    [anon_sym_LPAREN] = ACTIONS(96),
    [anon_sym_RPAREN] = ACTIONS(96),
    [anon_sym_T] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(96),
    [anon_sym_RBRACK] = ACTIONS(96),
    [anon_sym_LBRACE] = ACTIONS(96),
    [anon_sym_RBRACE] = ACTIONS(96),
    [anon_sym_EQ] = ACTIONS(96),
    [anon_sym_COMMA] = ACTIONS(96),
    [anon_sym_COLON] = ACTIONS(96),
    [anon_sym_SLASH] = ACTIONS(96),
    [anon_sym_DASH] = ACTIONS(96),
    [sym_word] = ACTIONS(98),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [sym_trace] = ACTIONS(102),
    [sym_debug] = ACTIONS(102),
    [sym_info] = ACTIONS(102),
    [sym_warn] = ACTIONS(102),
    [sym_error] = ACTIONS(102),
    [sym_year_month_day] = ACTIONS(102),
    [sym__time_with_offset] = ACTIONS(102),
    [sym__time_without_offset] = ACTIONS(102),
    [anon_sym_true] = ACTIONS(102),
    [anon_sym_True] = ACTIONS(100),
    [anon_sym_false] = ACTIONS(102),
    [anon_sym_False] = ACTIONS(102),
    [sym__raw_string_literal] = ACTIONS(102),
    [anon_sym_DQUOTE] = ACTIONS(100),
    [anon_sym_SQUOTE] = ACTIONS(100),
    [aux_sym_number_token1] = ACTIONS(102),
    [aux_sym_number_token2] = ACTIONS(102),
    [aux_sym_number_token3] = ACTIONS(102),
    [aux_sym_number_token4] = ACTIONS(102),
    [aux_sym_number_token5] = ACTIONS(102),
    [aux_sym_number_token6] = ACTIONS(102),
    [aux_sym_number_token7] = ACTIONS(102),
    [anon_sym_LPAREN] = ACTIONS(100),
    [anon_sym_RPAREN] = ACTIONS(100),
    [anon_sym_T] = ACTIONS(102),
    [anon_sym_LBRACK] = ACTIONS(100),
    [anon_sym_RBRACK] = ACTIONS(100),
    [anon_sym_LBRACE] = ACTIONS(100),
    [anon_sym_RBRACE] = ACTIONS(100),
    [anon_sym_EQ] = ACTIONS(100),
    [anon_sym_COMMA] = ACTIONS(100),
    [anon_sym_COLON] = ACTIONS(100),
    [anon_sym_SLASH] = ACTIONS(100),
    [anon_sym_DASH] = ACTIONS(100),
    [sym_word] = ACTIONS(102),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(104),
    [sym_trace] = ACTIONS(106),
    [sym_debug] = ACTIONS(106),
    [sym_info] = ACTIONS(106),
    [sym_warn] = ACTIONS(106),
    [sym_error] = ACTIONS(106),
    [sym_year_month_day] = ACTIONS(106),
    [sym__time_with_offset] = ACTIONS(106),
    [sym__time_without_offset] = ACTIONS(106),
    [anon_sym_true] = ACTIONS(106),
    [anon_sym_True] = ACTIONS(104),
    [anon_sym_false] = ACTIONS(106),
    [anon_sym_False] = ACTIONS(106),
    [sym__raw_string_literal] = ACTIONS(106),
    [anon_sym_DQUOTE] = ACTIONS(104),
    [anon_sym_SQUOTE] = ACTIONS(104),
    [aux_sym_number_token1] = ACTIONS(106),
    [aux_sym_number_token2] = ACTIONS(106),
    [aux_sym_number_token3] = ACTIONS(106),
    [aux_sym_number_token4] = ACTIONS(106),
    [aux_sym_number_token5] = ACTIONS(106),
    [aux_sym_number_token6] = ACTIONS(106),
    [aux_sym_number_token7] = ACTIONS(106),
    [anon_sym_LPAREN] = ACTIONS(104),
    [anon_sym_RPAREN] = ACTIONS(104),
    [anon_sym_T] = ACTIONS(106),
    [anon_sym_LBRACK] = ACTIONS(104),
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
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(108),
    [sym_trace] = ACTIONS(110),
    [sym_debug] = ACTIONS(110),
    [sym_info] = ACTIONS(110),
    [sym_warn] = ACTIONS(110),
    [sym_error] = ACTIONS(110),
    [sym_year_month_day] = ACTIONS(110),
    [sym__time_with_offset] = ACTIONS(110),
    [sym__time_without_offset] = ACTIONS(110),
    [anon_sym_true] = ACTIONS(110),
    [anon_sym_True] = ACTIONS(108),
    [anon_sym_false] = ACTIONS(110),
    [anon_sym_False] = ACTIONS(110),
    [sym__raw_string_literal] = ACTIONS(110),
    [anon_sym_DQUOTE] = ACTIONS(108),
    [anon_sym_SQUOTE] = ACTIONS(108),
    [aux_sym_number_token1] = ACTIONS(110),
    [aux_sym_number_token2] = ACTIONS(110),
    [aux_sym_number_token3] = ACTIONS(110),
    [aux_sym_number_token4] = ACTIONS(110),
    [aux_sym_number_token5] = ACTIONS(110),
    [aux_sym_number_token6] = ACTIONS(110),
    [aux_sym_number_token7] = ACTIONS(110),
    [anon_sym_LPAREN] = ACTIONS(108),
    [anon_sym_RPAREN] = ACTIONS(108),
    [anon_sym_T] = ACTIONS(110),
    [anon_sym_LBRACK] = ACTIONS(108),
    [anon_sym_RBRACK] = ACTIONS(108),
    [anon_sym_LBRACE] = ACTIONS(108),
    [anon_sym_RBRACE] = ACTIONS(108),
    [anon_sym_EQ] = ACTIONS(108),
    [anon_sym_COMMA] = ACTIONS(108),
    [anon_sym_COLON] = ACTIONS(108),
    [anon_sym_SLASH] = ACTIONS(108),
    [anon_sym_DASH] = ACTIONS(108),
    [sym_word] = ACTIONS(110),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(112),
    [sym_trace] = ACTIONS(114),
    [sym_debug] = ACTIONS(114),
    [sym_info] = ACTIONS(114),
    [sym_warn] = ACTIONS(114),
    [sym_error] = ACTIONS(114),
    [sym_year_month_day] = ACTIONS(114),
    [sym__time_with_offset] = ACTIONS(114),
    [sym__time_without_offset] = ACTIONS(114),
    [anon_sym_true] = ACTIONS(114),
    [anon_sym_True] = ACTIONS(112),
    [anon_sym_false] = ACTIONS(114),
    [anon_sym_False] = ACTIONS(114),
    [sym__raw_string_literal] = ACTIONS(114),
    [anon_sym_DQUOTE] = ACTIONS(112),
    [anon_sym_SQUOTE] = ACTIONS(112),
    [aux_sym_number_token1] = ACTIONS(114),
    [aux_sym_number_token2] = ACTIONS(114),
    [aux_sym_number_token3] = ACTIONS(114),
    [aux_sym_number_token4] = ACTIONS(114),
    [aux_sym_number_token5] = ACTIONS(114),
    [aux_sym_number_token6] = ACTIONS(114),
    [aux_sym_number_token7] = ACTIONS(114),
    [anon_sym_LPAREN] = ACTIONS(112),
    [anon_sym_RPAREN] = ACTIONS(112),
    [anon_sym_T] = ACTIONS(114),
    [anon_sym_LBRACK] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(112),
    [anon_sym_LBRACE] = ACTIONS(112),
    [anon_sym_RBRACE] = ACTIONS(112),
    [anon_sym_EQ] = ACTIONS(112),
    [anon_sym_COMMA] = ACTIONS(112),
    [anon_sym_COLON] = ACTIONS(112),
    [anon_sym_SLASH] = ACTIONS(112),
    [anon_sym_DASH] = ACTIONS(112),
    [sym_word] = ACTIONS(114),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(118), 1,
      anon_sym_SQUOTE2,
    STATE(19), 1,
      aux_sym__interpreted_single_string_repeat1,
    ACTIONS(116), 2,
      sym__escape_sequence,
      sym__interpreted_single_string_basic_content,
  [11] = 3,
    ACTIONS(122), 1,
      anon_sym_SQUOTE2,
    STATE(15), 1,
      aux_sym__interpreted_single_string_repeat1,
    ACTIONS(120), 2,
      sym__escape_sequence,
      sym__interpreted_single_string_basic_content,
  [22] = 3,
    ACTIONS(124), 1,
      anon_sym_DQUOTE2,
    STATE(18), 1,
      aux_sym__interpreted_double_string_repeat1,
    ACTIONS(126), 2,
      sym__interpreted_double_string_basic_content,
      sym__escape_sequence,
  [33] = 3,
    ACTIONS(128), 1,
      anon_sym_DQUOTE2,
    STATE(18), 1,
      aux_sym__interpreted_double_string_repeat1,
    ACTIONS(130), 2,
      sym__interpreted_double_string_basic_content,
      sym__escape_sequence,
  [44] = 3,
    ACTIONS(136), 1,
      anon_sym_SQUOTE2,
    STATE(19), 1,
      aux_sym__interpreted_single_string_repeat1,
    ACTIONS(133), 2,
      sym__escape_sequence,
      sym__interpreted_single_string_basic_content,
  [55] = 1,
    ACTIONS(138), 1,
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
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(5),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(6),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(7),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(8),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(8),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(9),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(4),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(16),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(11),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(3),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_log_file_repeat1, 2), SHIFT_REPEAT(3),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__word_separator, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__word_separator, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_level, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_level, 1),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_time, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_time, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_single_string, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_single_string, 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_double_string, 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_double_string, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_double_string, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_double_string, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__interpreted_single_string, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__interpreted_single_string, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__interpreted_double_string_repeat1, 2),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_double_string_repeat1, 2), SHIFT_REPEAT(18),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__interpreted_single_string_repeat1, 2), SHIFT_REPEAT(19),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__interpreted_single_string_repeat1, 2),
  [138] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
