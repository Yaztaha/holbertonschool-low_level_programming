#include "holberton.h"
/**
 * rot13 - encodes a string by 13 characters.
 * @s: pointer.
 * Return: string.
 */
char *rot13(char *s)
{
	int i, j;
	char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char boolean;

	for (i = 0; s[i] != '\0'; i++)
	{
		boolean = 0;
		for (j = 0; alpha[j] != '\0' && boolean == 0; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = r[j];
				boolean = 1;
			}
		}
	}
	return (s);
}
