#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  print the sum of two diagonals of a ² matrix of int
 * @a: array of int
 * @size: array siye
 */
void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	i = 0;
	s1 = 0;
	s2 = 0;
	for (i = 0; i < size; i++)
	{
		s1 += *(a + i * size + i);
		s2 += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d\n", s1, s2);
}
