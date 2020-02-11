#include "holberton.h"
/**
 * print_sign - checks if a number is positive, negative or zero.
 * @n: number
 * Return: 1 if positive, 0 if zero, -1 if negative or not digit.
 */
int print_sign(int n)
if (n > 0)
{
_putchar ('+');
return (1);
}
else if (n == 0)
{
putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
