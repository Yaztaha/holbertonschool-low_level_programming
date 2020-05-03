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
	dlistint_t *new_node, *temp;
	unsigned int i;

	if (*h == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}
	i = 0;
	temp = *h;
	while (i < (idx - 1) && temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	if (i != (idx - 1))
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
