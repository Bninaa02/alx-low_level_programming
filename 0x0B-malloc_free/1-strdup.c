#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a new string
 * @str: The string to duplicate
 * Return: a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *copy;
	int i = 0;
	int size = 1;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		size++;
		i++;
	}

	copy = malloc(sizeof(char) * size);

	if (copy == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		copy[i] = str[i];

	return (copy);
}
