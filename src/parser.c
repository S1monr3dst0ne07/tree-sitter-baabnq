#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 66
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_comment = 1,
  anon_sym_put = 2,
  anon_sym_EQ = 3,
  anon_sym_LT_DASH = 4,
  anon_sym_DASH_GT = 5,
  anon_sym_input = 6,
  anon_sym_print = 7,
  anon_sym_putchr = 8,
  anon_sym_lab = 9,
  anon_sym_jump = 10,
  anon_sym_sub = 11,
  sym_return = 12,
  anon_sym_pull = 13,
  anon_sym_push = 14,
  anon_sym_new = 15,
  anon_sym_static = 16,
  anon_sym_free = 17,
  anon_sym_use = 18,
  anon_sym_asm = 19,
  anon_sym_LPAREN = 20,
  anon_sym_RPAREN = 21,
  anon_sym_PLUS = 22,
  anon_sym_DASH = 23,
  anon_sym_PIPE = 24,
  anon_sym_AMP = 25,
  anon_sym_CARET = 26,
  anon_sym_LT_LT = 27,
  anon_sym_GT_GT = 28,
  anon_sym_TILDE = 29,
  anon_sym_EQ_EQ = 30,
  anon_sym_BANG_EQ = 31,
  anon_sym_GT = 32,
  anon_sym_LT = 33,
  sym_eos = 34,
  anon_sym_SQUOTE = 35,
  aux_sym_string_token1 = 36,
  anon_sym__ = 37,
  sym_iden = 38,
  sym_number = 39,
  sym_source_file = 40,
  sym_unit = 41,
  sym_statement = 42,
  sym_put = 43,
  sym_input = 44,
  sym_print = 45,
  sym_putchr = 46,
  sym_lab = 47,
  sym_jump = 48,
  sym_sub = 49,
  sym_pull = 50,
  sym_push = 51,
  sym_new = 52,
  sym_static = 53,
  sym_free = 54,
  sym_use = 55,
  sym_asm = 56,
  sym_expr = 57,
  sym_binary = 58,
  sym_paran = 59,
  sym_op = 60,
  sym_cond = 61,
  sym_label = 62,
  sym_string = 63,
  sym_var = 64,
  aux_sym_source_file_repeat1 = 65,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_comment] = "comment",
  [anon_sym_put] = "put",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_input] = "input",
  [anon_sym_print] = "print",
  [anon_sym_putchr] = "putchr",
  [anon_sym_lab] = "lab",
  [anon_sym_jump] = "jump",
  [anon_sym_sub] = "sub",
  [sym_return] = "return",
  [anon_sym_pull] = "pull",
  [anon_sym_push] = "push",
  [anon_sym_new] = "new",
  [anon_sym_static] = "static",
  [anon_sym_free] = "free",
  [anon_sym_use] = "use",
  [anon_sym_asm] = "asm",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_TILDE] = "~",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [sym_eos] = "eos",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token1] = "string_token1",
  [anon_sym__] = "_",
  [sym_iden] = "iden",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_unit] = "unit",
  [sym_statement] = "statement",
  [sym_put] = "put",
  [sym_input] = "input",
  [sym_print] = "print",
  [sym_putchr] = "putchr",
  [sym_lab] = "lab",
  [sym_jump] = "jump",
  [sym_sub] = "sub",
  [sym_pull] = "pull",
  [sym_push] = "push",
  [sym_new] = "new",
  [sym_static] = "static",
  [sym_free] = "free",
  [sym_use] = "use",
  [sym_asm] = "asm",
  [sym_expr] = "expr",
  [sym_binary] = "binary",
  [sym_paran] = "paran",
  [sym_op] = "op",
  [sym_cond] = "cond",
  [sym_label] = "label",
  [sym_string] = "string",
  [sym_var] = "var",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_comment] = sym_comment,
  [anon_sym_put] = anon_sym_put,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_print] = anon_sym_print,
  [anon_sym_putchr] = anon_sym_putchr,
  [anon_sym_lab] = anon_sym_lab,
  [anon_sym_jump] = anon_sym_jump,
  [anon_sym_sub] = anon_sym_sub,
  [sym_return] = sym_return,
  [anon_sym_pull] = anon_sym_pull,
  [anon_sym_push] = anon_sym_push,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_free] = anon_sym_free,
  [anon_sym_use] = anon_sym_use,
  [anon_sym_asm] = anon_sym_asm,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [sym_eos] = sym_eos,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [anon_sym__] = anon_sym__,
  [sym_iden] = sym_iden,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_unit] = sym_unit,
  [sym_statement] = sym_statement,
  [sym_put] = sym_put,
  [sym_input] = sym_input,
  [sym_print] = sym_print,
  [sym_putchr] = sym_putchr,
  [sym_lab] = sym_lab,
  [sym_jump] = sym_jump,
  [sym_sub] = sym_sub,
  [sym_pull] = sym_pull,
  [sym_push] = sym_push,
  [sym_new] = sym_new,
  [sym_static] = sym_static,
  [sym_free] = sym_free,
  [sym_use] = sym_use,
  [sym_asm] = sym_asm,
  [sym_expr] = sym_expr,
  [sym_binary] = sym_binary,
  [sym_paran] = sym_paran,
  [sym_op] = sym_op,
  [sym_cond] = sym_cond,
  [sym_label] = sym_label,
  [sym_string] = sym_string,
  [sym_var] = sym_var,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_put] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_print] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_putchr] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lab] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_jump] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_sub] = {
    .visible = true,
    .named = false,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_pull] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_push] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_free] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_use] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_asm] = {
    .visible = true,
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
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [sym_eos] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [sym_iden] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_put] = {
    .visible = true,
    .named = true,
  },
  [sym_input] = {
    .visible = true,
    .named = true,
  },
  [sym_print] = {
    .visible = true,
    .named = true,
  },
  [sym_putchr] = {
    .visible = true,
    .named = true,
  },
  [sym_lab] = {
    .visible = true,
    .named = true,
  },
  [sym_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_sub] = {
    .visible = true,
    .named = true,
  },
  [sym_pull] = {
    .visible = true,
    .named = true,
  },
  [sym_push] = {
    .visible = true,
    .named = true,
  },
  [sym_new] = {
    .visible = true,
    .named = true,
  },
  [sym_static] = {
    .visible = true,
    .named = true,
  },
  [sym_free] = {
    .visible = true,
    .named = true,
  },
  [sym_use] = {
    .visible = true,
    .named = true,
  },
  [sym_asm] = {
    .visible = true,
    .named = true,
  },
  [sym_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_paran] = {
    .visible = true,
    .named = true,
  },
  [sym_op] = {
    .visible = true,
    .named = true,
  },
  [sym_cond] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_content = 1,
  field_left = 2,
  field_op = 3,
  field_right = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_content] = "content",
  [field_left] = "left",
  [field_op] = "op",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_content, 0},
  [1] =
    {field_left, 0},
    {field_op, 1},
    {field_right, 2},
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
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(48);
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '"') ADVANCE(47);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '\'') ADVANCE(85);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '+') ADVANCE(71);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '<') ADVANCE(82);
      if (lookahead == '=') ADVANCE(52);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == 'a') ADVANCE(35);
      if (lookahead == 'f') ADVANCE(34);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'j') ADVANCE(43);
      if (lookahead == 'l') ADVANCE(8);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'p') ADVANCE(31);
      if (lookahead == 'r') ADVANCE(14);
      if (lookahead == 's') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead == '|') ADVANCE(73);
      if (lookahead == '~') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(5);
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '+') ADVANCE(71);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == ';') ADVANCE(84);
      if (lookahead == '<') ADVANCE(83);
      if (lookahead == '=') ADVANCE(6);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == '_') ADVANCE(88);
      if (lookahead == '|') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '&') ADVANCE(74);
      if (lookahead == '+') ADVANCE(71);
      if (lookahead == '-') ADVANCE(72);
      if (lookahead == '<') ADVANCE(4);
      if (lookahead == '=') ADVANCE(51);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead == '^') ADVANCE(75);
      if (lookahead == '|') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '<') ADVANCE(76);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(80);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(58);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(60);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(65);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 18:
      if (lookahead == 'h') ADVANCE(63);
      END_STATE();
    case 19:
      if (lookahead == 'h') ADVANCE(32);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 22:
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 's') ADVANCE(18);
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == 'l') ADVANCE(62);
      END_STATE();
    case 24:
      if (lookahead == 'm') ADVANCE(68);
      END_STATE();
    case 25:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(38);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(59);
      END_STATE();
    case 30:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(57);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(9);
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 42:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 43:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 44:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 'w') ADVANCE(64);
      END_STATE();
    case 46:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(46)
      if (lookahead != 0 &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(89);
      END_STATE();
    case 47:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_put);
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(79);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_print);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_putchr);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_lab);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_jump);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_sub);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_return);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_pull);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_push);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_free);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_use);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_asm);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(54);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '>') ADVANCE(77);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '-') ADVANCE(53);
      if (lookahead == '<') ADVANCE(76);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(76);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_eos);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(87);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_iden);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          (lookahead < '\'' || ')' < lookahead) &&
          lookahead != ';' &&
          lookahead != '|') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 46},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 46},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 46},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 46},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 86},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
    [anon_sym_put] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_print] = ACTIONS(1),
    [anon_sym_putchr] = ACTIONS(1),
    [anon_sym_lab] = ACTIONS(1),
    [anon_sym_jump] = ACTIONS(1),
    [anon_sym_sub] = ACTIONS(1),
    [sym_return] = ACTIONS(1),
    [anon_sym_pull] = ACTIONS(1),
    [anon_sym_push] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_free] = ACTIONS(1),
    [anon_sym_use] = ACTIONS(1),
    [anon_sym_asm] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [sym_eos] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(48),
    [sym_unit] = STATE(3),
    [sym_statement] = STATE(4),
    [sym_put] = STATE(58),
    [sym_input] = STATE(58),
    [sym_print] = STATE(58),
    [sym_putchr] = STATE(58),
    [sym_lab] = STATE(58),
    [sym_jump] = STATE(58),
    [sym_sub] = STATE(58),
    [sym_pull] = STATE(58),
    [sym_push] = STATE(58),
    [sym_new] = STATE(58),
    [sym_static] = STATE(58),
    [sym_free] = STATE(58),
    [sym_use] = STATE(58),
    [sym_asm] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_comment] = ACTIONS(5),
    [anon_sym_put] = ACTIONS(7),
    [anon_sym_input] = ACTIONS(9),
    [anon_sym_print] = ACTIONS(11),
    [anon_sym_putchr] = ACTIONS(13),
    [anon_sym_lab] = ACTIONS(15),
    [anon_sym_jump] = ACTIONS(17),
    [anon_sym_sub] = ACTIONS(19),
    [sym_return] = ACTIONS(21),
    [anon_sym_pull] = ACTIONS(23),
    [anon_sym_push] = ACTIONS(25),
    [anon_sym_new] = ACTIONS(27),
    [anon_sym_static] = ACTIONS(29),
    [anon_sym_free] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_asm] = ACTIONS(35),
  },
  [2] = {
    [sym_unit] = STATE(2),
    [sym_statement] = STATE(4),
    [sym_put] = STATE(58),
    [sym_input] = STATE(58),
    [sym_print] = STATE(58),
    [sym_putchr] = STATE(58),
    [sym_lab] = STATE(58),
    [sym_jump] = STATE(58),
    [sym_sub] = STATE(58),
    [sym_pull] = STATE(58),
    [sym_push] = STATE(58),
    [sym_new] = STATE(58),
    [sym_static] = STATE(58),
    [sym_free] = STATE(58),
    [sym_use] = STATE(58),
    [sym_asm] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(37),
    [sym_comment] = ACTIONS(39),
    [anon_sym_put] = ACTIONS(42),
    [anon_sym_input] = ACTIONS(45),
    [anon_sym_print] = ACTIONS(48),
    [anon_sym_putchr] = ACTIONS(51),
    [anon_sym_lab] = ACTIONS(54),
    [anon_sym_jump] = ACTIONS(57),
    [anon_sym_sub] = ACTIONS(60),
    [sym_return] = ACTIONS(63),
    [anon_sym_pull] = ACTIONS(66),
    [anon_sym_push] = ACTIONS(69),
    [anon_sym_new] = ACTIONS(72),
    [anon_sym_static] = ACTIONS(75),
    [anon_sym_free] = ACTIONS(78),
    [anon_sym_use] = ACTIONS(81),
    [anon_sym_asm] = ACTIONS(84),
  },
  [3] = {
    [sym_unit] = STATE(2),
    [sym_statement] = STATE(4),
    [sym_put] = STATE(58),
    [sym_input] = STATE(58),
    [sym_print] = STATE(58),
    [sym_putchr] = STATE(58),
    [sym_lab] = STATE(58),
    [sym_jump] = STATE(58),
    [sym_sub] = STATE(58),
    [sym_pull] = STATE(58),
    [sym_push] = STATE(58),
    [sym_new] = STATE(58),
    [sym_static] = STATE(58),
    [sym_free] = STATE(58),
    [sym_use] = STATE(58),
    [sym_asm] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(87),
    [sym_comment] = ACTIONS(5),
    [anon_sym_put] = ACTIONS(7),
    [anon_sym_input] = ACTIONS(9),
    [anon_sym_print] = ACTIONS(11),
    [anon_sym_putchr] = ACTIONS(13),
    [anon_sym_lab] = ACTIONS(15),
    [anon_sym_jump] = ACTIONS(17),
    [anon_sym_sub] = ACTIONS(19),
    [sym_return] = ACTIONS(21),
    [anon_sym_pull] = ACTIONS(23),
    [anon_sym_push] = ACTIONS(25),
    [anon_sym_new] = ACTIONS(27),
    [anon_sym_static] = ACTIONS(29),
    [anon_sym_free] = ACTIONS(31),
    [anon_sym_use] = ACTIONS(33),
    [anon_sym_asm] = ACTIONS(35),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(91), 1,
      anon_sym_put,
    ACTIONS(89), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_input,
      anon_sym_print,
      anon_sym_putchr,
      anon_sym_lab,
      anon_sym_jump,
      anon_sym_sub,
      sym_return,
      anon_sym_pull,
      anon_sym_push,
      anon_sym_new,
      anon_sym_static,
      anon_sym_free,
      anon_sym_use,
      anon_sym_asm,
  [22] = 2,
    ACTIONS(95), 1,
      anon_sym_put,
    ACTIONS(93), 16,
      ts_builtin_sym_end,
      sym_comment,
      anon_sym_input,
      anon_sym_print,
      anon_sym_putchr,
      anon_sym_lab,
      anon_sym_jump,
      anon_sym_sub,
      sym_return,
      anon_sym_pull,
      anon_sym_push,
      anon_sym_new,
      anon_sym_static,
      anon_sym_free,
      anon_sym_use,
      anon_sym_asm,
  [44] = 2,
    ACTIONS(97), 4,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(99), 13,
      anon_sym_LT_DASH,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_eos,
      anon_sym__,
  [66] = 3,
    STATE(25), 1,
      sym_op,
    ACTIONS(103), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(101), 12,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_eos,
      anon_sym__,
  [89] = 2,
    ACTIONS(107), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(105), 12,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_eos,
      anon_sym__,
  [109] = 2,
    ACTIONS(111), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(109), 12,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_eos,
      anon_sym__,
  [129] = 2,
    ACTIONS(115), 3,
      anon_sym_DASH,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(113), 12,
      anon_sym_DASH_GT,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      sym_eos,
      anon_sym__,
  [149] = 4,
    STATE(25), 1,
      sym_op,
    ACTIONS(119), 2,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
    ACTIONS(121), 2,
      anon_sym_GT,
      anon_sym_LT,
    ACTIONS(117), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [170] = 4,
    ACTIONS(123), 1,
      anon_sym__,
    STATE(25), 1,
      sym_op,
    STATE(54), 1,
      sym_var,
    ACTIONS(117), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [189] = 4,
    ACTIONS(123), 1,
      anon_sym__,
    STATE(25), 1,
      sym_op,
    STATE(55), 1,
      sym_var,
    ACTIONS(117), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [208] = 3,
    ACTIONS(115), 1,
      anon_sym_DASH,
    ACTIONS(125), 2,
      anon_sym_EQ,
      anon_sym_LT_DASH,
    ACTIONS(113), 7,
      anon_sym_DASH_GT,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [225] = 3,
    ACTIONS(127), 1,
      sym_eos,
    STATE(25), 1,
      sym_op,
    ACTIONS(117), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [241] = 8,
    ACTIONS(123), 1,
      anon_sym__,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      sym_number,
    STATE(10), 1,
      sym_var,
    STATE(13), 1,
      sym_expr,
    STATE(40), 1,
      sym_string,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [267] = 4,
    ACTIONS(125), 1,
      anon_sym_DASH_GT,
    ACTIONS(135), 1,
      anon_sym_DASH,
    STATE(25), 1,
      sym_op,
    ACTIONS(117), 6,
      anon_sym_PLUS,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [285] = 8,
    ACTIONS(123), 1,
      anon_sym__,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    ACTIONS(133), 1,
      sym_number,
    STATE(10), 1,
      sym_var,
    STATE(12), 1,
      sym_expr,
    STATE(38), 1,
      sym_string,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [311] = 3,
    ACTIONS(137), 1,
      sym_eos,
    STATE(25), 1,
      sym_op,
    ACTIONS(117), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [327] = 3,
    ACTIONS(139), 1,
      sym_eos,
    STATE(25), 1,
      sym_op,
    ACTIONS(117), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [343] = 3,
    ACTIONS(141), 1,
      anon_sym_RPAREN,
    STATE(25), 1,
      sym_op,
    ACTIONS(117), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [359] = 3,
    ACTIONS(143), 1,
      sym_eos,
    STATE(25), 1,
      sym_op,
    ACTIONS(117), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [375] = 3,
    ACTIONS(145), 1,
      sym_eos,
    STATE(25), 1,
      sym_op,
    ACTIONS(117), 7,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [391] = 6,
    ACTIONS(123), 1,
      anon_sym__,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      sym_number,
    STATE(10), 1,
      sym_var,
    STATE(11), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [411] = 6,
    ACTIONS(123), 1,
      anon_sym__,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      sym_number,
    STATE(7), 1,
      sym_expr,
    STATE(10), 1,
      sym_var,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [431] = 6,
    ACTIONS(123), 1,
      anon_sym__,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      sym_number,
    STATE(14), 1,
      sym_var,
    STATE(17), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [451] = 6,
    ACTIONS(123), 1,
      anon_sym__,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      sym_number,
    STATE(10), 1,
      sym_var,
    STATE(21), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [471] = 6,
    ACTIONS(123), 1,
      anon_sym__,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      sym_number,
    STATE(10), 1,
      sym_var,
    STATE(19), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [491] = 6,
    ACTIONS(123), 1,
      anon_sym__,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      sym_number,
    STATE(10), 1,
      sym_var,
    STATE(22), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [511] = 6,
    ACTIONS(123), 1,
      anon_sym__,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      sym_number,
    STATE(10), 1,
      sym_var,
    STATE(23), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [531] = 6,
    ACTIONS(123), 1,
      anon_sym__,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      sym_number,
    STATE(10), 1,
      sym_var,
    STATE(20), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [551] = 6,
    ACTIONS(123), 1,
      anon_sym__,
    ACTIONS(129), 1,
      anon_sym_LPAREN,
    ACTIONS(133), 1,
      sym_number,
    STATE(10), 1,
      sym_var,
    STATE(15), 1,
      sym_expr,
    STATE(9), 2,
      sym_binary,
      sym_paran,
  [571] = 1,
    ACTIONS(147), 3,
      anon_sym_LPAREN,
      anon_sym__,
      sym_number,
  [577] = 3,
    ACTIONS(149), 1,
      anon_sym_TILDE,
    ACTIONS(151), 1,
      sym_eos,
    STATE(51), 1,
      sym_cond,
  [587] = 3,
    ACTIONS(149), 1,
      anon_sym_TILDE,
    ACTIONS(153), 1,
      sym_eos,
    STATE(52), 1,
      sym_cond,
  [597] = 2,
    ACTIONS(123), 1,
      anon_sym__,
    STATE(62), 1,
      sym_var,
  [604] = 2,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(60), 1,
      sym_string,
  [611] = 2,
    ACTIONS(123), 1,
      anon_sym__,
    STATE(54), 1,
      sym_var,
  [618] = 2,
    ACTIONS(155), 1,
      sym_iden,
    STATE(59), 1,
      sym_label,
  [625] = 2,
    ACTIONS(123), 1,
      anon_sym__,
    STATE(55), 1,
      sym_var,
  [632] = 2,
    ACTIONS(155), 1,
      sym_iden,
    STATE(34), 1,
      sym_label,
  [639] = 1,
    ACTIONS(157), 2,
      sym_eos,
      anon_sym__,
  [644] = 2,
    ACTIONS(155), 1,
      sym_iden,
    STATE(35), 1,
      sym_label,
  [651] = 2,
    ACTIONS(123), 1,
      anon_sym__,
    STATE(57), 1,
      sym_var,
  [658] = 2,
    ACTIONS(123), 1,
      anon_sym__,
    STATE(50), 1,
      sym_var,
  [665] = 1,
    ACTIONS(159), 2,
      anon_sym_TILDE,
      sym_eos,
  [670] = 2,
    ACTIONS(131), 1,
      anon_sym_SQUOTE,
    STATE(61), 1,
      sym_string,
  [677] = 1,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
  [681] = 1,
    ACTIONS(163), 1,
      sym_iden,
  [685] = 1,
    ACTIONS(165), 1,
      sym_eos,
  [689] = 1,
    ACTIONS(167), 1,
      sym_eos,
  [693] = 1,
    ACTIONS(169), 1,
      sym_eos,
  [697] = 1,
    ACTIONS(171), 1,
      anon_sym_SQUOTE,
  [701] = 1,
    ACTIONS(173), 1,
      sym_eos,
  [705] = 1,
    ACTIONS(175), 1,
      sym_eos,
  [709] = 1,
    ACTIONS(177), 1,
      aux_sym_string_token1,
  [713] = 1,
    ACTIONS(179), 1,
      sym_eos,
  [717] = 1,
    ACTIONS(181), 1,
      sym_eos,
  [721] = 1,
    ACTIONS(183), 1,
      sym_eos,
  [725] = 1,
    ACTIONS(185), 1,
      sym_eos,
  [729] = 1,
    ACTIONS(187), 1,
      sym_eos,
  [733] = 1,
    ACTIONS(189), 1,
      sym_eos,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 22,
  [SMALL_STATE(6)] = 44,
  [SMALL_STATE(7)] = 66,
  [SMALL_STATE(8)] = 89,
  [SMALL_STATE(9)] = 109,
  [SMALL_STATE(10)] = 129,
  [SMALL_STATE(11)] = 149,
  [SMALL_STATE(12)] = 170,
  [SMALL_STATE(13)] = 189,
  [SMALL_STATE(14)] = 208,
  [SMALL_STATE(15)] = 225,
  [SMALL_STATE(16)] = 241,
  [SMALL_STATE(17)] = 267,
  [SMALL_STATE(18)] = 285,
  [SMALL_STATE(19)] = 311,
  [SMALL_STATE(20)] = 327,
  [SMALL_STATE(21)] = 343,
  [SMALL_STATE(22)] = 359,
  [SMALL_STATE(23)] = 375,
  [SMALL_STATE(24)] = 391,
  [SMALL_STATE(25)] = 411,
  [SMALL_STATE(26)] = 431,
  [SMALL_STATE(27)] = 451,
  [SMALL_STATE(28)] = 471,
  [SMALL_STATE(29)] = 491,
  [SMALL_STATE(30)] = 511,
  [SMALL_STATE(31)] = 531,
  [SMALL_STATE(32)] = 551,
  [SMALL_STATE(33)] = 571,
  [SMALL_STATE(34)] = 577,
  [SMALL_STATE(35)] = 587,
  [SMALL_STATE(36)] = 597,
  [SMALL_STATE(37)] = 604,
  [SMALL_STATE(38)] = 611,
  [SMALL_STATE(39)] = 618,
  [SMALL_STATE(40)] = 625,
  [SMALL_STATE(41)] = 632,
  [SMALL_STATE(42)] = 639,
  [SMALL_STATE(43)] = 644,
  [SMALL_STATE(44)] = 651,
  [SMALL_STATE(45)] = 658,
  [SMALL_STATE(46)] = 665,
  [SMALL_STATE(47)] = 670,
  [SMALL_STATE(48)] = 677,
  [SMALL_STATE(49)] = 681,
  [SMALL_STATE(50)] = 685,
  [SMALL_STATE(51)] = 689,
  [SMALL_STATE(52)] = 693,
  [SMALL_STATE(53)] = 697,
  [SMALL_STATE(54)] = 701,
  [SMALL_STATE(55)] = 705,
  [SMALL_STATE(56)] = 709,
  [SMALL_STATE(57)] = 713,
  [SMALL_STATE(58)] = 717,
  [SMALL_STATE(59)] = 721,
  [SMALL_STATE(60)] = 725,
  [SMALL_STATE(61)] = 729,
  [SMALL_STATE(62)] = 733,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(37),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_var, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary, 3, .production_id = 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary, 3, .production_id = 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_paran, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_paran, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expr, 1, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expr, 1, .production_id = 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_print, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [135] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_put, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_putchr, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_push, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cond, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_op, 1),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 1),
  [161] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pull, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sub, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_new, 3),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_input, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lab, 2),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_asm, 2),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_use, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_free, 2),
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

TS_PUBLIC const TSLanguage *tree_sitter_baabnq() {
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
