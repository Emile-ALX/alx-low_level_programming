#include <stdio.h>

/**
 * swap_int - a function that swaps the values of two integers
 * @a: input1
 * @b: input2
 * Return a and b
 */

void swap_int(int *a, int *b)
{
	int swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
