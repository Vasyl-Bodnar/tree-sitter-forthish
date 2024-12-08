#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 13
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  aux_sym_source_file_token1 = 1,
  sym_number = 2,
  sym_constant = 3,
  sym_string = 4,
  sym_comment = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  anon_sym_COLON = 8,
  aux_sym_module_token1 = 9,
  anon_sym_SEMI = 10,
  sym_word = 11,
  sym_source_file = 12,
  sym__expression = 13,
  sym_quote = 14,
  sym_module = 15,
  sym_function = 16,
  sym_modcall = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym_module_repeat1 = 19,
  aux_sym_modcall_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [sym_word] = "word",
  [sym_source_file] = "source_file",
  [sym__expression] = "_expression",
  [sym_quote] = "quote",
  [sym_module] = "module",
  [sym_function] = "function",
  [sym_modcall] = "modcall",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_modcall_repeat1] = "modcall_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [sym_word] = sym_word,
  [sym_source_file] = sym_source_file,
  [sym__expression] = sym__expression,
  [sym_quote] = sym_quote,
  [sym_module] = sym_module,
  [sym_function] = sym_function,
  [sym_modcall] = sym_modcall,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
  [aux_sym_modcall_repeat1] = aux_sym_modcall_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym_word] = {
    .visible = true,
    .named = true,
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
  [aux_sym_module_repeat1] = {
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
  [5] = 5,
  [6] = 3,
  [7] = 2,
  [8] = 5,
  [9] = 4,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 17,
  [18] = 18,
  [19] = 15,
  [20] = 17,
  [21] = 21,
  [22] = 21,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 25,
  [27] = 23,
  [28] = 24,
  [29] = 29,
  [30] = 29,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 32,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 35,
  [42] = 36,
  [43] = 43,
  [44] = 44,
  [45] = 40,
  [46] = 46,
  [47] = 37,
  [48] = 48,
  [49] = 44,
  [50] = 39,
  [51] = 51,
  [52] = 52,
  [53] = 38,
  [54] = 46,
  [55] = 51,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (eof) ADVANCE(4);
      if (lookahead == ':') ADVANCE(16);
      if (lookahead == ';') ADVANCE(18);
      if (lookahead == ']') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 19,
        '(', 13,
        ':', 16,
        ';', 18,
        '[', 14,
        'f', 20,
        't', 23,
        '+', 26,
        '-', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ']') ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(11);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(27);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == ':') ADVANCE(16);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (lookahead == ']') ADVANCE(15);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(aux_sym_source_file_token1);
      if (eof) ADVANCE(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(7);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || ';' < lookahead) &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(27);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_constant);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(27);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_string);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(27);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACK);
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
      if (lookahead == '"') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '(' ||
          lookahead == ')' ||
          lookahead == ':' ||
          lookahead == ';' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(2);
      if (lookahead != 0) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'a') ADVANCE(22);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(27);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'e') ADVANCE(10);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(27);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'l') ADVANCE(24);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 's') ADVANCE(21);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_word);
      if (lookahead == 'u') ADVANCE(21);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_word);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          (lookahead < '0' || ';' < lookahead) &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_word);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '(' &&
          lookahead != ')' &&
          lookahead != ':' &&
          lookahead != ';' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(27);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 6},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 8},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 8},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 3},
  [55] = {.lex_state = 8},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_source_file_token1] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_module_token1] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(3),
    [aux_sym_source_file_token1] = ACTIONS(5),
  },
  [2] = {
    [sym__expression] = STATE(48),
    [sym_quote] = STATE(48),
    [sym_module] = STATE(48),
    [sym_function] = STATE(48),
    [sym_modcall] = STATE(48),
    [aux_sym_module_repeat1] = STATE(8),
    [aux_sym_modcall_repeat1] = STATE(26),
    [sym_number] = ACTIONS(7),
    [sym_constant] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(15),
    [sym_word] = ACTIONS(17),
  },
  [3] = {
    [sym__expression] = STATE(48),
    [sym_quote] = STATE(48),
    [sym_module] = STATE(48),
    [sym_function] = STATE(48),
    [sym_modcall] = STATE(48),
    [aux_sym_module_repeat1] = STATE(9),
    [aux_sym_modcall_repeat1] = STATE(26),
    [sym_number] = ACTIONS(7),
    [sym_constant] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(19),
    [sym_word] = ACTIONS(17),
  },
  [4] = {
    [sym__expression] = STATE(48),
    [sym_quote] = STATE(48),
    [sym_module] = STATE(48),
    [sym_function] = STATE(48),
    [sym_modcall] = STATE(48),
    [aux_sym_module_repeat1] = STATE(10),
    [aux_sym_modcall_repeat1] = STATE(26),
    [sym_number] = ACTIONS(7),
    [sym_constant] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(21),
    [sym_word] = ACTIONS(17),
  },
  [5] = {
    [sym__expression] = STATE(48),
    [sym_quote] = STATE(48),
    [sym_module] = STATE(48),
    [sym_function] = STATE(48),
    [sym_modcall] = STATE(48),
    [aux_sym_module_repeat1] = STATE(10),
    [aux_sym_modcall_repeat1] = STATE(26),
    [sym_number] = ACTIONS(7),
    [sym_constant] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(23),
    [sym_word] = ACTIONS(17),
  },
  [6] = {
    [sym__expression] = STATE(48),
    [sym_quote] = STATE(48),
    [sym_module] = STATE(48),
    [sym_function] = STATE(48),
    [sym_modcall] = STATE(48),
    [aux_sym_module_repeat1] = STATE(4),
    [aux_sym_modcall_repeat1] = STATE(26),
    [sym_number] = ACTIONS(7),
    [sym_constant] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(25),
    [sym_word] = ACTIONS(17),
  },
  [7] = {
    [sym__expression] = STATE(48),
    [sym_quote] = STATE(48),
    [sym_module] = STATE(48),
    [sym_function] = STATE(48),
    [sym_modcall] = STATE(48),
    [aux_sym_module_repeat1] = STATE(5),
    [aux_sym_modcall_repeat1] = STATE(26),
    [sym_number] = ACTIONS(7),
    [sym_constant] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(27),
    [sym_word] = ACTIONS(17),
  },
  [8] = {
    [sym__expression] = STATE(48),
    [sym_quote] = STATE(48),
    [sym_module] = STATE(48),
    [sym_function] = STATE(48),
    [sym_modcall] = STATE(48),
    [aux_sym_module_repeat1] = STATE(10),
    [aux_sym_modcall_repeat1] = STATE(26),
    [sym_number] = ACTIONS(7),
    [sym_constant] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(29),
    [sym_word] = ACTIONS(17),
  },
  [9] = {
    [sym__expression] = STATE(48),
    [sym_quote] = STATE(48),
    [sym_module] = STATE(48),
    [sym_function] = STATE(48),
    [sym_modcall] = STATE(48),
    [aux_sym_module_repeat1] = STATE(10),
    [aux_sym_modcall_repeat1] = STATE(26),
    [sym_number] = ACTIONS(7),
    [sym_constant] = ACTIONS(7),
    [sym_string] = ACTIONS(7),
    [sym_comment] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_COLON] = ACTIONS(13),
    [anon_sym_SEMI] = ACTIONS(31),
    [sym_word] = ACTIONS(17),
  },
  [10] = {
    [sym__expression] = STATE(48),
    [sym_quote] = STATE(48),
    [sym_module] = STATE(48),
    [sym_function] = STATE(48),
    [sym_modcall] = STATE(48),
    [aux_sym_module_repeat1] = STATE(10),
    [aux_sym_modcall_repeat1] = STATE(26),
    [sym_number] = ACTIONS(33),
    [sym_constant] = ACTIONS(33),
    [sym_string] = ACTIONS(33),
    [sym_comment] = ACTIONS(36),
    [anon_sym_LBRACK] = ACTIONS(39),
    [anon_sym_COLON] = ACTIONS(42),
    [anon_sym_SEMI] = ACTIONS(45),
    [sym_word] = ACTIONS(47),
  },
  [11] = {
    [sym__expression] = STATE(49),
    [sym_quote] = STATE(49),
    [sym_module] = STATE(49),
    [sym_function] = STATE(49),
    [sym_modcall] = STATE(49),
    [aux_sym_modcall_repeat1] = STATE(25),
    [sym_number] = ACTIONS(50),
    [sym_constant] = ACTIONS(50),
    [sym_string] = ACTIONS(50),
    [sym_comment] = ACTIONS(52),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_COLON] = ACTIONS(56),
    [sym_word] = ACTIONS(58),
  },
  [12] = {
    [sym__expression] = STATE(44),
    [sym_quote] = STATE(44),
    [sym_module] = STATE(44),
    [sym_function] = STATE(44),
    [sym_modcall] = STATE(44),
    [aux_sym_modcall_repeat1] = STATE(25),
    [sym_number] = ACTIONS(60),
    [sym_constant] = ACTIONS(60),
    [sym_string] = ACTIONS(60),
    [sym_comment] = ACTIONS(62),
    [anon_sym_LBRACK] = ACTIONS(54),
    [anon_sym_COLON] = ACTIONS(56),
    [sym_word] = ACTIONS(58),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(45), 4,
      sym_comment,
      anon_sym_LBRACK,
      anon_sym_COLON,
      anon_sym_SEMI,
    ACTIONS(64), 4,
      sym_number,
      sym_constant,
      sym_string,
      sym_word,
  [13] = 3,
    ACTIONS(66), 1,
      aux_sym_source_file_token1,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
    STATE(15), 1,
      aux_sym_source_file_repeat1,
  [23] = 3,
    ACTIONS(66), 1,
      aux_sym_source_file_token1,
    ACTIONS(70), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
  [33] = 3,
    ACTIONS(66), 1,
      aux_sym_source_file_token1,
    ACTIONS(72), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_source_file_repeat1,
  [43] = 3,
    ACTIONS(74), 1,
      aux_sym_source_file_token1,
    ACTIONS(77), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
  [53] = 3,
    ACTIONS(5), 1,
      aux_sym_source_file_token1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
    STATE(20), 1,
      aux_sym_source_file_repeat1,
  [63] = 3,
    ACTIONS(66), 1,
      aux_sym_source_file_token1,
    ACTIONS(81), 1,
      anon_sym_RBRACK,
    STATE(17), 1,
      aux_sym_source_file_repeat1,
  [73] = 3,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 1,
      aux_sym_source_file_token1,
    STATE(20), 1,
      aux_sym_source_file_repeat1,
  [83] = 1,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      aux_sym_source_file_token1,
  [88] = 2,
    ACTIONS(86), 1,
      anon_sym_RBRACK,
    ACTIONS(88), 1,
      aux_sym_source_file_token1,
  [95] = 2,
    ACTIONS(90), 1,
      aux_sym_module_token1,
    ACTIONS(92), 1,
      sym_word,
  [102] = 2,
    ACTIONS(94), 1,
      aux_sym_source_file_token1,
    ACTIONS(96), 1,
      anon_sym_COLON,
  [109] = 2,
    ACTIONS(98), 1,
      sym_word,
    STATE(31), 1,
      aux_sym_modcall_repeat1,
  [116] = 2,
    ACTIONS(100), 1,
      sym_word,
    STATE(31), 1,
      aux_sym_modcall_repeat1,
  [123] = 2,
    ACTIONS(92), 1,
      sym_word,
    ACTIONS(102), 1,
      aux_sym_module_token1,
  [130] = 2,
    ACTIONS(104), 1,
      anon_sym_COLON,
    ACTIONS(106), 1,
      aux_sym_module_token1,
  [137] = 2,
    ACTIONS(108), 1,
      aux_sym_source_file_token1,
    ACTIONS(110), 1,
      anon_sym_COLON,
  [144] = 2,
    ACTIONS(110), 1,
      anon_sym_COLON,
    ACTIONS(112), 1,
      aux_sym_module_token1,
  [151] = 2,
    ACTIONS(114), 1,
      sym_word,
    STATE(31), 1,
      aux_sym_modcall_repeat1,
  [158] = 1,
    ACTIONS(117), 1,
      aux_sym_module_token1,
  [162] = 1,
    ACTIONS(92), 1,
      sym_word,
  [166] = 1,
    ACTIONS(117), 1,
      aux_sym_source_file_token1,
  [170] = 1,
    ACTIONS(119), 1,
      aux_sym_source_file_token1,
  [174] = 1,
    ACTIONS(121), 1,
      aux_sym_source_file_token1,
  [178] = 1,
    ACTIONS(123), 1,
      aux_sym_module_token1,
  [182] = 1,
    ACTIONS(125), 1,
      aux_sym_module_token1,
  [186] = 1,
    ACTIONS(127), 1,
      aux_sym_module_token1,
  [190] = 1,
    ACTIONS(129), 1,
      aux_sym_module_token1,
  [194] = 1,
    ACTIONS(119), 1,
      aux_sym_module_token1,
  [198] = 1,
    ACTIONS(121), 1,
      aux_sym_module_token1,
  [202] = 1,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
  [206] = 1,
    ACTIONS(133), 1,
      aux_sym_source_file_token1,
  [210] = 1,
    ACTIONS(129), 1,
      aux_sym_source_file_token1,
  [214] = 1,
    ACTIONS(135), 1,
      sym_word,
  [218] = 1,
    ACTIONS(123), 1,
      aux_sym_source_file_token1,
  [222] = 1,
    ACTIONS(137), 1,
      aux_sym_module_token1,
  [226] = 1,
    ACTIONS(139), 1,
      aux_sym_source_file_token1,
  [230] = 1,
    ACTIONS(127), 1,
      aux_sym_source_file_token1,
  [234] = 1,
    ACTIONS(141), 1,
      aux_sym_source_file_token1,
  [238] = 1,
    ACTIONS(110), 1,
      anon_sym_COLON,
  [242] = 1,
    ACTIONS(143), 1,
      aux_sym_module_token1,
  [246] = 1,
    ACTIONS(145), 1,
      sym_word,
  [250] = 1,
    ACTIONS(147), 1,
      aux_sym_source_file_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(13)] = 0,
  [SMALL_STATE(14)] = 13,
  [SMALL_STATE(15)] = 23,
  [SMALL_STATE(16)] = 33,
  [SMALL_STATE(17)] = 43,
  [SMALL_STATE(18)] = 53,
  [SMALL_STATE(19)] = 63,
  [SMALL_STATE(20)] = 73,
  [SMALL_STATE(21)] = 83,
  [SMALL_STATE(22)] = 88,
  [SMALL_STATE(23)] = 95,
  [SMALL_STATE(24)] = 102,
  [SMALL_STATE(25)] = 109,
  [SMALL_STATE(26)] = 116,
  [SMALL_STATE(27)] = 123,
  [SMALL_STATE(28)] = 130,
  [SMALL_STATE(29)] = 137,
  [SMALL_STATE(30)] = 144,
  [SMALL_STATE(31)] = 151,
  [SMALL_STATE(32)] = 158,
  [SMALL_STATE(33)] = 162,
  [SMALL_STATE(34)] = 166,
  [SMALL_STATE(35)] = 170,
  [SMALL_STATE(36)] = 174,
  [SMALL_STATE(37)] = 178,
  [SMALL_STATE(38)] = 182,
  [SMALL_STATE(39)] = 186,
  [SMALL_STATE(40)] = 190,
  [SMALL_STATE(41)] = 194,
  [SMALL_STATE(42)] = 198,
  [SMALL_STATE(43)] = 202,
  [SMALL_STATE(44)] = 206,
  [SMALL_STATE(45)] = 210,
  [SMALL_STATE(46)] = 214,
  [SMALL_STATE(47)] = 218,
  [SMALL_STATE(48)] = 222,
  [SMALL_STATE(49)] = 226,
  [SMALL_STATE(50)] = 230,
  [SMALL_STATE(51)] = 234,
  [SMALL_STATE(52)] = 238,
  [SMALL_STATE(53)] = 242,
  [SMALL_STATE(54)] = 246,
  [SMALL_STATE(55)] = 250,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2, 0, 0), SHIFT_REPEAT(55),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2, 0, 0),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 3, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 3, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modcall_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_modcall, 2, 0, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modcall, 2, 0, 1),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modcall_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 5, 0, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, 0, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quote, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 4, 0, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, 0, 3),
  [131] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
