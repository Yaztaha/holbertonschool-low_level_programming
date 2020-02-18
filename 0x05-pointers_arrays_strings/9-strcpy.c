#include "holberton.h"
/**
 * *_strcpy - copy a string pointed to.
 * @dest : destination.
 * @src : source.
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
