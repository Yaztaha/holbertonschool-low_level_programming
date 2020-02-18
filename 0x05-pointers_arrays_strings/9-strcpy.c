#include "holberton.h"
/**
 * *_strcpy - copy a string pointed to.
 * @dest : destination.
 * @src : source.
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0, i = 0;

	while (src[n])
	{
		n++;
	}
	n -= 1;
	while (i <= n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
