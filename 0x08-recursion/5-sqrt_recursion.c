#include "main.h"

/**
 * _sqrt_root - returns the square root of a number
 * @n: int
 * @i: number
 * @r: square root
 * Return: square root
 */
int _sqrt_root(int i, int n, int r)
{
	n = n - i;
	if (n > 0)
	{
		r += 1;
		i += 2;
		return (_sqrt_root(i, n, r));
	} else if (n == 0)
	{
		return (r += 1);
	}
	return (-1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int root = _sqrt_root(1, n, 0);

	return (root);
}
