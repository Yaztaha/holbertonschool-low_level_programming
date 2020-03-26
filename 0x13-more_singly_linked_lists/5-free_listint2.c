#include "lists.h"
/**
 * free_listint2 - free a linked list.
 * @head: linked list head.
 */
void free_listint2(listint_t **head)
{
	listint_t *freell2;

	while (*head != NULL)
	{
		freell2 = (*head)->next;
		free(*head);
		*head = freell2;
	}
	*head = NULL;
}
