#include "holberton.h"
#include <stdlib.h>
/**
 * *string_nconcat - concatenates string with n bytes.
 * @s1: string 1.
 * @s2: string 2.
 * @n: number of bytes.
 * Return: concatenated string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int a = 0, b = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s2[b] != '\0')
	{
		b++;
	}
	while (s1[a] != '\0')
	{
		a++;
	}
	if (n >= b)
	{
		n = b;
	}
	p = malloc(sizeof(char) * (a + n) + 1);
	if (p != NULL)
	{
		for (a = 0; s1[a] != '\0'; a++)
		{
			p[a] = s1[a];
		}
		for (b = 0; b < n; b++)
		{
			p[a] = s2[b];
			a++;
		}
		p[a] = '\0';
		return (p);
	}
	else
	{
		return (NULL);
	}
}
