#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 9
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_text = 1,
  anon_sym_LBRACE_PERCENT = 2,
  anon_sym_LBRACE_PERCENT_EQ = 3,
  anon_sym_LBRACE_PERCENTd = 4,
  anon_sym_LBRACE_PERCENTdu = 5,
  anon_sym_LBRACE_PERCENTdl = 6,
  anon_sym_LBRACE_PERCENTdul = 7,
  aux_sym_left_delimiter_token1 = 8,
  anon_sym_LBRACE_PERCENTv = 9,
  anon_sym_LBRACE_PERCENTu = 10,
  anon_sym_LBRACE_PERCENTuz = 11,
  anon_sym_LBRACE_PERCENTj = 12,
  anon_sym_LBRACE_PERCENTq = 13,
  sym_right_delimiter = 14,
  sym_go_content = 15,
  sym_source_file = 16,
  sym__block = 17,
  sym__expr = 18,
  sym_left_delimiter = 19,
  aux_sym_source_file_repeat1 = 20,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_text] = "text",
  [anon_sym_LBRACE_PERCENT] = "{%",
  [anon_sym_LBRACE_PERCENT_EQ] = "{%=",
  [anon_sym_LBRACE_PERCENTd] = "{%d",
  [anon_sym_LBRACE_PERCENTdu] = "{%du",
  [anon_sym_LBRACE_PERCENTdl] = "{%dl",
  [anon_sym_LBRACE_PERCENTdul] = "{%dul",
  [aux_sym_left_delimiter_token1] = "left_delimiter_token1",
  [anon_sym_LBRACE_PERCENTv] = "{%v",
  [anon_sym_LBRACE_PERCENTu] = "{%u",
  [anon_sym_LBRACE_PERCENTuz] = "{%uz",
  [anon_sym_LBRACE_PERCENTj] = "{%j",
  [anon_sym_LBRACE_PERCENTq] = "{%q",
  [sym_right_delimiter] = "right_delimiter",
  [sym_go_content] = "go_content",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym__expr] = "_expr",
  [sym_left_delimiter] = "left_delimiter",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_text] = sym_text,
  [anon_sym_LBRACE_PERCENT] = anon_sym_LBRACE_PERCENT,
  [anon_sym_LBRACE_PERCENT_EQ] = anon_sym_LBRACE_PERCENT_EQ,
  [anon_sym_LBRACE_PERCENTd] = anon_sym_LBRACE_PERCENTd,
  [anon_sym_LBRACE_PERCENTdu] = anon_sym_LBRACE_PERCENTdu,
  [anon_sym_LBRACE_PERCENTdl] = anon_sym_LBRACE_PERCENTdl,
  [anon_sym_LBRACE_PERCENTdul] = anon_sym_LBRACE_PERCENTdul,
  [aux_sym_left_delimiter_token1] = aux_sym_left_delimiter_token1,
  [anon_sym_LBRACE_PERCENTv] = anon_sym_LBRACE_PERCENTv,
  [anon_sym_LBRACE_PERCENTu] = anon_sym_LBRACE_PERCENTu,
  [anon_sym_LBRACE_PERCENTuz] = anon_sym_LBRACE_PERCENTuz,
  [anon_sym_LBRACE_PERCENTj] = anon_sym_LBRACE_PERCENTj,
  [anon_sym_LBRACE_PERCENTq] = anon_sym_LBRACE_PERCENTq,
  [sym_right_delimiter] = sym_right_delimiter,
  [sym_go_content] = sym_go_content,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym__expr] = sym__expr,
  [sym_left_delimiter] = sym_left_delimiter,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACE_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENTd] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENTdu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENTdl] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENTdul] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_left_delimiter_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENTv] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENTu] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENTuz] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENTj] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE_PERCENTq] = {
    .visible = true,
    .named = false,
  },
  [sym_right_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_go_content] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_left_delimiter] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(8);
      if (lookahead == '%') ADVANCE(3);
      if (lookahead == '{') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == '%') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == '%') ADVANCE(11);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == '}') ADVANCE(24);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 5:
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(26);
      END_STATE();
    case 7:
      if (eof) ADVANCE(8);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(9);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '{') ADVANCE(5);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT);
      if (lookahead == '=') ADVANCE(12);
      if (lookahead == 'd') ADVANCE(13);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'j') ADVANCE(22);
      if (lookahead == 'q') ADVANCE(23);
      if (lookahead == 'u') ADVANCE(20);
      if (lookahead == 'v') ADVANCE(19);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENT_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENTd);
      if (lookahead == 'l') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENTdu);
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENTdl);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENTdul);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_left_delimiter_token1);
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_left_delimiter_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENTv);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENTu);
      if (lookahead == 'z') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENTuz);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENTj);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE_PERCENTq);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_right_delimiter);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_go_content);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_go_content);
      if (lookahead == '%') ADVANCE(6);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 7},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 25},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 25},
  [8] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENT_EQ] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENTd] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENTdu] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENTdl] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENTdul] = ACTIONS(1),
    [aux_sym_left_delimiter_token1] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENTv] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENTu] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENTuz] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENTj] = ACTIONS(1),
    [anon_sym_LBRACE_PERCENTq] = ACTIONS(1),
    [sym_right_delimiter] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(6),
    [sym__block] = STATE(2),
    [sym__expr] = STATE(2),
    [sym_left_delimiter] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_text] = ACTIONS(5),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT_EQ] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENTd] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENTdu] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENTdl] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENTdul] = ACTIONS(7),
    [aux_sym_left_delimiter_token1] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENTv] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENTu] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENTuz] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENTj] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENTq] = ACTIONS(7),
  },
  [2] = {
    [sym__block] = STATE(3),
    [sym__expr] = STATE(3),
    [sym_left_delimiter] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [sym_text] = ACTIONS(11),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENT_EQ] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENTd] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENTdu] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENTdl] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENTdul] = ACTIONS(7),
    [aux_sym_left_delimiter_token1] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENTv] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENTu] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENTuz] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENTj] = ACTIONS(7),
    [anon_sym_LBRACE_PERCENTq] = ACTIONS(7),
  },
  [3] = {
    [sym__block] = STATE(3),
    [sym__expr] = STATE(3),
    [sym_left_delimiter] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(13),
    [sym_text] = ACTIONS(15),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(18),
    [anon_sym_LBRACE_PERCENT_EQ] = ACTIONS(18),
    [anon_sym_LBRACE_PERCENTd] = ACTIONS(18),
    [anon_sym_LBRACE_PERCENTdu] = ACTIONS(18),
    [anon_sym_LBRACE_PERCENTdl] = ACTIONS(18),
    [anon_sym_LBRACE_PERCENTdul] = ACTIONS(18),
    [aux_sym_left_delimiter_token1] = ACTIONS(18),
    [anon_sym_LBRACE_PERCENTv] = ACTIONS(18),
    [anon_sym_LBRACE_PERCENTu] = ACTIONS(18),
    [anon_sym_LBRACE_PERCENTuz] = ACTIONS(18),
    [anon_sym_LBRACE_PERCENTj] = ACTIONS(18),
    [anon_sym_LBRACE_PERCENTq] = ACTIONS(18),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_text] = ACTIONS(21),
    [anon_sym_LBRACE_PERCENT] = ACTIONS(23),
    [anon_sym_LBRACE_PERCENT_EQ] = ACTIONS(23),
    [anon_sym_LBRACE_PERCENTd] = ACTIONS(23),
    [anon_sym_LBRACE_PERCENTdu] = ACTIONS(23),
    [anon_sym_LBRACE_PERCENTdl] = ACTIONS(23),
    [anon_sym_LBRACE_PERCENTdul] = ACTIONS(23),
    [aux_sym_left_delimiter_token1] = ACTIONS(23),
    [anon_sym_LBRACE_PERCENTv] = ACTIONS(23),
    [anon_sym_LBRACE_PERCENTu] = ACTIONS(23),
    [anon_sym_LBRACE_PERCENTuz] = ACTIONS(23),
    [anon_sym_LBRACE_PERCENTj] = ACTIONS(23),
    [anon_sym_LBRACE_PERCENTq] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(25), 1,
      sym_go_content,
  [4] = 1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
  [8] = 1,
    ACTIONS(29), 1,
      sym_go_content,
  [12] = 1,
    ACTIONS(31), 1,
      sym_right_delimiter,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 4,
  [SMALL_STATE(7)] = 8,
  [SMALL_STATE(8)] = 12,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_left_delimiter, 1),
  [27] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_goqtpl(void) {
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
