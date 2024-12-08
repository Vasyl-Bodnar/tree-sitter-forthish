#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_word = 1,
  aux_sym_source_file_token1 = 2,
  sym_number = 3,
  sym_constant = 4,
  sym_string = 5,
  sym_comment = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  anon_sym_COLON = 9,
  aux_sym_module_token1 = 10,
  anon_sym_SEMI = 11,
  sym_source_file = 12,
  sym__expression = 13,
  sym_quote = 14,
  sym_module = 15,
  sym_function = 16,
  sym_modcall = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym_modcall_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_word] = "word",
  [aux_sym_source_file_token1] = "source_file_token1",
  [sym_number] = "number",
  [sym_constant] = "constant",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [aux_sym_module_token1] = "module_token1",
  [anon_sym_SEMI] = ";",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym_quote] = "quote",
  [sym_module] = "module",
  [sym_function] = "function",
  [sym_modcall] = "modcall",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_modcall_repeat1] = "modcall_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_word] = sym_word,
  [aux_sym_source_file_token1] = aux_sym_source_file_token1,
  [sym_number] = sym_number,
  [sym_constant] = sym_constant,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_module_token1] = aux_sym_module_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym_quote] = sym_quote,
  [sym_module] = sym_module,
  [sym_function] = sym_function,
  [sym_modcall] = sym_modcall,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_modcall_repeat1] = aux_sym_modcall_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_word] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_module_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_modcall] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modcall_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_fn = 1,
  field_name = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_fn] = "fn",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_fn, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_name, 2},
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
  [5] = 2,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 12,
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
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 32,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (eof) ADVANCE(6);
      if (lookahead == ':') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(22);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(22);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(10);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(22);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '(') ADVANCE(20);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead != 0) ADVANCE(22);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == ':') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(8);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(22);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(22);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(20);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(22);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(22);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_module_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == '"') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(2);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == ':' ||
          lookahead == ';') ADVANCE(3);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '0' || ';' < lookahead)) ADVANCE(22);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != ':' &&
          lookahead != ';') ADVANCE(22);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == 'u') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 's') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_constant);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [sym_constant] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_module_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(24),
    [aux_sym_source_file_token1] = ACTIONS(3),
  },
  [2] = {
    [sym__expression] = STATE(32),
    [sym_quote] = STATE(32),
    [sym_module] = STATE(32),
    [sym_function] = STATE(32),
    [sym_modcall] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_modcall_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_word] = ACTIONS(7),
    [sym_number] = ACTIONS(10),
    [sym_constant] = ACTIONS(10),
    [sym_string] = ACTIONS(10),
    [sym_comment] = ACTIONS(13),
    [anon_sym_LBRACK] = ACTIONS(16),
    [anon_sym_COLON] = ACTIONS(19),
    [anon_sym_SEMI] = ACTIONS(5),
  },
  [3] = {
    [sym__expression] = STATE(32),
    [sym_quote] = STATE(32),
    [sym_module] = STATE(32),
    [sym_function] = STATE(32),
    [sym_modcall] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(8),
    [aux_sym_modcall_repeat1] = STATE(15),
    [sym_word] = ACTIONS(22),
    [sym_number] = ACTIONS(24),
    [sym_constant] = ACTIONS(24),
    [sym_string] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
    [anon_sym_LBRACK] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(30),
    [anon_sym_SEMI] = ACTIONS(32),
  },
  [4] = {
    [sym__expression] = STATE(32),
    [sym_quote] = STATE(32),
    [sym_module] = STATE(32),
    [sym_function] = STATE(32),
    [sym_modcall] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(10),
    [aux_sym_modcall_repeat1] = STATE(15),
    [sym_word] = ACTIONS(22),
    [sym_number] = ACTIONS(24),
    [sym_constant] = ACTIONS(24),
    [sym_string] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
    [anon_sym_LBRACK] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(30),
    [anon_sym_SEMI] = ACTIONS(34),
  },
  [5] = {
    [sym__expression] = STATE(33),
    [sym_quote] = STATE(33),
    [sym_module] = STATE(33),
    [sym_function] = STATE(33),
    [sym_modcall] = STATE(33),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_modcall_repeat1] = STATE(15),
    [sym_word] = ACTIONS(7),
    [sym_number] = ACTIONS(36),
    [sym_constant] = ACTIONS(36),
    [sym_string] = ACTIONS(36),
    [sym_comment] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(16),
    [anon_sym_RBRACK] = ACTIONS(42),
    [anon_sym_COLON] = ACTIONS(19),
  },
  [6] = {
    [sym__expression] = STATE(32),
    [sym_quote] = STATE(32),
    [sym_module] = STATE(32),
    [sym_function] = STATE(32),
    [sym_modcall] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_modcall_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(44),
    [sym_word] = ACTIONS(22),
    [sym_number] = ACTIONS(24),
    [sym_constant] = ACTIONS(24),
    [sym_string] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
    [anon_sym_LBRACK] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(30),
  },
  [7] = {
    [sym__expression] = STATE(33),
    [sym_quote] = STATE(33),
    [sym_module] = STATE(33),
    [sym_function] = STATE(33),
    [sym_modcall] = STATE(33),
    [aux_sym_source_file_repeat1] = STATE(11),
    [aux_sym_modcall_repeat1] = STATE(15),
    [sym_word] = ACTIONS(22),
    [sym_number] = ACTIONS(46),
    [sym_constant] = ACTIONS(46),
    [sym_string] = ACTIONS(46),
    [sym_comment] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(28),
    [anon_sym_RBRACK] = ACTIONS(50),
    [anon_sym_COLON] = ACTIONS(30),
  },
  [8] = {
    [sym__expression] = STATE(32),
    [sym_quote] = STATE(32),
    [sym_module] = STATE(32),
    [sym_function] = STATE(32),
    [sym_modcall] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_modcall_repeat1] = STATE(15),
    [sym_word] = ACTIONS(22),
    [sym_number] = ACTIONS(24),
    [sym_constant] = ACTIONS(24),
    [sym_string] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
    [anon_sym_LBRACK] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(30),
    [anon_sym_SEMI] = ACTIONS(52),
  },
  [9] = {
    [sym__expression] = STATE(32),
    [sym_quote] = STATE(32),
    [sym_module] = STATE(32),
    [sym_function] = STATE(32),
    [sym_modcall] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(6),
    [aux_sym_modcall_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(54),
    [sym_word] = ACTIONS(22),
    [sym_number] = ACTIONS(24),
    [sym_constant] = ACTIONS(24),
    [sym_string] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
    [anon_sym_LBRACK] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(30),
  },
  [10] = {
    [sym__expression] = STATE(32),
    [sym_quote] = STATE(32),
    [sym_module] = STATE(32),
    [sym_function] = STATE(32),
    [sym_modcall] = STATE(32),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_modcall_repeat1] = STATE(15),
    [sym_word] = ACTIONS(22),
    [sym_number] = ACTIONS(24),
    [sym_constant] = ACTIONS(24),
    [sym_string] = ACTIONS(24),
    [sym_comment] = ACTIONS(26),
    [anon_sym_LBRACK] = ACTIONS(28),
    [anon_sym_COLON] = ACTIONS(30),
    [anon_sym_SEMI] = ACTIONS(56),
  },
  [11] = {
    [sym__expression] = STATE(33),
    [sym_quote] = STATE(33),
    [sym_module] = STATE(33),
    [sym_function] = STATE(33),
    [sym_modcall] = STATE(33),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_modcall_repeat1] = STATE(15),
    [sym_word] = ACTIONS(22),
    [sym_number] = ACTIONS(46),
    [sym_constant] = ACTIONS(46),
    [sym_string] = ACTIONS(46),
    [sym_comment] = ACTIONS(48),
    [anon_sym_LBRACK] = ACTIONS(28),
    [anon_sym_RBRACK] = ACTIONS(58),
    [anon_sym_COLON] = ACTIONS(30),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(5), 4,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_COLON,
      anon_sym_SEMI,
    ACTIONS(42), 5,
      sym_number,
      sym_constant,
      sym_string,
      anon_sym_LBRACK,
      sym_word,
  [14] = 2,
    ACTIONS(5), 2,
      sym_comment,
      anon_sym_COLON,
    ACTIONS(42), 6,
      sym_number,
      sym_constant,
      sym_string,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_word,
  [27] = 2,
    ACTIONS(60), 1,
      aux_sym_source_file_token1,
    ACTIONS(62), 1,
      anon_sym_COLON,
  [34] = 2,
    ACTIONS(64), 1,
      sym_word,
    STATE(18), 1,
      aux_sym_modcall_repeat1,
  [41] = 2,
    ACTIONS(66), 1,
      sym_word,
    ACTIONS(68), 1,
      aux_sym_module_token1,
  [48] = 2,
    ACTIONS(70), 1,
      aux_sym_source_file_token1,
    ACTIONS(72), 1,
      anon_sym_COLON,
  [55] = 2,
    ACTIONS(74), 1,
      sym_word,
    STATE(18), 1,
      aux_sym_modcall_repeat1,
  [62] = 1,
    ACTIONS(77), 1,
      aux_sym_module_token1,
  [66] = 1,
    ACTIONS(66), 1,
      sym_word,
  [70] = 1,
    ACTIONS(79), 1,
      aux_sym_source_file_token1,
  [74] = 1,
    ACTIONS(72), 1,
      anon_sym_COLON,
  [78] = 1,
    ACTIONS(81), 1,
      aux_sym_source_file_token1,
  [82] = 1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
  [86] = 1,
    ACTIONS(85), 1,
      aux_sym_source_file_token1,
  [90] = 1,
    ACTIONS(87), 1,
      aux_sym_source_file_token1,
  [94] = 1,
    ACTIONS(89), 1,
      aux_sym_source_file_token1,
  [98] = 1,
    ACTIONS(91), 1,
      aux_sym_source_file_token1,
  [102] = 1,
    ACTIONS(93), 1,
      aux_sym_source_file_token1,
  [106] = 1,
    ACTIONS(95), 1,
      aux_sym_source_file_token1,
  [110] = 1,
    ACTIONS(97), 1,
      sym_word,
  [114] = 1,
    ACTIONS(99), 1,
      aux_sym_source_file_token1,
  [118] = 1,
    ACTIONS(101), 1,
      aux_sym_source_file_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 14,
  [SMALL_STATE(14)] = 27,
  [SMALL_STATE(15)] = 34,
  [SMALL_STATE(16)] = 41,
  [SMALL_STATE(17)] = 48,
  [SMALL_STATE(18)] = 55,
  [SMALL_STATE(19)] = 62,
  [SMALL_STATE(20)] = 66,
  [SMALL_STATE(21)] = 70,
  [SMALL_STATE(22)] = 74,
  [SMALL_STATE(23)] = 78,
  [SMALL_STATE(24)] = 82,
  [SMALL_STATE(25)] = 86,
  [SMALL_STATE(26)] = 90,
  [SMALL_STATE(27)] = 94,
  [SMALL_STATE(28)] = 98,
  [SMALL_STATE(29)] = 102,
  [SMALL_STATE(30)] = 106,
  [SMALL_STATE(31)] = 110,
  [SMALL_STATE(32)] = 114,
  [SMALL_STATE(33)] = 118,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [7] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [10] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modcall_repeat1, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modcall, 2, 0, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modcall_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 4, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, 0, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, 0, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, 0, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, 0, 3),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_forthish(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_word,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
