#include "holberton.h"
/**
 * print_rev - prints in reverse order.
 *
 * @s : string to print.
 */
void print_rev(char *s)
{
	int a;

for (a = 0; s[a] != '\0'; a++)

{
	}
	a--;
	while (s[a] != 0)
	{
		_putchar(s[a]);
		a--;
	}
	_putchar('\n');
}
