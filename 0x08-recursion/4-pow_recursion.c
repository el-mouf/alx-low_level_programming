#include "main.h"
/**
 * _pow_recursion - returns the value of x
 * raised by the power of y
 * @x: the base number
 * @y: the power
 * Return: x to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion(x, y - 1) * x);
}
