#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array
 * @nmemb: Number of elements to allocate memory for
 * @size: Size of each element in bytes
 * Return: A pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < (nmemb * size))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
