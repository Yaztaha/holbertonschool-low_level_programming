#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at given position.
 * @h: head double pointer.
 * @idx: index.
 * @n: value to store.
 * Return: ddress of new node, or NULL if failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp, *store;
	unsigned int i = 0;
	unsigned int number_nodes = 0;

	temp = *h;
	while (temp)
	{
		number_nodes += 1;
		temp = temp->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	if (idx == number_nodes)
		return (add_dnodeint_end(h, n));
	new->n = n;
	temp = *h;
	while (temp)
	{
		if (i == idx - 1)
		{
			store = temp->next;
			temp->next = new;
			new->prev = temp;
			new->next = store;
			store->prev = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	return (NULL);
}
