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
 "goto"
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
[
 (call_statement
  ident: (ident) @_content (#match? @_content "^(accept|bin|digest|time|std|header|querystring|math|addr|fastly|setcookie|ratelimit|json|utf8|h2|h3|table|uuid|testing|assert)\.\b"))
] @function.builtin


; Identifiers

(type) @type
(ident) @variable
(dot_ident) @variable
[
 ((dot_ident) @_content (#match? @_content "^(req|bereq|resp|beresp|obj|fastly_info|backend|stale|client|quic|tls|transport|time|now|esi|math\.[A-Z0-9_]+|director|fastly|re|workspace|ratecounter|segmented_caching|server|waf)\b"))
 ((ident) @_content (#match? @_content "^(now)\b"))
] @variable.builtin
(statement_label) @label

; Literals
(number) @number
(string) @string @spell
(escape_sequence) @string.escape
(bool) @constant.builtin
(states) @constant.builtin
