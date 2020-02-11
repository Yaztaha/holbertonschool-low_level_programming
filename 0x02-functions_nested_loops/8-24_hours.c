#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day.
 * Return: voiud.
 */
void jack_bauer(void)
{
int x;
int y;
x = 0;
y = 0;
{
for (x = 0; x < 24; x++)
{
for (y = 0; y < 60; y++)
{
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
_putchar(':');
_putchar((y / 10) + '0');
_putchar((y % 10 + '0');
_putchar('\n');
}
}
}
}
