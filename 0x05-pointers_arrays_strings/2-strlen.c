#include "holberton.h"
/**
 * _strlen - display the length of a string.
 * @s: a string.
 * Return: number of characters.
 */
int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != 0; i++)
	{
		len++;
	}
	return (len);
}
