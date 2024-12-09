/**
 * @file Tree Sitter for a Forthish language
 * @author Vasyl Bodnar <vasyl_bodnar@outlook.com>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "forthish",

  conflicts: $ => [[$.modcall, $.module, $._expression], [$.modcall]],

  word: $ => $.word,

  rules: {
    source_file: $ => repeat($._expression),
    quote: $ => seq("[", repeat($._expression), "]"),
    modcall: $ => seq(
      repeat1(seq($.word, ":")), 
      field("fn", $.word)
    ),
    module: $ => seq(
      field("name", $.word), ":", /\s+/, 
      repeat($._expression), ";"
    ),
    function: $ => seq(
      ":", field("name", $.word), /\s+/, 
      repeat($._expression), ";"
    ),
    number: $ => /[-+]?\d+/,
    constant: $ => /true|false/,
    string: $ => /"[^"]*"/,
    comment: $ => /\([^\)]*\)/,
    word: $ => /[^\(\)\[\]":;\s]+/,
    _expression: $ => choice(
      $.number, $.constant, $.string, $.comment, 
      $.quote, $.module, $.function, $.modcall, $.word
    ),
  }
});
