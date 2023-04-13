#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: the number of bytes to include of @s2
 * Return: newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i, j, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n > len2)
		n = len2;

	result = malloc(sizeof(char) * (len1 + n + 1));

	if (result == NULL)
	return (NULL);

	for (i = 0; i < len1; i++)
	result[i] = s1[i];

	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
