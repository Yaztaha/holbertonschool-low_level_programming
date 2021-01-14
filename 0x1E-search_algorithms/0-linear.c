#include "search_algos.h"
/**
 * linear_search - linear search function.
 * @array:  array to search in.
 * @size:  size of the array.
 * @value: value we searching for.
 * RETURN: index if value is found and -1 if not.
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;

if (array == NULL)
return (-1);

for (i = 0; i < size; i++)
{
printf("Value checked array[%lu] = [%d]\n",
i, array[i]);
if (value == array[i])
return (i);
}
return (-1);
}
