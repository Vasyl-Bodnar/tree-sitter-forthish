(number) @number
(constant) @constant.builtin
(string) @string
(comment) @comment
(word) @variable
(function name: (word) @function)
(module name: (word) @function.builtin)
(modcall fn: (word) @function) @function.builtin
