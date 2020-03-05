#include "holberton.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory for array.
 * @nmemb: integer.
 * @size: size.
 * Return: pointer.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int s;

	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}

	p = malloc(nmemb * size);

	if (p == 0)
		return (p);
	for (s = 0; s < (nmemb * size); s++)
		p[s] = 0;
	return (p);
}
