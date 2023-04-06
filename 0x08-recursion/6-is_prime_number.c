#include "main.h"

/**
 * is_prime - Check if the number is a prime number
 * @n: number
 * @i: divisor
 * Return: 1 if n is a prime, 0 if n isn't
 */
int is_prime(int n, int i)
{
	if (n == i)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (is_prime(n, i + 1));
}
/**
 * is_prime_number - check ifthe number is a prime number
 * @n: number
 * Return: 1 if n is a prime, 0 if n isn't
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime(n, 2));
}
