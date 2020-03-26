#include "lists.h"
/**
 * listint_len - function that returns the number of elements in LL.
 * @h: linked list head pointer.
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
		h = h->next;

	return (i);
}
