#include "lists.h"
/**
 * free_listint - frees linked list.
 * @head: linked list head.
 */
void free_listint(listint_t *head)
{
	listint_t *freell;

	while (head != NULL)
	{
		freell = head;
		head = head->next;
		free(freell);
	}
	free(head);
}
