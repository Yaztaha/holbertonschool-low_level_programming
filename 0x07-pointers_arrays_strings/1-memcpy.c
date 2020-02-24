#include "holberton.h"
/**
 * _memcpy - copies n bytes from src to dest.
 * @dest: destination.
 * @src: source.
 * @n: number of bytes.
 * Return: dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pDest = (char *)dest;
	char *pSrc = (char *)src;

	if ((pDest != 0) && (pSrc != 0))
	{
		while (n)
		{
			*(pDest++) = *(pSrc++);
			--n;
		}
	}
	return (dest);
}
