# Copyright (c) Kyrylo Polezhaiev and contributors. All rights reserved.
# Released under the MIT license. See LICENSE file in the project root for full license information.

lexer_sources = [
    'list.c',
    'lexer.c'
]

lexer = static_library('kcc_lexer',
    lexer_sources
)

kcc_sources = [
    'main.c'
]

kcc = executable('kcc',
    kcc_sources,
    link_with: [
        lexer
    ],
    install: true
)
