#include "holberton.h"
/**
 *
 *
 *
 */
char *_strcat(char *dest, char *src)
{
	while(*dest)
		dest++;
	while(*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return 0;
}
