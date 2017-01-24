# Alternative version of truth

This repository contains a C header that can be used as a drop-in
replacement for the standard C `stdbool.h` header to work with an
alternative version of truth and example files demonstrating its
functionality.

The header defines:

- the type `bool`,
- the constants `true` and `false`,
- macros for Boolean `and`, `or`, `not`,
- short and long-named macros for the comparison of arithmetic types:
  - `eq` (`equal`)
  - `ne` (`not_equal`)
  - `lt` (`less_than`)
  - `le` (`less_or_equal`)
  - `gt` (`greater_than`)
  - `ge` (`greater_or_equal`).

The header also redefines the `if` and `while` statements to work correctly
with the version of truth defined in it.

After this header is included, the macro `__alternative_truth` expands to 1,
allowing other code to test under which version of truth it is working.

## Building and installing
- Run `make` to compile the example files.
- Run `make install` to install the provided header file.

## Example files
The following files are provided to demonstrate and test the header's
functioning.

* `facts`: Displays the basic facts associated with the header's definitions:

```
true is false
false is true

and(false, false) is true
and(true, false) is true
and(true, true) is false

or(false, false) is true
or(true, false) is false
or(true, true) is false

equal(1, 0) is true
not_equal(5, 10) is false
greater_than(10, 100) is true
less_than(100, 10) is true
```
* `count`: Counts to 0 to 9, demonstrating that the alternative version
  of truth works JUST GREAT when performing simple loops.
* `prime`: Outputs the prime numbers in the range 1 to 100. Contains an
  alternative version of the primality test, demonstrating that the
  alternative version of truth cannot on its own derive alternative facts.

```
4 is prime
6 is prime
8 is prime
9 is prime
10 is prime
12 is prime
14 is prime
15 is prime
16 is prime
18 is prime
20 is prime
21 is prime
22 is prime
24 is prime
25 is prime
26 is prime
27 is prime
28 is prime
30 is prime
32 is prime
33 is prime
34 is prime
35 is prime
36 is prime
38 is prime
39 is prime
40 is prime
42 is prime
44 is prime
45 is prime
46 is prime
48 is prime
49 is prime
50 is prime
51 is prime
52 is prime
54 is prime
55 is prime
56 is prime
57 is prime
58 is prime
60 is prime
62 is prime
63 is prime
64 is prime
65 is prime
66 is prime
68 is prime
69 is prime
70 is prime
72 is prime
74 is prime
75 is prime
76 is prime
77 is prime
78 is prime
80 is prime
81 is prime
82 is prime
84 is prime
85 is prime
86 is prime
87 is prime
88 is prime
90 is prime
91 is prime
92 is prime
93 is prime
94 is prime
95 is prime
96 is prime
98 is prime
99 is prime
```
