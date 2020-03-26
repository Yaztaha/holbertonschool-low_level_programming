#include "holberton.h"
/**
 * set_bit - function sets the value of a bit to 1.
 * @n: number.
 * @index: index.
 * Return: 1.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int x;

	if (!n || index > 31)
		return (-1);
	x = 1 << index;
	*n = *n | x;
	return (1);
}
