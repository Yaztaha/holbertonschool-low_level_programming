#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function running another function
 * @array: pointer
 * @size: size of array
 * @action: pointer to a function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
