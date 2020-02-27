#include "holberton.h"
/**
 * _strlen_recursion - string length.
 * @s: string.
 * Return: string l.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
/**
 * pal - strings comparison.
 * @s: pointer.
 * @a: value a.
 * @b: value b.
 * Return: 1.
 */
int pal(char *s, int a, int b)
{
	if (a < b)
	{
		if (s[a] == s[b])
			return (pal(s, a + 1, b - 1));
		else if (s[a] != s[b])
			return (0);
	}
	return (1);
}
/**
 * is_palindrome - checks if it is palindrome.
 * @s: pointer.
 * Return: 1 if true 0 if false.
 */
int is_palindrome(char *s)
{
	return (pal(s, 0, _strlen_recursion(s) - 1));
}
