#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - print name
 * @name: pointer
 * @f: function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
