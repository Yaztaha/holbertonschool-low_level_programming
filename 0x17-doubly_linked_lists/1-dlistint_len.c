#include "lists.h"

/**
 * dlistint_len - Find the number of elemennts in a  linked dlistint_t list.
 * @h: head pointer to DLL.
 * Return: number of nodes in DLL.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count;

	tmp = h;
	while (tmp && tmp->prev)
		tmp = tmp->prev;

	for (count = 0; tmp; count++, tmp = tmp->next)
		;

	return (count);
}
