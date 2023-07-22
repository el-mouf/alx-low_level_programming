#include "variadic_functions.h"

/**
 * sum_them_all - function sums all its parameters
 * @n: a parameter
 * Return: 0 if n == 0, otherwise sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
