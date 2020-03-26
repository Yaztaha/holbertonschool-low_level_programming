#include "lists.h"
/**
 * print_listint - function that prints the elements of listint_t list.
 * @h: link list head pointer.
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
