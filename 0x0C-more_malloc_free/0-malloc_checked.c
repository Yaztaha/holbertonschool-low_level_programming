#include "holberton.h"
#include <stdlib.h>

/**
 * *malloc_checked - memory allocation.
 * @b: allocated memory value.
 * Return: pointer.
 */

void *malloc_checked(unsigned int b)
{
	void *point;

	point = malloc(b);

	if (point == NULL)
	{
		exit(98);
	}

	return (point);
}
