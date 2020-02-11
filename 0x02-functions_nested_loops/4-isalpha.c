#include "holberton.h"
/**
 * _isalpha - checks for alphabetic character.
 * @c: char type.
 *Return: 1 if c is an alphebetic character, else 0.
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
