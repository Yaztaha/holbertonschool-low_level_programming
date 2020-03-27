#include "lists.h"
/**
 * list_len - function that return the number of elements in LL.
 * @h: linked list head pointer.
 * Return: number of elements.
 */
size_t list_len(const list_t *h)
{
	int len;

	for (len = 0 ; h != NULL ; len++)
	{
		h = h->next;
	}
	return (len);
}
