#include "holberton.h"
/**
 * get_endianness - function that checks the endianness.
 * Return: 1 or 0.
 */
int get_endianness(void)
{
	int i = 1;

	return (*(char *)&i);
}
