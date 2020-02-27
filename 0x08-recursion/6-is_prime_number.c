#include "holberton.h"
/**
 * _num_prime - prime number.
 * @a: number.
 * @b: number to be checked with.
 * Return: 1 if  prime else 0.
 */
int _num_prime(int a, int b)
{
	if (b > (a / 2))
		return (1);
	if (a % b == 0)
		return (0);
	return (_num_prime(a, b + 1));
}
/**
 * is_prime_number - checks if a number is prime or not.
 * @n: number.
 * Return: prime number.
 *
 */
int is_prime_number(int n)
{
	int b = 2;
	int nump = 0;

	if (n <= 1)
		return (0);

	nump = _num_prime(n, b);
	return (nump);
}
