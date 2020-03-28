#include "lists.h"
/**
 * str_len - function to determine the length of a string.
 * @s: string pointer.
 * Return: length of string.
 */
int str_len(const char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}
/**
 * add_node_end - adds a new node to the end of linked list
 * @head: pointer to pointer of the first node of linked list
 * @str: string to be added to the end of node
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp = (list_t *)malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);
	temp->str = strdup(str);
	temp->len = str_len(str);
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}
	else
	{
		list_t *trace = (list_t *)malloc(sizeof(list_t));

		if (trace == NULL)
		{
			return (NULL);
		}
		trace = *head;
		while (trace->next != NULL)
		{
			trace = trace->next;
		}
		trace->next = temp;
	}
	return (temp);
}
