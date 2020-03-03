#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars.
 * @size: size of array.
 * @c: character.
 *
 * Return: Pointer
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	a = malloc(size);

	if (a == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		*(a + i) = c;
	}
	*(a + i) = '\0';

	return (a);
}
