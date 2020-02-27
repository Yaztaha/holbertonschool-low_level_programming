#include "holberton.h"
/**
 * _sqrt_rec - usage of another variable.
 * @x: number.
 * @y: square root.
 * Return: root.
 */
int _sqrt_rec(int x, int y)
{
	if (x < 0)
		return (-1);
	if (y * y == x)
		return (y);
	else if (x != y)
		return (_sqrt_rec(x, y + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - natural square root.
 * @n: number.
 * Return: root.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_rec(n, 1));
}
