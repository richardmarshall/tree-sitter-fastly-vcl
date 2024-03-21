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
 "fallthrough"
 ;"goto"
 "if"
 "include"
 "local"
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

; Comments

(comment) @comment

; Identifiers

(type) @type
(ident) @variable
(dot_ident) @variable

; Literals
(number) @number
