#include "main.h"
/**
 * print_sign - prints the sign of a number
 *
 * @n: is a number
 *
 * Return: 1 if greater than 0. 0 if equals 0. -1 if lower than zero
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
