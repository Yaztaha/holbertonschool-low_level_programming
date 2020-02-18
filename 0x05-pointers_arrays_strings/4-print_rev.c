#include "holberton.h"
/**
 * print_rev - prints in reverse order.
 *
 * @s : string to print.
 */
void print_rev(char *s)
{
	if (*s)
	{
		print_rev(s + 1);
		_putchar(*s);
	}
}
