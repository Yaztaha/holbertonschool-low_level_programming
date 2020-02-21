#include "holberton.h"
/**
 * _strncpy - copies a string to n characters.
 * @dest: destination.
 * @src: source.
 * @n: number.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
		dest[i] = src[i];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
