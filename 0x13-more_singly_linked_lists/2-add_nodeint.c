#include "lists.h"
/**
 * add_nodeint - function that adds newnode in LL.
 * @head: linked list head.
 * @n: string.
 * Return: new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
