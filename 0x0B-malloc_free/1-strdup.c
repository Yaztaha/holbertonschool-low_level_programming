#include "holberton.h"
#include "string.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * _strdup - duplicate
 * @str: string
 * Return: duplicated string
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}
	else
		return (strdup(str));
}
