#include "lists.h"

/**
 * insert_dnodeint_at_idx - insert a new node at given position.
 * @head: head double pointer.
 * @idx: index.
 * @n: value to store.
 * Return: ddress of new node, or NULL if failed.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int i;

	if (*head == NULL && idx != 0)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	i = 0;
	temp = *head;
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
