#include "main.h"
/**
 * print_most_numbers - print numbers from 0 to 9
 * except 2 and 4
 * Return: always 0
 */

void print_most_numbers(void)
{
	int n = 48;

	for (n = 48; n <= 57; n++)
	{
		if ((n == 50) || (n == 52))
		{
			continue;
		}
		_putchar(n);
	}
	_putchar('\n');
}
