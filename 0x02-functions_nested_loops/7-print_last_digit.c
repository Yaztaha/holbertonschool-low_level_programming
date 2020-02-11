#include "holberton.h"
/**
 * print_last_digit - prints the last digit.
 *
 * @x: integer.
 *
 * Return: integer last digit.
 */
int print_last_digit(int x)
{
int lastDigit = 0;
lastDigit = x % 10;
if (x < 0)
lastDigit = lastDigit * -1;
_putchar(lastDigit + 0);
return (lastDigit);
}
