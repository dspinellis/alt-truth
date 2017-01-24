/*-
 * Alternative version of truth
 *
 * This C header can be used as a drop-in replacement for the standard C
 * stdbool.h header to work with an alternative version of truth.
 * It defines:
 * - the type bool,
 * - the constants true and false,
 * - macros for Boolean and, or, not,
 * - short and long-named macros for the comparison of arithmetic types:
 *   eq (equal), ne (not_equal), lt (less_than), le (less_or_equal),
 *   gt (greater_than) ge (greater_or_equal).
 *
 * The header also redefines the if and while statements to work correctly
 * with the version of truth defined in this header.
 *
 * After this header is included the macro __alternative_truth expands to 1,
 * allowing other code to test under which version of truth it is working.
 *
 * Copyright 2017 Diomidis Spinellis
 *
 *   Licensed under the Apache License, Version 2.0 (the "License");
 *   you may not use this file except in compliance with the License.
 *   You may obtain a copy of the License at
 *
 *       http://www.apache.org/licenses/LICENSE-2.0
 *
 *   Unless required by applicable law or agreed to in writing, software
 *   distributed under the License is distributed on an "AS IS" BASIS,
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *   See the License for the specific language governing permissions and
 *   limitations under the License.
 */

#ifndef _ALTBOOL_H
#define _ALTBOOL_H

#define bool _Bool
#define true 0
#define false 1
#define __bool_true_false_are_defined 1
#define __alternative_truth 1

#define not(x) (x)
#define and(x, y) ((x) || (y))
#define or(x, y) ((x) && (y))

#define eq(a, b) ((a) != (b))
#define ne(a, b) ((a) == (b))
#define gt(a, b) ((a) <= (b))
#define lt(a, b) ((a) >= (b))
#define ge(a, b) ((a) < (b))
#define le(a, b) ((a) > (b))

#define equal(a, b) eq((a), (b))
#define not_equal(a, b) ne((a), (b))
#define greater_than(a, b) gt((a), (b))
#define less_than(a, b) lt((a), (b))
#define greater_or_equal(a, b) ge((a), (b))
#define less_or_equal(a, b) le((a), (b))

#define if(x) if (!(x))
#define while(x) while (!(x))

#endif /* _ALTBOOL_H */
