#include "search_algos.h"

/**
 * binary_search - sorted array of integers using the Binary search algorithm
 * @array: sorted in ascending order
 * @size: size is the number of elements in array
 * @value: value is the value to search for
 * Return: return the index where value is located
 **/

int binary_search(int *array, size_t size, int value)
{
size_t left = 0, right = size - 1, mid = 0, i = 0, j = 0;

if (array == NULL)
{
return (-1);
}
while (left <= right)
{
printf("Searching in array:");
for (i = j; i < size; i++)
{
printf(" %d", array[i]);
if (i != size - 1)
{
printf(",");
}
}

printf("\n");
mid = (left + right) / 2;
if (array[mid] == value)
{
return (mid);
}
else if (value > array[mid])
{
left = mid + 1;
j = mid + 1;
}
else
{
right = mid - 1;
size = mid;
}
}
return (-1);
}
