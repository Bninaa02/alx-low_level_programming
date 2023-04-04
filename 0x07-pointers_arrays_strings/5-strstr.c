#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack: input string
 * @needle: substring
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	if (needle[0] == '\0')
		return (haystack);

	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			k = i;
			while (needle[j] != '\0' && haystack[k] != '\0')
			{
				if (needle[j] != haystack[k])
					break;
				j++;
				k++;
			}
			if (needle[j] == '\0')
				return (&haystack[i]);
		}
		i++;
	}
	return (0);
}
