#include "main.h"
/**
 * _islower - checks for lower case letters
 *
 *@c: lowercase letter to check in ASCII code
 *
 * Return: 1 if c is lower case otherwise 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
