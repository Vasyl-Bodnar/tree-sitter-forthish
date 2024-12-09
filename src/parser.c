#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 26
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 20
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  sym_word = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  anon_sym_COLON = 4,
  aux_sym_module_token1 = 5,
  anon_sym_SEMI = 6,
  anon_sym_COLON2 = 7,
  sym_number = 8,
  sym_constant = 9,
  sym_string = 10,
  sym_comment = 11,
  sym_source_file = 12,
  sym_quote = 13,
  sym_modcall = 14,
  sym_module = 15,
  sym_function = 16,
  sym__expression = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym_modcall_repeat1 = 19,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_word] = "word",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COLON] = ":",
  [aux_sym_module_token1] = "module_token1",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON2] = ":",
  [sym_number] = "number",
  [sym_constant] = "constant",
  [sym_string] = "string",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym_quote] = "quote",
  [sym_modcall] = "modcall",
  [sym_module] = "module",
  [sym_function] = "function",
  [sym__expression] = "_expression",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_modcall_repeat1] = "modcall_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_word] = sym_word,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_module_token1] = aux_sym_module_token1,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON2] = anon_sym_COLON,
  [sym_number] = sym_number,
  [sym_constant] = sym_constant,
  [sym_string] = sym_string,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym_quote] = sym_quote,
  [sym_modcall] = sym_modcall,
  [sym_module] = sym_module,
  [sym_function] = sym_function,
  [sym__expression] = sym__expression,
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
  [anon_sym_COLON2] = {
    .visible = true,
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_quote] = {
    .visible = true,
    .named = true,
  },
  [sym_modcall] = {
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
  [sym__expression] = {
    .visible = false,
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
    {field_name, 1},
  [2] =
    {field_name, 0},
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

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(6);
      ADVANCE_MAP(
        '"', 1,
        '(', 2,
        ':', 9,
        ';', 11,
        '[', 7,
        ']', 8,
        '+', 16,
        '-', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(14);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(15);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(17);
      END_STATE();
    case 4:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(17);
      END_STATE();
    case 5:
      if (eof) ADVANCE(6);
      ADVANCE_MAP(
        '"', 1,
        '(', 2,
        ':', 12,
        ';', 11,
        '[', 7,
        ']', 8,
        '+', 16,
        '-', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')') ADVANCE(17);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_module_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON2);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || ';' < lookahead) &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(17);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || ';' < lookahead) &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(17);
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
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
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
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 4},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_word] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON2] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_constant] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(23),
    [sym_quote] = STATE(3),
    [sym_modcall] = STATE(3),
    [sym_module] = STATE(3),
    [sym_function] = STATE(3),
    [sym__expression] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_modcall_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_word] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_COLON2] = ACTIONS(9),
    [sym_number] = ACTIONS(11),
    [sym_constant] = ACTIONS(11),
    [sym_string] = ACTIONS(13),
    [sym_comment] = ACTIONS(13),
  },
  [2] = {
    [sym_quote] = STATE(2),
    [sym_modcall] = STATE(2),
    [sym_module] = STATE(2),
    [sym_function] = STATE(2),
    [sym__expression] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_modcall_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym_word] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(20),
    [anon_sym_RBRACK] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(15),
    [anon_sym_COLON2] = ACTIONS(23),
    [sym_number] = ACTIONS(26),
    [sym_constant] = ACTIONS(26),
    [sym_string] = ACTIONS(29),
    [sym_comment] = ACTIONS(29),
  },
  [3] = {
    [sym_quote] = STATE(2),
    [sym_modcall] = STATE(2),
    [sym_module] = STATE(2),
    [sym_function] = STATE(2),
    [sym__expression] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_modcall_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(32),
    [sym_word] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_COLON2] = ACTIONS(9),
    [sym_number] = ACTIONS(34),
    [sym_constant] = ACTIONS(34),
    [sym_string] = ACTIONS(36),
    [sym_comment] = ACTIONS(36),
  },
  [4] = {
    [sym_quote] = STATE(2),
    [sym_modcall] = STATE(2),
    [sym_module] = STATE(2),
    [sym_function] = STATE(2),
    [sym__expression] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_modcall_repeat1] = STATE(20),
    [sym_word] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(38),
    [anon_sym_COLON2] = ACTIONS(9),
    [sym_number] = ACTIONS(34),
    [sym_constant] = ACTIONS(34),
    [sym_string] = ACTIONS(36),
    [sym_comment] = ACTIONS(36),
  },
  [5] = {
    [sym_quote] = STATE(2),
    [sym_modcall] = STATE(2),
    [sym_module] = STATE(2),
    [sym_function] = STATE(2),
    [sym__expression] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_modcall_repeat1] = STATE(20),
    [sym_word] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(40),
    [anon_sym_COLON2] = ACTIONS(9),
    [sym_number] = ACTIONS(34),
    [sym_constant] = ACTIONS(34),
    [sym_string] = ACTIONS(36),
    [sym_comment] = ACTIONS(36),
  },
  [6] = {
    [sym_quote] = STATE(4),
    [sym_modcall] = STATE(4),
    [sym_module] = STATE(4),
    [sym_function] = STATE(4),
    [sym__expression] = STATE(4),
    [aux_sym_source_file_repeat1] = STATE(4),
    [aux_sym_modcall_repeat1] = STATE(20),
    [sym_word] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(42),
    [anon_sym_COLON2] = ACTIONS(9),
    [sym_number] = ACTIONS(44),
    [sym_constant] = ACTIONS(44),
    [sym_string] = ACTIONS(46),
    [sym_comment] = ACTIONS(46),
  },
  [7] = {
    [sym_quote] = STATE(2),
    [sym_modcall] = STATE(2),
    [sym_module] = STATE(2),
    [sym_function] = STATE(2),
    [sym__expression] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_modcall_repeat1] = STATE(20),
    [sym_word] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(48),
    [anon_sym_COLON2] = ACTIONS(9),
    [sym_number] = ACTIONS(34),
    [sym_constant] = ACTIONS(34),
    [sym_string] = ACTIONS(36),
    [sym_comment] = ACTIONS(36),
  },
  [8] = {
    [sym_quote] = STATE(7),
    [sym_modcall] = STATE(7),
    [sym_module] = STATE(7),
    [sym_function] = STATE(7),
    [sym__expression] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [aux_sym_modcall_repeat1] = STATE(20),
    [sym_word] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(50),
    [anon_sym_COLON2] = ACTIONS(9),
    [sym_number] = ACTIONS(52),
    [sym_constant] = ACTIONS(52),
    [sym_string] = ACTIONS(54),
    [sym_comment] = ACTIONS(54),
  },
  [9] = {
    [sym_quote] = STATE(5),
    [sym_modcall] = STATE(5),
    [sym_module] = STATE(5),
    [sym_function] = STATE(5),
    [sym__expression] = STATE(5),
    [aux_sym_source_file_repeat1] = STATE(5),
    [aux_sym_modcall_repeat1] = STATE(20),
    [sym_word] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(56),
    [anon_sym_COLON2] = ACTIONS(9),
    [sym_number] = ACTIONS(58),
    [sym_constant] = ACTIONS(58),
    [sym_string] = ACTIONS(60),
    [sym_comment] = ACTIONS(60),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(62),
    [sym_word] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(62),
    [anon_sym_RBRACK] = ACTIONS(62),
    [anon_sym_COLON] = ACTIONS(66),
    [anon_sym_SEMI] = ACTIONS(62),
    [anon_sym_COLON2] = ACTIONS(64),
    [sym_number] = ACTIONS(64),
    [sym_constant] = ACTIONS(64),
    [sym_string] = ACTIONS(62),
    [sym_comment] = ACTIONS(62),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(68),
    [sym_word] = ACTIONS(70),
    [anon_sym_LBRACK] = ACTIONS(68),
    [anon_sym_RBRACK] = ACTIONS(68),
    [anon_sym_COLON] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(68),
    [anon_sym_COLON2] = ACTIONS(70),
    [sym_number] = ACTIONS(70),
    [sym_constant] = ACTIONS(70),
    [sym_string] = ACTIONS(68),
    [sym_comment] = ACTIONS(68),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(76), 3,
      sym_number,
      sym_constant,
      sym_word,
    ACTIONS(74), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_COLON2,
      sym_string,
      sym_comment,
  [15] = 2,
    ACTIONS(80), 3,
      sym_number,
      sym_constant,
      sym_word,
    ACTIONS(78), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_COLON2,
      sym_string,
      sym_comment,
  [30] = 2,
    ACTIONS(84), 3,
      sym_number,
      sym_constant,
      sym_word,
    ACTIONS(82), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_COLON2,
      sym_string,
      sym_comment,
  [45] = 2,
    ACTIONS(88), 3,
      sym_number,
      sym_constant,
      sym_word,
    ACTIONS(86), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_COLON2,
      sym_string,
      sym_comment,
  [60] = 2,
    ACTIONS(92), 3,
      sym_number,
      sym_constant,
      sym_word,
    ACTIONS(90), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_COLON2,
      sym_string,
      sym_comment,
  [75] = 2,
    ACTIONS(96), 3,
      sym_number,
      sym_constant,
      sym_word,
    ACTIONS(94), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_SEMI,
      anon_sym_COLON2,
      sym_string,
      sym_comment,
  [90] = 2,
    ACTIONS(98), 1,
      sym_word,
    STATE(18), 1,
      aux_sym_modcall_repeat1,
  [97] = 2,
    ACTIONS(101), 1,
      sym_word,
    ACTIONS(103), 1,
      aux_sym_module_token1,
  [104] = 2,
    ACTIONS(105), 1,
      sym_word,
    STATE(18), 1,
      aux_sym_modcall_repeat1,
  [111] = 1,
    ACTIONS(72), 1,
      anon_sym_COLON,
  [115] = 1,
    ACTIONS(107), 1,
      sym_word,
  [119] = 1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
  [123] = 1,
    ACTIONS(111), 1,
      sym_word,
  [127] = 1,
    ACTIONS(113), 1,
      aux_sym_module_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 15,
  [SMALL_STATE(14)] = 30,
  [SMALL_STATE(15)] = 45,
  [SMALL_STATE(16)] = 60,
  [SMALL_STATE(17)] = 75,
  [SMALL_STATE(18)] = 90,
  [SMALL_STATE(19)] = 97,
  [SMALL_STATE(20)] = 104,
  [SMALL_STATE(21)] = 111,
  [SMALL_STATE(22)] = 115,
  [SMALL_STATE(23)] = 119,
  [SMALL_STATE(24)] = 123,
  [SMALL_STATE(25)] = 127,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modcall, 2, 0, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modcall, 2, 0, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4, 0, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4, 0, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, 0, 3),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 5, 0, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, 0, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 5, 0, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 2, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, 0, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_module, 4, 0, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quote, 3, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modcall_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_modcall_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modcall_repeat1, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
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
