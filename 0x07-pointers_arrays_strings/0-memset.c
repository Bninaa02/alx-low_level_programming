#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: address of memory to fill
 * @b: constant byte
 * @n: number of bytes to fill
 * Return: a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	int counter = 0;

	while (n > 0)
	{
		s[counter] = b;
		n--;
		counter++;
	}
	return (s);
}
