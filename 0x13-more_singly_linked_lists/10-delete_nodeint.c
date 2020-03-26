#include "lists.h"
/**
 * delete_nodeint_at_index - function taht deletes a node.
 * @head: head of linked list.
 * @index: index.
 * Return: 1 or -1.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node_tmp, *node_delete;

	if (!head || !*head)
		return (-1);
	if  (!index)
	{
		node_tmp = (*head)->next;
		free(*head);
		*head = node_tmp;
		return (1);
	}
	node_tmp = *head;
	while (--index && node_tmp)
		node_tmp = node_tmp->next;
	if (!node_tmp)
		return (-1);
	node_delete = node_tmp->next;
	node_tmp->next = node_delete->next;
	free(node_delete);
	return (1);
}
