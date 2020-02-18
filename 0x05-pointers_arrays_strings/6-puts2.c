#include "holberton.h"
/**
 * puts2 - display every other character.
 *
 * @str : string.
 */
void puts2(char *str)
{
	int n, i;

	n = 0;
	while (str[n])
	{
		n++;
	}
	n -= 1;
	for (i = 0; i <= n; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
