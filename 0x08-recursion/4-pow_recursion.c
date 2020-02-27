#include "holberton.h"
/**
 * _pow_recursion - power of a number.
 * @x: first number.
 * @y: power value number
 * Return: -1 if lower than zero.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	return (1);
}
