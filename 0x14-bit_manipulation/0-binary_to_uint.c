#include "holberton.h"
#include <stdio.h>

/**
 * if_digits - function checks if a string is  0 or 1.
 * @str: checked string.
 * Return: 0.
 */
int if_digits(const char *str)
{
	if (*str == '\0')
		return (1);
	if (*str == '0' || *str == '1')
		return (if_digits(str + 1));
	else
		return (0);
}

/**
 * binary_to_uint - function converts binary number to an unsigned int.
 * @b: string to be converted.
 * Return: converted string.
 */
unsigned int binary_to_uint(const char *b)
{
	int x, y;
	unsigned int z = 0;

	if (!b || !if_digits(b))
		return (0);
	for (x = 0; b[x]; x++)
		;
	x--;
	y = 1;
	while (x != -1)
	{
		z += ((b[x] - '0') * y);
		y *= 2;
		x--;
	}
	return (z);
}
