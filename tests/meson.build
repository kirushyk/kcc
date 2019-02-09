# Copyright (c) Kyrylo Polezhaiev and contributors. All rights reserved.
# Released under the MIT license. See LICENSE file in the project root for full license information.

tests = [
    ['list.c'],
    ['lexer.c']
]

foreach filenames : tests
    filename = filenames[0]
    test_name = filename.split('.')[0].underscorify()
    exe = executable(test_name, filenames,
        include_directories: include_directories('..'),
        link_with: [
            lexer
        ],
        install: false
    )
    test(test_name, exe, timeout : 3 * 60)
endforeach
