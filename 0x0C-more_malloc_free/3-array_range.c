#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: mmin range
 * @max: max range
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (!arr)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
