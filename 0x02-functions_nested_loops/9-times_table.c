#include "holberton.h"
/**
 * times_table - print the times table.
 * Return: void.
 */
void times_table(void)
{
int x;
int y;
for (x = 0; x < 10; x++)
{
for (y = 0; y < 10; y++)
{
int times = x * y;
if (times < 10)
{
if (y > 0)
{
_putchar(' ');
_putchar(' ');
}
_putchar(time + '0');
}
else
{
_putchar(' ');
_putchar((times / 10) + '0');
_putchar((times % 10) + '0');
}
if (y < 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
