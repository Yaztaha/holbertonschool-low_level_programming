#include "holberton.h"
/**
 * print_diagonal - prints  diagonal line of certain length
 * @n: lentgh of the diagonal line
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
