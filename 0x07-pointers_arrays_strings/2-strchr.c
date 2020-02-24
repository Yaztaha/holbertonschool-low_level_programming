#include "holberton.h"
/**
 * _strchr - points the first occurence of character.
 * @s: pointer.
 * @c: character.
 * Return: NULL.
 */
char *_strchr(char *s, char c)
{
	char a;

	a = c;

	for (;; ++s)
	{
		if (*s == a)
			return ((char *)s);
		if (*s == '\0')
			return (0);
	}
}
