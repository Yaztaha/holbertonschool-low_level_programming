#include "lists.h"

/**
 * insert_dnodeint_at_idx - insert a new node at given position.
 * @h: head double pointer.
 * @idx: index.
 * @n: value to store.
 * Return: ddress of new node, or NULL if failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *current;
	dlistint_t *new;

	if (h == NULL)
		return (NULL);
	if ((*h == NULL && idx == 0) || idx == 0)/*empty but insert at 0*/
		return (add_dnodeint(h, n));
	if (*h == NULL && idx != 0)/*empty list w/ impossible idx*/
		return (NULL);
	current = *h;
	for (count = 0; count < idx && current != NULL; count++)
		current = current->next;/*take me to end or correct position*/
	if (count < idx)/*if idx is an illegal position*/
		return (NULL);
	if (count == idx && current == NULL)/*if count is at the end of the list*/
		return (add_dnodeint_end(h, n));
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = current;
	new->prev = current->prev;
	current->prev->next = new;
	current->prev = new;
	return (new);
}
