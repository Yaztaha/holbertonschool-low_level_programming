#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data in LL.
 * @head: linked list head.
 * Return: sum ofall data (n).
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
