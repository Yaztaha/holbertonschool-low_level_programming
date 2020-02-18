#include "holberton.h"
#include <string.h>
/**
 * rev_string - print string in reverse order.
 * @s : string to print.
 *
 */
void rev_string(char *s)
{
	char *a, *b;

	a = s;
	b = s + strlen(s) - 1;
	while (a < b)
	{
		char temp = *a;
		*a = *b;
		*b = temp;
		a++;
		b--;
	}
}
