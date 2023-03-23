#include "main.h"

/**
 * print_line - a function that draws a straight line
 * @n: a given number
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
