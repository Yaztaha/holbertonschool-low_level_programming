#include "lists.h"
/**
 * reverse_listint - function reverses a linked list.
 * @head: linked list head.
 * Return: pointer.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ex_node, *torev_node;

	if (!head || !*head)
		return (NULL);
	ex_node = *head;
	torev_node = (*head)->next;
	if (torev_node == NULL)
		return (*head);
	reverse_listint(&torev_node);
	ex_node->next->next = ex_node;
	ex_node->next = NULL;
	*head = torev_node;
	return (*head);
}
