#include "main.h"

/**
 * is_prime_number - detects prime numbers
 * @n: number
 * Return: 1 if n is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	int i = n / 2;

	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, i));
}

/**
 * actual_prime - detects prime numbers recursively
 * @n: number
 * @i: iterator
 * Return: 1 if n is a prime number, otherwise 0
 */

int actual_prime(int n, int i)
{
	if (i <= 1)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
