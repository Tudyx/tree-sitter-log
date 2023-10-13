#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 24
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_year_month_date = 1,
  sym_time_with_offset = 2,
  sym_time_without_offset = 3,
  sym_comment = 4,
  sym_trace_level = 5,
  sym_debug_level = 6,
  sym_info_level = 7,
  sym_warning_level = 8,
  sym_error_level = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_quoted_string_token1 = 11,
  anon_sym_SQUOTE = 12,
  aux_sym_quoted_string_token2 = 13,
  aux_sym__uuid_token1 = 14,
  aux_sym__uuid_token2 = 15,
  aux_sym__ipv4_token1 = 16,
  aux_sym__ipv4_token2 = 17,
  sym_true_or_false = 18,
  aux_sym_constant_token1 = 19,
  sym_logs = 20,
  sym__logline = 21,
  sym_log_date = 22,
  sym_log_time = 23,
  sym_level = 24,
  sym_quoted_string = 25,
  sym__important = 26,
  sym__uuid = 27,
  sym__ipv4 = 28,
  sym_constant = 29,
  aux_sym_logs_repeat1 = 30,
  aux_sym__logline_repeat1 = 31,
  aux_sym_quoted_string_repeat1 = 32,
  aux_sym_quoted_string_repeat2 = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_year_month_date] = "year_month_date",
  [sym_time_with_offset] = "time_with_offset",
  [sym_time_without_offset] = "time_without_offset",
  [sym_comment] = "comment",
  [sym_trace_level] = "trace_level",
  [sym_debug_level] = "debug_level",
  [sym_info_level] = "info_level",
  [sym_warning_level] = "warning_level",
  [sym_error_level] = "error_level",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_quoted_string_token1] = "quoted_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_quoted_string_token2] = "quoted_string_token2",
  [aux_sym__uuid_token1] = "_uuid_token1",
  [aux_sym__uuid_token2] = "_uuid_token2",
  [aux_sym__ipv4_token1] = "_ipv4_token1",
  [aux_sym__ipv4_token2] = "_ipv4_token2",
  [sym_true_or_false] = "true_or_false",
  [aux_sym_constant_token1] = "constant_token1",
  [sym_logs] = "logs",
  [sym__logline] = "_logline",
  [sym_log_date] = "log_date",
  [sym_log_time] = "log_time",
  [sym_level] = "level",
  [sym_quoted_string] = "quoted_string",
  [sym__important] = "_important",
  [sym__uuid] = "_uuid",
  [sym__ipv4] = "_ipv4",
  [sym_constant] = "constant",
  [aux_sym_logs_repeat1] = "logs_repeat1",
  [aux_sym__logline_repeat1] = "_logline_repeat1",
  [aux_sym_quoted_string_repeat1] = "quoted_string_repeat1",
  [aux_sym_quoted_string_repeat2] = "quoted_string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_year_month_date] = sym_year_month_date,
  [sym_time_with_offset] = sym_time_with_offset,
  [sym_time_without_offset] = sym_time_without_offset,
  [sym_comment] = sym_comment,
  [sym_trace_level] = sym_trace_level,
  [sym_debug_level] = sym_debug_level,
  [sym_info_level] = sym_info_level,
  [sym_warning_level] = sym_warning_level,
  [sym_error_level] = sym_error_level,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_quoted_string_token1] = aux_sym_quoted_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_quoted_string_token2] = aux_sym_quoted_string_token2,
  [aux_sym__uuid_token1] = aux_sym__uuid_token1,
  [aux_sym__uuid_token2] = aux_sym__uuid_token2,
  [aux_sym__ipv4_token1] = aux_sym__ipv4_token1,
  [aux_sym__ipv4_token2] = aux_sym__ipv4_token2,
  [sym_true_or_false] = sym_true_or_false,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [sym_logs] = sym_logs,
  [sym__logline] = sym__logline,
  [sym_log_date] = sym_log_date,
  [sym_log_time] = sym_log_time,
  [sym_level] = sym_level,
  [sym_quoted_string] = sym_quoted_string,
  [sym__important] = sym__important,
  [sym__uuid] = sym__uuid,
  [sym__ipv4] = sym__ipv4,
  [sym_constant] = sym_constant,
  [aux_sym_logs_repeat1] = aux_sym_logs_repeat1,
  [aux_sym__logline_repeat1] = aux_sym__logline_repeat1,
  [aux_sym_quoted_string_repeat1] = aux_sym_quoted_string_repeat1,
  [aux_sym_quoted_string_repeat2] = aux_sym_quoted_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_year_month_date] = {
    .visible = true,
    .named = true,
  },
  [sym_time_with_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_time_without_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_trace_level] = {
    .visible = true,
    .named = true,
  },
  [sym_debug_level] = {
    .visible = true,
    .named = true,
  },
  [sym_info_level] = {
    .visible = true,
    .named = true,
  },
  [sym_warning_level] = {
    .visible = true,
    .named = true,
  },
  [sym_error_level] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quoted_string_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__uuid_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__uuid_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ipv4_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__ipv4_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_true_or_false] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_logs] = {
    .visible = true,
    .named = true,
  },
  [sym__logline] = {
    .visible = false,
    .named = true,
  },
  [sym_log_date] = {
    .visible = true,
    .named = true,
  },
  [sym_log_time] = {
    .visible = true,
    .named = true,
  },
  [sym_level] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym__important] = {
    .visible = false,
    .named = true,
  },
  [sym__uuid] = {
    .visible = false,
    .named = true,
  },
  [sym__ipv4] = {
    .visible = false,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_logs_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__logline_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_quoted_string_repeat2] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(217);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == '2') ADVANCE(253);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'A') ADVANCE(58);
      if (lookahead == 'C') ADVANCE(74);
      if (lookahead == 'D') ADVANCE(39);
      if (lookahead == 'E') ADVANCE(41);
      if (lookahead == 'F') ADVANCE(29);
      if (lookahead == 'H') ADVANCE(51);
      if (lookahead == 'I') ADVANCE(52);
      if (lookahead == 'N') ADVANCE(67);
      if (lookahead == 'T') ADVANCE(72);
      if (lookahead == 'W') ADVANCE(32);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'e') ADVANCE(127);
      if (lookahead == 'f') ADVANCE(86);
      if (lookahead == 'i') ADVANCE(119);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == 'v') ADVANCE(100);
      if (lookahead == 'w') ADVANCE(91);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(256);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(191);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(222);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(239);
      if (lookahead != 0) ADVANCE(240);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0) ADVANCE(237);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(181);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(188);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(203);
      END_STATE();
    case 12:
      if (lookahead == '.') ADVANCE(154);
      END_STATE();
    case 13:
      if (lookahead == '.') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(154);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(159);
      END_STATE();
    case 16:
      if (lookahead == '.') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '.') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == '0') ADVANCE(148);
      if (lookahead == '1') ADVANCE(141);
      END_STATE();
    case 19:
      if (lookahead == '0') ADVANCE(220);
      END_STATE();
    case 20:
      if (lookahead == '0') ADVANCE(147);
      if (lookahead == '1') ADVANCE(142);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 21:
      if (lookahead == '0') ADVANCE(149);
      if (lookahead == '3') ADVANCE(139);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(153);
      END_STATE();
    case 22:
      if (lookahead == '2') ADVANCE(143);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(158);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(144);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(160);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(23)
      END_STATE();
    case 24:
      if (lookahead == '3') ADVANCE(248);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(249);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 25:
      if (lookahead == '6') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(155);
      END_STATE();
    case 26:
      if (lookahead == ':') ADVANCE(145);
      END_STATE();
    case 27:
      if (lookahead == ':') ADVANCE(25);
      END_STATE();
    case 28:
      if (lookahead == ':') ADVANCE(146);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(53);
      if (lookahead == 'a') ADVANCE(109);
      END_STATE();
    case 30:
      if (lookahead == 'A') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(59);
      END_STATE();
    case 32:
      if (lookahead == 'A') ADVANCE(75);
      if (lookahead == 'W') ADVANCE(229);
      END_STATE();
    case 33:
      if (lookahead == 'A') ADVANCE(83);
      END_STATE();
    case 34:
      if (lookahead == 'B') ADVANCE(84);
      END_STATE();
    case 35:
      if (lookahead == 'C') ADVANCE(85);
      END_STATE();
    case 36:
      if (lookahead == 'C') ADVANCE(43);
      END_STATE();
    case 37:
      if (lookahead == 'C') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'C') ADVANCE(42);
      END_STATE();
    case 39:
      if (lookahead == 'E') ADVANCE(34);
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 40:
      if (lookahead == 'E') ADVANCE(232);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(232);
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'R') ADVANCE(73);
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(226);
      END_STATE();
    case 43:
      if (lookahead == 'E') ADVANCE(223);
      END_STATE();
    case 44:
      if (lookahead == 'E') ADVANCE(77);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(65);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(76);
      END_STATE();
    case 47:
      if (lookahead == 'F') ADVANCE(68);
      END_STATE();
    case 48:
      if (lookahead == 'G') ADVANCE(229);
      END_STATE();
    case 49:
      if (lookahead == 'G') ADVANCE(225);
      END_STATE();
    case 50:
      if (lookahead == 'G') ADVANCE(45);
      END_STATE();
    case 51:
      if (lookahead == 'I') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(226);
      if (lookahead == 'N') ADVANCE(47);
      if (lookahead == 'n') ADVANCE(101);
      END_STATE();
    case 53:
      if (lookahead == 'I') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(31);
      END_STATE();
    case 54:
      if (lookahead == 'I') ADVANCE(37);
      END_STATE();
    case 55:
      if (lookahead == 'I') ADVANCE(69);
      END_STATE();
    case 56:
      if (lookahead == 'I') ADVANCE(82);
      END_STATE();
    case 57:
      if (lookahead == 'I') ADVANCE(38);
      END_STATE();
    case 58:
      if (lookahead == 'L') ADVANCE(44);
      END_STATE();
    case 59:
      if (lookahead == 'L') ADVANCE(232);
      END_STATE();
    case 60:
      if (lookahead == 'L') ADVANCE(233);
      END_STATE();
    case 61:
      if (lookahead == 'M') ADVANCE(33);
      END_STATE();
    case 62:
      if (lookahead == 'N') ADVANCE(226);
      END_STATE();
    case 63:
      if (lookahead == 'N') ADVANCE(230);
      END_STATE();
    case 64:
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 65:
      if (lookahead == 'N') ADVANCE(35);
      END_STATE();
    case 66:
      if (lookahead == 'N') ADVANCE(48);
      END_STATE();
    case 67:
      if (lookahead == 'O') ADVANCE(81);
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 68:
      if (lookahead == 'O') ADVANCE(227);
      END_STATE();
    case 69:
      if (lookahead == 'O') ADVANCE(62);
      END_STATE();
    case 70:
      if (lookahead == 'O') ADVANCE(71);
      END_STATE();
    case 71:
      if (lookahead == 'R') ADVANCE(232);
      END_STATE();
    case 72:
      if (lookahead == 'R') ADVANCE(30);
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 73:
      if (lookahead == 'R') ADVANCE(70);
      END_STATE();
    case 74:
      if (lookahead == 'R') ADVANCE(56);
      END_STATE();
    case 75:
      if (lookahead == 'R') ADVANCE(63);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(50);
      END_STATE();
    case 77:
      if (lookahead == 'R') ADVANCE(79);
      END_STATE();
    case 78:
      if (lookahead == 'R') ADVANCE(40);
      END_STATE();
    case 79:
      if (lookahead == 'T') ADVANCE(232);
      END_STATE();
    case 80:
      if (lookahead == 'T') ADVANCE(226);
      END_STATE();
    case 81:
      if (lookahead == 'T') ADVANCE(57);
      END_STATE();
    case 82:
      if (lookahead == 'T') ADVANCE(54);
      END_STATE();
    case 83:
      if (lookahead == 'T') ADVANCE(55);
      END_STATE();
    case 84:
      if (lookahead == 'U') ADVANCE(49);
      END_STATE();
    case 85:
      if (lookahead == 'Y') ADVANCE(232);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(97);
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(134);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 93:
      if (lookahead == 'b') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 94:
      if (lookahead == 'b') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 95:
      if (lookahead == 'b') ADVANCE(224);
      END_STATE();
    case 96:
      if (lookahead == 'b') ADVANCE(136);
      END_STATE();
    case 97:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 101:
      if (lookahead == 'f') ADVANCE(120);
      END_STATE();
    case 102:
      if (lookahead == 'f') ADVANCE(121);
      END_STATE();
    case 103:
      if (lookahead == 'g') ADVANCE(229);
      END_STATE();
    case 104:
      if (lookahead == 'g') ADVANCE(225);
      END_STATE();
    case 105:
      if (lookahead == 'g') ADVANCE(225);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 106:
      if (lookahead == 'i') ADVANCE(123);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(232);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 109:
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 110:
      if (lookahead == 'l') ADVANCE(132);
      if (lookahead == 't') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 111:
      if (lookahead == 'l') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 112:
      if (lookahead == 'l') ADVANCE(251);
      END_STATE();
    case 113:
      if (lookahead == 'l') ADVANCE(112);
      END_STATE();
    case 114:
      if (lookahead == 'm') ADVANCE(88);
      END_STATE();
    case 115:
      if (lookahead == 'n') ADVANCE(226);
      END_STATE();
    case 116:
      if (lookahead == 'n') ADVANCE(231);
      END_STATE();
    case 117:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 118:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 119:
      if (lookahead == 'n') ADVANCE(102);
      END_STATE();
    case 120:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 121:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 122:
      if (lookahead == 'o') ADVANCE(117);
      END_STATE();
    case 123:
      if (lookahead == 'o') ADVANCE(115);
      END_STATE();
    case 124:
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 125:
      if (lookahead == 'o') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(234);
      END_STATE();
    case 126:
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 127:
      if (lookahead == 'r') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 128:
      if (lookahead == 'r') ADVANCE(124);
      END_STATE();
    case 129:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 130:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 131:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 132:
      if (lookahead == 's') ADVANCE(98);
      END_STATE();
    case 133:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 134:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 135:
      if (lookahead == 'u') ADVANCE(113);
      END_STATE();
    case 136:
      if (lookahead == 'u') ADVANCE(104);
      END_STATE();
    case 137:
      if (lookahead == 'u') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      END_STATE();
    case 138:
      if (lookahead == 'u') ADVANCE(98);
      END_STATE();
    case 139:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(140);
      END_STATE();
    case 140:
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(218);
      END_STATE();
    case 141:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(6);
      END_STATE();
    case 142:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(7);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 143:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(28);
      END_STATE();
    case 144:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(26);
      END_STATE();
    case 145:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(152);
      END_STATE();
    case 146:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(156);
      END_STATE();
    case 147:
      if (lookahead == '0' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 148:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 149:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 150:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 151:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 152:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 153:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 154:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 155:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(220);
      END_STATE();
    case 156:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(219);
      END_STATE();
    case 157:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 158:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 159:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 160:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 161:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      END_STATE();
    case 162:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      END_STATE();
    case 163:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 164:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      END_STATE();
    case 165:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 166:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(165);
      END_STATE();
    case 167:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      END_STATE();
    case 168:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(163);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(166);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(168);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(170);
      END_STATE();
    case 175:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      END_STATE();
    case 176:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(172);
      END_STATE();
    case 177:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(11);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(178);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(179);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(180);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(176);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(185);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(186);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(187);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(183);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 207:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      END_STATE();
    case 208:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      END_STATE();
    case 209:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      END_STATE();
    case 210:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 215:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 216:
      if (eof) ADVANCE(217);
      if (lookahead == '"') ADVANCE(235);
      if (lookahead == '#') ADVANCE(215);
      if (lookahead == '\'') ADVANCE(238);
      if (lookahead == ':') ADVANCE(150);
      if (lookahead == 'F') ADVANCE(92);
      if (lookahead == 'N') ADVANCE(122);
      if (lookahead == 'T') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(89);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == 't') ADVANCE(129);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(216)
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(191);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(257);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_year_month_date);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_time_with_offset);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_time_without_offset);
      if (lookahead == '.') ADVANCE(157);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(219);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_time_without_offset);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(221);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_trace_level);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_trace_level);
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_debug_level);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_info_level);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_info_level);
      if (lookahead == 'R') ADVANCE(61);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_info_level);
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_warning_level);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_warning_level);
      if (lookahead == 'I') ADVANCE(66);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_warning_level);
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_error_level);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_error_level);
      if (lookahead == 'U') ADVANCE(78);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_error_level);
      if (lookahead == 'o') ADVANCE(126);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(236);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(237);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(237);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(aux_sym_quoted_string_token2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(239);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(240);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(aux_sym_quoted_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'') ADVANCE(240);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(aux_sym__uuid_token1);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(aux_sym__uuid_token2);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(aux_sym__uuid_token2);
      if (lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(aux_sym__ipv4_token1);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(aux_sym__ipv4_token1);
      if (lookahead == '/') ADVANCE(24);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(aux_sym__ipv4_token1);
      if (lookahead == '/') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(245);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(aux_sym__ipv4_token1);
      if (lookahead == '/') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(246);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(aux_sym__ipv4_token1);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(244);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym__ipv4_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(244);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym__ipv4_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_true_or_false);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(151);
      if (lookahead == ':') ADVANCE(145);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(151);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(252);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(255);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(173);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(264);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(177);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(254);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(252);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '.') ADVANCE(151);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(255);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(243);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(161);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(258);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(259);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(260);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(167);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(261);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(262);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(263);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(265);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(266);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(267);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(274);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(275);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(206);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(207);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(208);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(278);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(209);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(281);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(20);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 216},
  [3] = {.lex_state = 216},
  [4] = {.lex_state = 216},
  [5] = {.lex_state = 216},
  [6] = {.lex_state = 216},
  [7] = {.lex_state = 216},
  [8] = {.lex_state = 216},
  [9] = {.lex_state = 216},
  [10] = {.lex_state = 216},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 23},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 23},
  [23] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_year_month_date] = ACTIONS(1),
    [sym_time_with_offset] = ACTIONS(1),
    [sym_time_without_offset] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [sym_trace_level] = ACTIONS(1),
    [sym_debug_level] = ACTIONS(1),
    [sym_info_level] = ACTIONS(1),
    [sym_warning_level] = ACTIONS(1),
    [sym_error_level] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym__uuid_token1] = ACTIONS(1),
    [aux_sym__uuid_token2] = ACTIONS(1),
    [aux_sym__ipv4_token1] = ACTIONS(1),
    [aux_sym__ipv4_token2] = ACTIONS(1),
    [sym_true_or_false] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_logs] = STATE(23),
    [sym__logline] = STATE(11),
    [sym_log_date] = STATE(19),
    [aux_sym_logs_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_year_month_date] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym__ipv4_token1,
    ACTIONS(15), 2,
      aux_sym__uuid_token1,
      sym_true_or_false,
    ACTIONS(17), 2,
      aux_sym__uuid_token2,
      aux_sym_constant_token1,
    STATE(10), 2,
      sym__uuid,
      sym__ipv4,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      sym_year_month_date,
      sym_comment,
    STATE(3), 4,
      sym_quoted_string,
      sym__important,
      sym_constant,
      aux_sym__logline_repeat1,
  [33] = 8,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(26), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      aux_sym__ipv4_token1,
    ACTIONS(29), 2,
      aux_sym__uuid_token1,
      sym_true_or_false,
    ACTIONS(32), 2,
      aux_sym__uuid_token2,
      aux_sym_constant_token1,
    STATE(10), 2,
      sym__uuid,
      sym__ipv4,
    ACTIONS(21), 3,
      ts_builtin_sym_end,
      sym_year_month_date,
      sym_comment,
    STATE(3), 4,
      sym_quoted_string,
      sym__important,
      sym_constant,
      aux_sym__logline_repeat1,
  [66] = 8,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(19), 1,
      aux_sym__ipv4_token1,
    ACTIONS(15), 2,
      aux_sym__uuid_token1,
      sym_true_or_false,
    ACTIONS(17), 2,
      aux_sym__uuid_token2,
      aux_sym_constant_token1,
    STATE(10), 2,
      sym__uuid,
      sym__ipv4,
    ACTIONS(38), 3,
      ts_builtin_sym_end,
      sym_year_month_date,
      sym_comment,
    STATE(2), 4,
      sym_quoted_string,
      sym__important,
      sym_constant,
      aux_sym__logline_repeat1,
  [99] = 3,
    ACTIONS(44), 1,
      aux_sym__ipv4_token2,
    ACTIONS(42), 2,
      aux_sym__uuid_token2,
      aux_sym_constant_token1,
    ACTIONS(40), 8,
      ts_builtin_sym_end,
      sym_year_month_date,
      sym_comment,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__uuid_token1,
      aux_sym__ipv4_token1,
      sym_true_or_false,
  [117] = 2,
    ACTIONS(48), 2,
      aux_sym__uuid_token2,
      aux_sym_constant_token1,
    ACTIONS(46), 8,
      ts_builtin_sym_end,
      sym_year_month_date,
      sym_comment,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__uuid_token1,
      aux_sym__ipv4_token1,
      sym_true_or_false,
  [132] = 2,
    ACTIONS(52), 2,
      aux_sym__uuid_token2,
      aux_sym_constant_token1,
    ACTIONS(50), 8,
      ts_builtin_sym_end,
      sym_year_month_date,
      sym_comment,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__uuid_token1,
      aux_sym__ipv4_token1,
      sym_true_or_false,
  [147] = 2,
    ACTIONS(56), 2,
      aux_sym__uuid_token2,
      aux_sym_constant_token1,
    ACTIONS(54), 8,
      ts_builtin_sym_end,
      sym_year_month_date,
      sym_comment,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__uuid_token1,
      aux_sym__ipv4_token1,
      sym_true_or_false,
  [162] = 2,
    ACTIONS(60), 2,
      aux_sym__uuid_token2,
      aux_sym_constant_token1,
    ACTIONS(58), 8,
      ts_builtin_sym_end,
      sym_year_month_date,
      sym_comment,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__uuid_token1,
      aux_sym__ipv4_token1,
      sym_true_or_false,
  [177] = 2,
    ACTIONS(64), 2,
      aux_sym__uuid_token2,
      aux_sym_constant_token1,
    ACTIONS(62), 8,
      ts_builtin_sym_end,
      sym_year_month_date,
      sym_comment,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      aux_sym__uuid_token1,
      aux_sym__ipv4_token1,
      sym_true_or_false,
  [192] = 5,
    ACTIONS(5), 1,
      sym_year_month_date,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(68), 1,
      sym_comment,
    STATE(19), 1,
      sym_log_date,
    STATE(13), 2,
      sym__logline,
      aux_sym_logs_repeat1,
  [209] = 2,
    STATE(4), 1,
      sym_level,
    ACTIONS(70), 5,
      sym_trace_level,
      sym_debug_level,
      sym_info_level,
      sym_warning_level,
      sym_error_level,
  [220] = 5,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
    ACTIONS(74), 1,
      sym_year_month_date,
    ACTIONS(77), 1,
      sym_comment,
    STATE(19), 1,
      sym_log_date,
    STATE(13), 2,
      sym__logline,
      aux_sym_logs_repeat1,
  [237] = 1,
    ACTIONS(80), 5,
      sym_trace_level,
      sym_debug_level,
      sym_info_level,
      sym_warning_level,
      sym_error_level,
  [245] = 3,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    ACTIONS(84), 1,
      aux_sym_quoted_string_token2,
    STATE(17), 1,
      aux_sym_quoted_string_repeat2,
  [255] = 3,
    ACTIONS(86), 1,
      anon_sym_DQUOTE,
    ACTIONS(88), 1,
      aux_sym_quoted_string_token1,
    STATE(20), 1,
      aux_sym_quoted_string_repeat1,
  [265] = 3,
    ACTIONS(86), 1,
      anon_sym_SQUOTE,
    ACTIONS(90), 1,
      aux_sym_quoted_string_token2,
    STATE(21), 1,
      aux_sym_quoted_string_repeat2,
  [275] = 3,
    ACTIONS(82), 1,
      anon_sym_DQUOTE,
    ACTIONS(92), 1,
      aux_sym_quoted_string_token1,
    STATE(16), 1,
      aux_sym_quoted_string_repeat1,
  [285] = 3,
    ACTIONS(94), 1,
      sym_time_with_offset,
    ACTIONS(96), 1,
      sym_time_without_offset,
    STATE(12), 1,
      sym_log_time,
  [295] = 3,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(100), 1,
      aux_sym_quoted_string_token1,
    STATE(20), 1,
      aux_sym_quoted_string_repeat1,
  [305] = 3,
    ACTIONS(103), 1,
      anon_sym_SQUOTE,
    ACTIONS(105), 1,
      aux_sym_quoted_string_token2,
    STATE(21), 1,
      aux_sym_quoted_string_repeat2,
  [315] = 2,
    ACTIONS(108), 1,
      sym_time_with_offset,
    ACTIONS(110), 1,
      sym_time_without_offset,
  [322] = 1,
    ACTIONS(112), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 33,
  [SMALL_STATE(4)] = 66,
  [SMALL_STATE(5)] = 99,
  [SMALL_STATE(6)] = 117,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 162,
  [SMALL_STATE(10)] = 177,
  [SMALL_STATE(11)] = 192,
  [SMALL_STATE(12)] = 209,
  [SMALL_STATE(13)] = 220,
  [SMALL_STATE(14)] = 237,
  [SMALL_STATE(15)] = 245,
  [SMALL_STATE(16)] = 255,
  [SMALL_STATE(17)] = 265,
  [SMALL_STATE(18)] = 275,
  [SMALL_STATE(19)] = 285,
  [SMALL_STATE(20)] = 295,
  [SMALL_STATE(21)] = 305,
  [SMALL_STATE(22)] = 315,
  [SMALL_STATE(23)] = 322,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logs, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logline, 4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__logline_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__logline_repeat1, 2), SHIFT_REPEAT(18),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__logline_repeat1, 2), SHIFT_REPEAT(15),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__logline_repeat1, 2), SHIFT_REPEAT(10),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__logline_repeat1, 2), SHIFT_REPEAT(10),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__logline_repeat1, 2), SHIFT_REPEAT(5),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logline, 3),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipv4, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ipv4, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipv4, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ipv4, 2),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_level, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_level, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logs, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 2), SHIFT_REPEAT(22),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 2), SHIFT_REPEAT(13),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_time, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(20),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat2, 2),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat2, 2), SHIFT_REPEAT(21),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_date, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_date, 1),
  [112] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
