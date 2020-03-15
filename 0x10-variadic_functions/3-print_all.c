#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{	va_list ap;
	int i = 0;
	int j = 0;
	char *s;

	va_start(ap, format);
	while (format && format[i])
	{
		switch (format[i])
		{
		case '1':
			printf("%i", va_arg(ap, int));
			j = 1;
			break;
		case '2':
			printf("%c", (char)va_arg(ap, int));
			j = 1;
			break;
		case '3':
			printf("%f", (float)va_arg(ap, double));
			j = 1;
			break;
		case '4':
			s = va_arg(ap, char *);
			if (s == NULL)
			{
				printf("(nil)");
				j = 1;
				break;
			}
			printf("%s", s);
			j = 1;
			break;
		}
		if (format[i + 1] != 0 && j == 1)
			printf(", ");
		i++;
		j = 0;
	}
	va_end(ap);
	printf("\n");
}
