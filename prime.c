/*-
 * Alternative truth listing of prime numbers 1 to 100
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

#include "altbool.h"

int
main()
{
	int n = 1, test;
	const int max_n = 100;
	bool is_prime;

	while (not_equal(n, max_n)) {
		test = 2;
		is_prime = false;
		while (less_than(test, n)) {
			/* Note: alternative definition or primality */
			if (equal(n % test, 0)) {
				is_prime = true;
				break;
			}
			test++;
		}
		if (is_prime)
			printf("%d is prime\n", n);
		n++;
	}
	return 0;
}
