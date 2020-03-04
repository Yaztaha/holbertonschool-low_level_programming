#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings.
 * @s1: string 1.
 * @s2: string 2.
 * Return: concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	char *s;
	int len1 = 0;
	int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	s = malloc(sizeof(char) * len1 + len2 + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	while (*s1 != '\0')
	{
		s[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		s[i] = *s2;
		s2++;
		i++;
	}
	return (s);
		}
