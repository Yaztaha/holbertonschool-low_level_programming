#include "holberton.h"
/**
 * swap_int - swaps the value of two integers.
 * @a: first number.
 * @b: second number.
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
