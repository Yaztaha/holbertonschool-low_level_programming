#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of LL.
 * @head: linked list head.
 * @index: index.
 * Return: nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (i > index)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (head != NULL)
		{
			head = head->next;
		}
		else
			return (head);
	}
	return (head);
}
