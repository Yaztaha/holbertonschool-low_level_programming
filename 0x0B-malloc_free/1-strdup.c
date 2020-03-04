#include "holberton.h"
#include <stdlib.h>
/**
 * _strdup - duplicate string.
 * @str: string to be duplicated.
 * Return: New duplicated string.
 */
char *_strdup(char *str)
{
	int length = 0;
	int i;
	char *s;

	while (str[length] != '\0')
		length++;
	s = (malloc(sizeof(char) * length + 1));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length; i++)
	{
		s[i] = str[i];
	}
	s[i] = '\0';
	return (s);
}
