#include "main.h"
/**
 * print_line - prints a straight line in terminal
 * @n: the number of times _ is printed
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
