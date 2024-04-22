module.exports = grammar({
  name: 'baabnq',

  rules: {
    source_file: $ => repeat($.unit),
    unit: $ => choice(
      $.statement,
      $.comment,
    ),

    extras: $ => /\s|\n/,

    comment: $ => /".+?\n/,

    statement: $ => seq(
      choice(
        $.put,
        $.input,
        $.print,
        $.putchr,
        $.lab,
        $.jump,
        $.sub,
        $.return,
        $.pull,
        $.push,
        $.new,
        $.free,
        $.static,
        $.use,
        $.asm
      ),
      $.eos
    ),

    put: $ => seq('put',
      choice(
        seq($.var,  '=',  $.expr),
        seq($.var,  '<-', $.expr),
        seq($.expr, '->', $.expr),
      ),
    ),

    input:   $ => seq('input',  $.var),
    print:   $ => seq('print',  $.expr),
    putchr:  $ => seq('putchr', $.expr),
    lab:     $ => seq('lab',    $.label),
    jump:    $ => seq('jump',   $.label, optional($.cond)),
    sub:     $ => seq('sub',    $.label, optional($.cond)),
    return:  $ => seq('return'),
    pull:    $ => seq('pull',   $.var),
    push:    $ => seq('push',   $.expr),
    new:     $ => seq('new',    choice($.expr, $.string), $.var),
    static:  $ => seq('static', choice($.expr, $.string), $.var),
    free:    $ => seq('free',   $.var),
    use:     $ => seq('use',    $.string),
    asm:     $ => seq('asm',    $.string),


    expr: $ => choice(
      field("content", $.number),
      field("content", $.var),
      $.binary,
      $.paran,
    ),

    binary: $ => prec.left(seq(
      field("left", $.expr),
      field("op", $.op),
      field("right", $.expr)
    )),
    paran:  $ => seq('(', $.expr, ')'),


    op: $ => choice('+', '-', '|', '&', '^', '<<', '>>'),
    cond: $ => seq('~', $.expr, choice('==', '!=', '>', '<'), $.expr),


    eos: $ => ';',

    label:  $ => $.iden,
    string: $ => seq('\'', /[^']*/, '\''),
    var:    $ => seq('_', $.iden),
    iden:   $ => /[^'|;|\s|(|)]+/,
    number: $ => /\d+/,

  }
});
