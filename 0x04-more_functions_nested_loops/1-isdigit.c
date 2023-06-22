#include "main.h"
/**
 * _isdigit - checks for whether c is a digit
 * @c: is character to be checked
 * Return: 1 if c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
