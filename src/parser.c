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
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
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
  aux_sym__uuid_token1 = 12,
  aux_sym__uuid_token2 = 13,
  aux_sym__ipv4_token1 = 14,
  aux_sym__ipv4_token2 = 15,
  aux_sym_constant_token1 = 16,
  aux_sym_constant_token2 = 17,
  sym_logs = 18,
  sym__logline = 19,
  sym_log_date = 20,
  sym_log_time = 21,
  sym_level = 22,
  sym_quoted_string = 23,
  sym__important = 24,
  sym__uuid = 25,
  sym__ipv4 = 26,
  sym_constant = 27,
  aux_sym_logs_repeat1 = 28,
  aux_sym__logline_repeat1 = 29,
  aux_sym_quoted_string_repeat1 = 30,
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
  [aux_sym__uuid_token1] = "_uuid_token1",
  [aux_sym__uuid_token2] = "_uuid_token2",
  [aux_sym__ipv4_token1] = "_ipv4_token1",
  [aux_sym__ipv4_token2] = "_ipv4_token2",
  [aux_sym_constant_token1] = "constant_token1",
  [aux_sym_constant_token2] = "constant_token2",
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
  [aux_sym__uuid_token1] = aux_sym__uuid_token1,
  [aux_sym__uuid_token2] = aux_sym__uuid_token2,
  [aux_sym__ipv4_token1] = aux_sym__ipv4_token1,
  [aux_sym__ipv4_token2] = aux_sym__ipv4_token2,
  [aux_sym_constant_token1] = aux_sym_constant_token1,
  [aux_sym_constant_token2] = aux_sym_constant_token2,
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
  [aux_sym_constant_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constant_token2] = {
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(245);
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == '2') ADVANCE(7);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'E') ADVANCE(76);
      if (lookahead == 'F') ADVANCE(64);
      if (lookahead == 'H') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == 'T') ADVANCE(107);
      if (lookahead == 'W') ADVANCE(67);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == 'v') ADVANCE(134);
      if (lookahead == 'w') ADVANCE(126);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(250);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0) ADVANCE(265);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == '2') ADVANCE(278);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == 'A') ADVANCE(93);
      if (lookahead == 'C') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'E') ADVANCE(76);
      if (lookahead == 'F') ADVANCE(64);
      if (lookahead == 'H') ADVANCE(86);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'N') ADVANCE(102);
      if (lookahead == 'T') ADVANCE(107);
      if (lookahead == 'W') ADVANCE(67);
      if (lookahead == 'd') ADVANCE(127);
      if (lookahead == 'e') ADVANCE(155);
      if (lookahead == 'f') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(148);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == 'v') ADVANCE(134);
      if (lookahead == 'w') ADVANCE(126);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(281);
      if (('a' <= lookahead && lookahead <= 'c')) ADVANCE(219);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (('3' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(282);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == ':') ADVANCE(173);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(6);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(268);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 19:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 20:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 21:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      if (lookahead == '-') ADVANCE(56);
      END_STATE();
    case 41:
      if (lookahead == '-') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      END_STATE();
    case 42:
      if (lookahead == '-') ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 43:
      if (lookahead == '-') ADVANCE(202);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      END_STATE();
    case 44:
      if (lookahead == '-') ADVANCE(209);
      END_STATE();
    case 45:
      if (lookahead == '-') ADVANCE(216);
      END_STATE();
    case 46:
      if (lookahead == '-') ADVANCE(231);
      END_STATE();
    case 47:
      if (lookahead == '.') ADVANCE(182);
      END_STATE();
    case 48:
      if (lookahead == '.') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 49:
      if (lookahead == '.') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == '.') ADVANCE(187);
      END_STATE();
    case 51:
      if (lookahead == '.') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == '.') ADVANCE(187);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead == '0') ADVANCE(176);
      if (lookahead == '1') ADVANCE(169);
      END_STATE();
    case 54:
      if (lookahead == '0') ADVANCE(248);
      END_STATE();
    case 55:
      if (lookahead == '0') ADVANCE(175);
      if (lookahead == '1') ADVANCE(170);
      if (('2' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 56:
      if (lookahead == '0') ADVANCE(177);
      if (lookahead == '3') ADVANCE(167);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(181);
      END_STATE();
    case 57:
      if (lookahead == '2') ADVANCE(171);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(186);
      END_STATE();
    case 58:
      if (lookahead == '2') ADVANCE(172);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(188);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      END_STATE();
    case 59:
      if (lookahead == '3') ADVANCE(274);
      if (lookahead == '1' ||
          lookahead == '2') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 60:
      if (lookahead == '6') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(183);
      END_STATE();
    case 61:
      if (lookahead == ':') ADVANCE(173);
      END_STATE();
    case 62:
      if (lookahead == ':') ADVANCE(60);
      END_STATE();
    case 63:
      if (lookahead == ':') ADVANCE(174);
      END_STATE();
    case 64:
      if (lookahead == 'A') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(163);
      END_STATE();
    case 65:
      if (lookahead == 'A') ADVANCE(71);
      END_STATE();
    case 66:
      if (lookahead == 'A') ADVANCE(94);
      END_STATE();
    case 67:
      if (lookahead == 'A') ADVANCE(110);
      if (lookahead == 'W') ADVANCE(257);
      END_STATE();
    case 68:
      if (lookahead == 'A') ADVANCE(118);
      END_STATE();
    case 69:
      if (lookahead == 'B') ADVANCE(119);
      END_STATE();
    case 70:
      if (lookahead == 'C') ADVANCE(120);
      END_STATE();
    case 71:
      if (lookahead == 'C') ADVANCE(78);
      END_STATE();
    case 72:
      if (lookahead == 'C') ADVANCE(66);
      END_STATE();
    case 73:
      if (lookahead == 'C') ADVANCE(77);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(69);
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 75:
      if (lookahead == 'E') ADVANCE(260);
      END_STATE();
    case 76:
      if (lookahead == 'E') ADVANCE(260);
      if (lookahead == 'M') ADVANCE(81);
      if (lookahead == 'R') ADVANCE(109);
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 77:
      if (lookahead == 'E') ADVANCE(254);
      END_STATE();
    case 78:
      if (lookahead == 'E') ADVANCE(251);
      END_STATE();
    case 79:
      if (lookahead == 'E') ADVANCE(112);
      END_STATE();
    case 80:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 81:
      if (lookahead == 'E') ADVANCE(111);
      END_STATE();
    case 82:
      if (lookahead == 'F') ADVANCE(103);
      END_STATE();
    case 83:
      if (lookahead == 'G') ADVANCE(257);
      END_STATE();
    case 84:
      if (lookahead == 'G') ADVANCE(253);
      END_STATE();
    case 85:
      if (lookahead == 'G') ADVANCE(80);
      END_STATE();
    case 86:
      if (lookahead == 'I') ADVANCE(99);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(254);
      if (lookahead == 'N') ADVANCE(82);
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 88:
      if (lookahead == 'I') ADVANCE(95);
      if (lookahead == 'T') ADVANCE(66);
      END_STATE();
    case 89:
      if (lookahead == 'I') ADVANCE(72);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(104);
      END_STATE();
    case 91:
      if (lookahead == 'I') ADVANCE(117);
      END_STATE();
    case 92:
      if (lookahead == 'I') ADVANCE(73);
      END_STATE();
    case 93:
      if (lookahead == 'L') ADVANCE(79);
      END_STATE();
    case 94:
      if (lookahead == 'L') ADVANCE(260);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(261);
      END_STATE();
    case 96:
      if (lookahead == 'M') ADVANCE(68);
      END_STATE();
    case 97:
      if (lookahead == 'N') ADVANCE(254);
      END_STATE();
    case 98:
      if (lookahead == 'N') ADVANCE(258);
      END_STATE();
    case 99:
      if (lookahead == 'N') ADVANCE(115);
      END_STATE();
    case 100:
      if (lookahead == 'N') ADVANCE(70);
      END_STATE();
    case 101:
      if (lookahead == 'N') ADVANCE(83);
      END_STATE();
    case 102:
      if (lookahead == 'O') ADVANCE(116);
      END_STATE();
    case 103:
      if (lookahead == 'O') ADVANCE(255);
      END_STATE();
    case 104:
      if (lookahead == 'O') ADVANCE(97);
      END_STATE();
    case 105:
      if (lookahead == 'O') ADVANCE(106);
      END_STATE();
    case 106:
      if (lookahead == 'R') ADVANCE(260);
      END_STATE();
    case 107:
      if (lookahead == 'R') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 108:
      if (lookahead == 'R') ADVANCE(91);
      END_STATE();
    case 109:
      if (lookahead == 'R') ADVANCE(105);
      END_STATE();
    case 110:
      if (lookahead == 'R') ADVANCE(98);
      END_STATE();
    case 111:
      if (lookahead == 'R') ADVANCE(85);
      END_STATE();
    case 112:
      if (lookahead == 'R') ADVANCE(114);
      END_STATE();
    case 113:
      if (lookahead == 'R') ADVANCE(75);
      END_STATE();
    case 114:
      if (lookahead == 'T') ADVANCE(260);
      END_STATE();
    case 115:
      if (lookahead == 'T') ADVANCE(254);
      END_STATE();
    case 116:
      if (lookahead == 'T') ADVANCE(92);
      END_STATE();
    case 117:
      if (lookahead == 'T') ADVANCE(89);
      END_STATE();
    case 118:
      if (lookahead == 'T') ADVANCE(90);
      END_STATE();
    case 119:
      if (lookahead == 'U') ADVANCE(84);
      END_STATE();
    case 120:
      if (lookahead == 'Y') ADVANCE(260);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(131);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(141);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(143);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(158);
      END_STATE();
    case 127:
      if (lookahead == 'b') ADVANCE(139);
      if (lookahead == 'e') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 128:
      if (lookahead == 'b') ADVANCE(165);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 129:
      if (lookahead == 'b') ADVANCE(252);
      END_STATE();
    case 130:
      if (lookahead == 'b') ADVANCE(164);
      END_STATE();
    case 131:
      if (lookahead == 'c') ADVANCE(133);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(312);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 135:
      if (lookahead == 'f') ADVANCE(149);
      END_STATE();
    case 136:
      if (lookahead == 'f') ADVANCE(150);
      END_STATE();
    case 137:
      if (lookahead == 'g') ADVANCE(257);
      END_STATE();
    case 138:
      if (lookahead == 'g') ADVANCE(253);
      END_STATE();
    case 139:
      if (lookahead == 'g') ADVANCE(253);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 140:
      if (lookahead == 'i') ADVANCE(151);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(260);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(160);
      if (lookahead == 't') ADVANCE(123);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 143:
      if (lookahead == 'l') ADVANCE(160);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(125);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(254);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(259);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 149:
      if (lookahead == 'o') ADVANCE(254);
      END_STATE();
    case 150:
      if (lookahead == 'o') ADVANCE(256);
      END_STATE();
    case 151:
      if (lookahead == 'o') ADVANCE(145);
      END_STATE();
    case 152:
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 153:
      if (lookahead == 'o') ADVANCE(154);
      if (lookahead == 'r') ADVANCE(262);
      END_STATE();
    case 154:
      if (lookahead == 'r') ADVANCE(260);
      END_STATE();
    case 155:
      if (lookahead == 'r') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 156:
      if (lookahead == 'r') ADVANCE(166);
      END_STATE();
    case 157:
      if (lookahead == 'r') ADVANCE(152);
      END_STATE();
    case 158:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 159:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 160:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 161:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 162:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 163:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 164:
      if (lookahead == 'u') ADVANCE(138);
      END_STATE();
    case 165:
      if (lookahead == 'u') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      END_STATE();
    case 166:
      if (lookahead == 'u') ADVANCE(132);
      END_STATE();
    case 167:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(168);
      END_STATE();
    case 168:
      if (lookahead == ' ' ||
          lookahead == 'T' ||
          lookahead == 't') ADVANCE(246);
      END_STATE();
    case 169:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(40);
      END_STATE();
    case 170:
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(41);
      if (('3' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 171:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(63);
      END_STATE();
    case 172:
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(61);
      END_STATE();
    case 173:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(180);
      END_STATE();
    case 174:
      if (('0' <= lookahead && lookahead <= '5')) ADVANCE(184);
      END_STATE();
    case 175:
      if (lookahead == '0' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 176:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 177:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 178:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 179:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 180:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 181:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(168);
      END_STATE();
    case 182:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(273);
      END_STATE();
    case 183:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(248);
      END_STATE();
    case 184:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(247);
      END_STATE();
    case 185:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 186:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(63);
      END_STATE();
    case 187:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 188:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 189:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      END_STATE();
    case 190:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      END_STATE();
    case 191:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(266);
      END_STATE();
    case 192:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      END_STATE();
    case 193:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 194:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(193);
      END_STATE();
    case 195:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      END_STATE();
    case 196:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(191);
      END_STATE();
    case 197:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      END_STATE();
    case 198:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(194);
      END_STATE();
    case 199:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      END_STATE();
    case 200:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(196);
      END_STATE();
    case 201:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      END_STATE();
    case 202:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(198);
      END_STATE();
    case 203:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      END_STATE();
    case 204:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(200);
      END_STATE();
    case 205:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      END_STATE();
    case 206:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      END_STATE();
    case 211:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(204);
      END_STATE();
    case 212:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      END_STATE();
    case 213:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 214:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(213);
      END_STATE();
    case 215:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(214);
      END_STATE();
    case 216:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(215);
      END_STATE();
    case 217:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      END_STATE();
    case 218:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(211);
      END_STATE();
    case 219:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 220:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      END_STATE();
    case 221:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(218);
      END_STATE();
    case 222:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      END_STATE();
    case 223:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(221);
      END_STATE();
    case 224:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      END_STATE();
    case 225:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(223);
      END_STATE();
    case 226:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      END_STATE();
    case 227:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(225);
      END_STATE();
    case 228:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      END_STATE();
    case 229:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(227);
      END_STATE();
    case 230:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      END_STATE();
    case 231:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(229);
      END_STATE();
    case 232:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      END_STATE();
    case 233:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      END_STATE();
    case 234:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      END_STATE();
    case 235:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      END_STATE();
    case 236:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      END_STATE();
    case 237:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      END_STATE();
    case 238:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      END_STATE();
    case 239:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      END_STATE();
    case 240:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      END_STATE();
    case 241:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      END_STATE();
    case 242:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      END_STATE();
    case 243:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 244:
      if (eof) ADVANCE(245);
      if (lookahead == '"') ADVANCE(263);
      if (lookahead == '#') ADVANCE(243);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 't') ADVANCE(156);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (('a' <= lookahead && lookahead <= 'e')) ADVANCE(219);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_year_month_date);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_time_with_offset);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_time_without_offset);
      if (lookahead == '.') ADVANCE(185);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(57);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(247);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_time_without_offset);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(57);
      if (lookahead == 'Z' ||
          lookahead == 'z') ADVANCE(247);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_trace_level);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_trace_level);
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_debug_level);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_info_level);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_info_level);
      if (lookahead == 'R') ADVANCE(96);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_info_level);
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_warning_level);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_warning_level);
      if (lookahead == 'I') ADVANCE(101);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_warning_level);
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_error_level);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_error_level);
      if (lookahead == 'U') ADVANCE(113);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_error_level);
      if (lookahead == 'o') ADVANCE(154);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(264);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(265);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(aux_sym_quoted_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"') ADVANCE(265);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(aux_sym__uuid_token1);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(aux_sym__uuid_token2);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(aux_sym__uuid_token2);
      if (lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(aux_sym__uuid_token2);
      if (lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(aux_sym__ipv4_token1);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(aux_sym__ipv4_token1);
      if (lookahead == '/') ADVANCE(59);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(aux_sym__ipv4_token1);
      if (lookahead == '/') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(271);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(aux_sym__ipv4_token1);
      if (lookahead == '/') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(272);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(aux_sym__ipv4_token1);
      if (('0' <= lookahead && lookahead <= '2')) ADVANCE(270);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(aux_sym__ipv4_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(270);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(aux_sym__ipv4_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(276);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(179);
      if (lookahead == ':') ADVANCE(173);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(179);
      if (('0' <= lookahead && lookahead <= '3')) ADVANCE(277);
      if (('4' <= lookahead && lookahead <= '9')) ADVANCE(280);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(201);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(289);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(205);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(279);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(277);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '.') ADVANCE(179);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(212);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(280);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(267);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(269);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(189);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(283);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(190);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(284);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(192);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(285);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(195);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(286);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(287);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(199);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(288);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(203);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(290);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(210);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(291);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(217);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(292);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(220);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(293);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(222);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(294);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(224);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(226);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(228);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(297);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(230);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(298);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(232);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(233);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(300);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(234);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(235);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(302);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(236);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(303);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(237);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(304);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(238);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(305);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(239);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(306);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(240);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(307);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(241);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(308);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_constant_token1);
      if (lookahead == '-') ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(242);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(aux_sym_constant_token2);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 244},
  [3] = {.lex_state = 244},
  [4] = {.lex_state = 244},
  [5] = {.lex_state = 244},
  [6] = {.lex_state = 244},
  [7] = {.lex_state = 244},
  [8] = {.lex_state = 244},
  [9] = {.lex_state = 244},
  [10] = {.lex_state = 244},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 58},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 58},
  [20] = {.lex_state = 0},
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
    [aux_sym__uuid_token1] = ACTIONS(1),
    [aux_sym__uuid_token2] = ACTIONS(1),
    [aux_sym__ipv4_token1] = ACTIONS(1),
    [aux_sym__ipv4_token2] = ACTIONS(1),
    [aux_sym_constant_token1] = ACTIONS(1),
    [aux_sym_constant_token2] = ACTIONS(1),
  },
  [1] = {
    [sym_logs] = STATE(20),
    [sym__logline] = STATE(13),
    [sym_log_date] = STATE(16),
    [aux_sym_logs_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_year_month_date] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__ipv4_token1,
    ACTIONS(13), 2,
      aux_sym__uuid_token1,
      aux_sym_constant_token2,
    ACTIONS(15), 2,
      aux_sym__uuid_token2,
      aux_sym_constant_token1,
    STATE(8), 2,
      sym__uuid,
      sym__ipv4,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      sym_year_month_date,
      sym_comment,
    STATE(4), 4,
      sym_quoted_string,
      sym__important,
      sym_constant,
      aux_sym__logline_repeat1,
  [30] = 7,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(30), 1,
      aux_sym__ipv4_token1,
    ACTIONS(24), 2,
      aux_sym__uuid_token1,
      aux_sym_constant_token2,
    ACTIONS(27), 2,
      aux_sym__uuid_token2,
      aux_sym_constant_token1,
    STATE(8), 2,
      sym__uuid,
      sym__ipv4,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      sym_year_month_date,
      sym_comment,
    STATE(3), 4,
      sym_quoted_string,
      sym__important,
      sym_constant,
      aux_sym__logline_repeat1,
  [60] = 7,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(17), 1,
      aux_sym__ipv4_token1,
    ACTIONS(13), 2,
      aux_sym__uuid_token1,
      aux_sym_constant_token2,
    ACTIONS(15), 2,
      aux_sym__uuid_token2,
      aux_sym_constant_token1,
    STATE(8), 2,
      sym__uuid,
      sym__ipv4,
    ACTIONS(33), 3,
      ts_builtin_sym_end,
      sym_year_month_date,
      sym_comment,
    STATE(3), 4,
      sym_quoted_string,
      sym__important,
      sym_constant,
      aux_sym__logline_repeat1,
  [90] = 3,
    ACTIONS(39), 1,
      aux_sym__ipv4_token2,
    ACTIONS(37), 2,
      aux_sym__uuid_token2,
      aux_sym_constant_token1,
    ACTIONS(35), 7,
      ts_builtin_sym_end,
      sym_year_month_date,
      sym_comment,
      anon_sym_DQUOTE,
      aux_sym__uuid_token1,
      aux_sym__ipv4_token1,
      aux_sym_constant_token2,
  [107] = 2,
    ACTIONS(43), 2,
      aux_sym__uuid_token2,
      aux_sym_constant_token1,
    ACTIONS(41), 7,
      ts_builtin_sym_end,
      sym_year_month_date,
      sym_comment,
      anon_sym_DQUOTE,
      aux_sym__uuid_token1,
      aux_sym__ipv4_token1,
      aux_sym_constant_token2,
  [121] = 2,
    ACTIONS(47), 2,
      aux_sym__uuid_token2,
      aux_sym_constant_token1,
    ACTIONS(45), 7,
      ts_builtin_sym_end,
      sym_year_month_date,
      sym_comment,
      anon_sym_DQUOTE,
      aux_sym__uuid_token1,
      aux_sym__ipv4_token1,
      aux_sym_constant_token2,
  [135] = 2,
    ACTIONS(51), 2,
      aux_sym__uuid_token2,
      aux_sym_constant_token1,
    ACTIONS(49), 7,
      ts_builtin_sym_end,
      sym_year_month_date,
      sym_comment,
      anon_sym_DQUOTE,
      aux_sym__uuid_token1,
      aux_sym__ipv4_token1,
      aux_sym_constant_token2,
  [149] = 2,
    ACTIONS(55), 2,
      aux_sym__uuid_token2,
      aux_sym_constant_token1,
    ACTIONS(53), 7,
      ts_builtin_sym_end,
      sym_year_month_date,
      sym_comment,
      anon_sym_DQUOTE,
      aux_sym__uuid_token1,
      aux_sym__ipv4_token1,
      aux_sym_constant_token2,
  [163] = 2,
    ACTIONS(59), 2,
      aux_sym__uuid_token2,
      aux_sym_constant_token1,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      sym_year_month_date,
      sym_comment,
      anon_sym_DQUOTE,
      aux_sym__uuid_token1,
      aux_sym__ipv4_token1,
      aux_sym_constant_token2,
  [177] = 2,
    STATE(2), 1,
      sym_level,
    ACTIONS(61), 5,
      sym_trace_level,
      sym_debug_level,
      sym_info_level,
      sym_warning_level,
      sym_error_level,
  [188] = 5,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      sym_year_month_date,
    ACTIONS(68), 1,
      sym_comment,
    STATE(16), 1,
      sym_log_date,
    STATE(12), 2,
      sym__logline,
      aux_sym_logs_repeat1,
  [205] = 5,
    ACTIONS(5), 1,
      sym_year_month_date,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 1,
      sym_comment,
    STATE(16), 1,
      sym_log_date,
    STATE(12), 2,
      sym__logline,
      aux_sym_logs_repeat1,
  [222] = 1,
    ACTIONS(75), 5,
      sym_trace_level,
      sym_debug_level,
      sym_info_level,
      sym_warning_level,
      sym_error_level,
  [230] = 3,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      aux_sym_quoted_string_token1,
    STATE(17), 1,
      aux_sym_quoted_string_repeat1,
  [240] = 3,
    ACTIONS(81), 1,
      sym_time_with_offset,
    ACTIONS(83), 1,
      sym_time_without_offset,
    STATE(11), 1,
      sym_log_time,
  [250] = 3,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      aux_sym_quoted_string_token1,
    STATE(18), 1,
      aux_sym_quoted_string_repeat1,
  [260] = 3,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      aux_sym_quoted_string_token1,
    STATE(18), 1,
      aux_sym_quoted_string_repeat1,
  [270] = 2,
    ACTIONS(94), 1,
      sym_time_with_offset,
    ACTIONS(96), 1,
      sym_time_without_offset,
  [277] = 1,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 121,
  [SMALL_STATE(8)] = 135,
  [SMALL_STATE(9)] = 149,
  [SMALL_STATE(10)] = 163,
  [SMALL_STATE(11)] = 177,
  [SMALL_STATE(12)] = 188,
  [SMALL_STATE(13)] = 205,
  [SMALL_STATE(14)] = 222,
  [SMALL_STATE(15)] = 230,
  [SMALL_STATE(16)] = 240,
  [SMALL_STATE(17)] = 250,
  [SMALL_STATE(18)] = 260,
  [SMALL_STATE(19)] = 270,
  [SMALL_STATE(20)] = 277,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logs, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logline, 3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__logline_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__logline_repeat1, 2), SHIFT_REPEAT(15),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__logline_repeat1, 2), SHIFT_REPEAT(8),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__logline_repeat1, 2), SHIFT_REPEAT(8),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__logline_repeat1, 2), SHIFT_REPEAT(5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__logline, 4),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipv4, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ipv4, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_level, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_level, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 1),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__ipv4, 2),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__ipv4, 2),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 2),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 2), SHIFT_REPEAT(19),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_logs_repeat1, 2), SHIFT_REPEAT(12),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_logs, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_time, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_quoted_string_repeat1, 2),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_quoted_string_repeat1, 2), SHIFT_REPEAT(18),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_log_date, 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_log_date, 1),
  [98] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
