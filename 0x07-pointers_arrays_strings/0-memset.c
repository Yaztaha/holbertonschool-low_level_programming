#include "holberton.h"
/**
 * _memset - fills the first n bytes pointed to by s with b.
 * @s: pointer.
 * @b: character.
 * @n: number of bytes.
 * Return: memory filled.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s, value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;
	return (memory);
}
