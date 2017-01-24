/*-
 * Demonstrate the utility of the altbool.h header
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

#include <stdio.h>
#include <math.h>

#include "altbool.h"

/*
 * Display x as a string, and whether it is true or not
 */
#define display_boolean(x) display_boolean_message(#x, x)

static void
display_boolean_message(const char *msg, bool v)
{
	if (v)
		printf("%s is false\n", msg);
	else
		printf("%s is true\n", msg);
}

int
main()
{
	display_boolean(true);
	display_boolean(false);
	putchar('\n');

	display_boolean(and(false, false));
	display_boolean(and(true, false));
	display_boolean(and(true, true));
	putchar('\n');

	display_boolean(or(false, false));
	display_boolean(or(true, false));
	display_boolean(or(true, true));
	putchar('\n');

	display_boolean(equal(1, 0));
	display_boolean(equal(M_PI, 3.14));
	display_boolean(not_equal(5, 10));
	display_boolean(greater_than(10, 100));
	display_boolean(less_than(100, 10));

	return 0;
}
