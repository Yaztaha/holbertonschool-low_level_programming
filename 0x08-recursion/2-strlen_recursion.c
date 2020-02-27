#include "holberton.h"
/**
 *
 *
 *
 *
 */
int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return 0;
	}
	return (_strlen_recursion(s + 1) + 1);
}
