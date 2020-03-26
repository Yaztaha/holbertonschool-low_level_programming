#include "holberton.h"

/**
 * clear_bit - function sets the value of a bit to 0 at given index.
 * @n: number.
 * @index: index.
 * Return: 1 or -1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int x;

	if (!n || index > 31)
		return (-1);
	x = ~(1 << index);
	*n = *n & x;
	return (1);
}
