#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of LL.
 * @head: linked list head.
 * @n: string.
 * Return: new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *endnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	endnode = *head;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (endnode->next != NULL)
		endnode = endnode->next;

	endnode->next = newnode;
	newnode->next = NULL;
	return (newnode);
}
