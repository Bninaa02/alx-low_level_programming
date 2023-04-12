#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointer
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, size1, size2;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	size1 = 0;
	i = 0;
	while (s1[i] != '\0')
	{
		size1++;
		i++;
	}
	size2 = 0;
	i = 0;
	while (s2[i] != '\0')
	{
		size2++;
		i++;
	}

	str = malloc(sizeof(char) * (size1 + size2 + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (i < size1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j <= size2)
	{
		str[i] = s2[j];
		j++;
		i++;
	}
	return (str);
}
