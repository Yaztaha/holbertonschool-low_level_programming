#include "holberton.h"
/**
 * jack_bauer - prints every minute of the day.
 * Return: voiud.
 */
void jack_bauer(void)
{
int x;
int y;
for (x = 0; x <= 23; x++)
{
for (y = 0; y <= 59; y++)
{
_putchar((h / 10) + '0');
_putchar((h % 10) + '0');
_putchar(':');
_putchar((m / 10) + '0');
_putchar((m % 10 + '0');
_putchar('\n');
}
}
}
}
