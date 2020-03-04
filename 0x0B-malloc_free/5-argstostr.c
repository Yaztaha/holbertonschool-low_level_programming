#include "holberton.h"
#include <stdlib.h>
/**
 * argstostr - concatenates arguments.
 * @ac: argc.
 * @av: argv.
 * Return: concatenated arguements.
 */
char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int length = 0;
	char *s;
	int a;
	int b;
	int x = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++;
	}
	s = malloc(sizeof(char) * length + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			s[x] = av[a][b];
		x++;
		}
		s[x] = '\n';
		x++;
	}
	s[x] = '\0';
	return (s);
}
