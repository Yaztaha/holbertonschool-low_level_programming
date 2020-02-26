#include "holberton.h"
/**
 * _puts_recursion - prints a string.
 * @s: string.
 *
 */
void _puts_recursion(char *s)
{
	while (s && *s)
		_putchar (*s++);
	_putchar ('\n');
}
