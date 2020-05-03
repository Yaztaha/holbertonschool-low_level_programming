#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a `dlistint_t` list.
 * @head: head double pointer.
 * @n: value to store.
 * Return: address of new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tmp, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	tmp = *head;
	while (tmp && tmp->next)
		tmp = tmp->next;

	if (tmp)
	{
		new->prev = tmp;
		tmp->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}
	return (new);
}
