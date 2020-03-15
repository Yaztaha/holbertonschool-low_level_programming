#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - print string
 * @separator: separator
 * @n: number of agrs
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *string;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char*);
		if (string == NULL)
			printf("(nil)");
		else
		{
			printf("%s", string);
			if (i < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(ap);
	printf("\n");
}
