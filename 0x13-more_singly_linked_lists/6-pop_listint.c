#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of LL.
 * @head: linked list head.
 * Return: head node data.
 */
int pop_listint(listint_t **head)
{
	listint_t *newnode;
	int data;

	newnode = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = newnode;
	return (data);
}
