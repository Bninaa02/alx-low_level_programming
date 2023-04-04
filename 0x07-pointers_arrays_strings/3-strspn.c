#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: input
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	int i, j;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}
	return (len);
}
