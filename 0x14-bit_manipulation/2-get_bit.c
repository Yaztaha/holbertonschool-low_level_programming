#include "holberton.h"
/**
 * get_bit - function returns the value of a bit at a given index.
 * @n: number.
 * @index: index.
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 31)
		return (-1);
	x = n >> index;
	return (x & 1);
}
