#include "holberton.h"
#include <stdio.h>
/**
 * print_array - prints a number of characters in an array.
 * @a : array.
 * @n : number.
 */
void print_array(int *a, int n)
{
	int j;

	n -= 1;
	for (j = 0; j <= n; j++)
	{
		printf("%d", a[j]);
		if (j != n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
