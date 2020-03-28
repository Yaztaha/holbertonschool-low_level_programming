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
 * add_node - add a node to string beginning.
 * @head: string head double pointer.
 * @str: string to be added.
 * Return: new string.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = str_len(str);
	new_node->next = *head;

	*head = new_node;
	return (new_node);
}
