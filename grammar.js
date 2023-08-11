module.exports = grammar({
    name: "goqtpl",
    rules: {

        source_file: $ => repeat($._block),
        _block: $ => choice(
            $.text,
            $._expr
        ),
        text: $ => /([^{]|[{][^%])+/,
        _expr: $ => seq(
            $.left_delimiter,
            $.go_content,
            $.right_delimiter
        ),
        left_delimiter: $ => choice(
            token('{%'),
            token('{%='),
            token('{%d'),
            token('{%du'),
            token('{%dl'),
            token('{%dul'),
            /[{]%f(\.\d+)?/,
            token('{%v'),
            token('{%u'),
            token('{%uz'),
            token('{%j'),
            token('{%q'),
        ),
        right_delimiter: $ => token('%}'),
        go_content: $ => /([^%]|%[^}])*/,

        /*
        source_file: $ => repeat(choice(
            $._go_inj,
            $.html_content,
        )),
        _go_inj: $ => seq(
            $.go_start,
            $.go_content,
            $.go_end,
        ),
        go_start: $ => new RegExp('[{]%(\=|du?l?|f(\.\d+)?|v|uz?|j|q)?'),
        go_end: $ => '%}',
        go_content: $ => new RegExp(
            '(([^%]|%[^}])*)'
        ),
        //html_content: $ => new RegExp('([^{]|[{][^%])+')
        //html_content: $ => /[^{]+|[{][^%]/
        html_content: $ => /[^{]+|[{][^{%]*/
    }
})
