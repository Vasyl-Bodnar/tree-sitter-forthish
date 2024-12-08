/**
 * @file Tree Sitter for a Forthish language
 * @author Vasyl Bodnar <vasyl_bodnar@outlook.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "forthish",

  extras: $ => [],

  rules: {
    source_file: $ => repeat(seq(/\s*/, $._expression, /\s*/)),
    _expression: $ => choice($.number, $.constant, $.string, $.comment, $.quote, $.module, $.function, $.modcall, $.word),
    number: $ => /[-+]?\d+/,
    constant: $ => /true|false/,
    string: $ => /"[^"]*"/,
    comment: $ => /\([^)]*/,
    quote: $ => seq("[", repeat(seq(/\s*/, $._expression, /\s*/)), "]"),
    module: $ => seq(field("name", $.word), ":", /\s+/, repeat(seq($._expression, /\s+/)), ";"),
    function: $ => seq(":", /\s*/, field("name", $.word), /\s+/, repeat(seq($._expression, /\s+/)), ";"),
    modcall: $ => seq(repeat1(seq($.word, ":")), field("fn", $.word)),
    word: $ => /[^\[\]():;\s]+/
  }
});
