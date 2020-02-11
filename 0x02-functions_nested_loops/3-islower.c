#include "holberton.h"
/**
 *_islower - if character is lowercase return 1, if not return 0.
 *@c: is a char type.
 *Return: 1 if c is lowercase , 0 if not.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
