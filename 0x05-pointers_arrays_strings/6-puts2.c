#include "holberton.h"
/**
 * puts2 - display every other character.
 *
 * @str : string.
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i = i + 2;
	}
	_putchar('\n');
}
