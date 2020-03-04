#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - allocates 2D array.
 * @width: width.
 * @height: height.
 * Return: 2D array.
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i = 0;
	int j;

	if (width == 0 || height == 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (; i < height; i++)
	{
		*(arr + i) = malloc(sizeof(int) * width);
			if (arr == NULL)
			{
				for (j = 0; j < i; j++)
					free(*(arr + j));
				free(arr);
				return (NULL);
			}
	}
	return (arr);
}
