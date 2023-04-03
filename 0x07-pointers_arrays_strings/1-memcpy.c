#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *destStart = dest;

	while (n--)
	{
		*dest++ = *src++;
	}

	return (destStart);
}
