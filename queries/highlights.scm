; Keywords

[
 "acl"
 "add"
 "backend"
 "break"
 "case"
 "call"
 "declare"
 "default"
 "director"
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
 "log"
 "penaltybox"
 "ratecounter"
 "return"
 "remove"
 "restart"
 "set"
 "sub"
 "synthetic"
 "synthetic.base64"
 "switch"
 "table"
 "unset"
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
  "="
  "+"
  "="
  "+="
  "-="
  "*="
  "/="
  "%="
  "|="
  "&="
  "^="
  "<<="
  ">>="
  "rol="
  "ror="
  "&&="
  "||="
  "=="
  "!="
  "~"
  "!~"
  ">"
  "<"
  ">="
  "<="
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
(escape_sequence) @escape
(bool) @constant.builtin
