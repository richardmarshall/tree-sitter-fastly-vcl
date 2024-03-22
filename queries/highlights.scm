; Operators
; Keywords

[
 "acl"
 "break"
 "case"
 "call"
 "declare"
 "default"
 "else"
 "elsif"
 "elseif"
 "error"
 "esi"
 "fallthrough"
 ;"goto"
 "if"
 "include"
 "local"
 "return"
 "set"
 "sub"
 "switch"
] @keyword

; Punctioation

[
  ","
  ";"
] @punctuation.delimiter

[
  "("
  ")"
  "{"
  "}"
]  @punctuation.bracket

[
 ;"+"
 "||"
 "&&"
] @operator

; Comments

(comment) @comment @spell

(call_statement
  ident: (ident) @function.call)

; Identifiers

(type) @type
(ident) @variable
(dot_ident) @variable

; Literals
(number) @number
(string) @string @spell
