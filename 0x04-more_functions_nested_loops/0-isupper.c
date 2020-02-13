#include "holberton.h"

/**
 * _isupper - checks if a character is an uppercase.
 *
 * @c: character.
 *
 * Return: 1 if uppercase, 0 if lowercase.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
