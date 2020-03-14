#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints nums followed by a new line
 * @separator: separator between numbers
 * @n: number of nums
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (separator == NULL)
		separator = "";

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i + 1 < n)
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
