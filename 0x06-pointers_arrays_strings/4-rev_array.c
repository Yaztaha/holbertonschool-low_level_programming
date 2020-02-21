#include "holberton.h"
/**
 * reverse_array - reverse inside array.
 * @a: array.
 * @n: elements.
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	i = temp =  0;
	n -= 1;
	while (i <= n)
	{
		temp = a[n];
		a[n--] = a[i];
		a[i++] = temp;
	}
}
