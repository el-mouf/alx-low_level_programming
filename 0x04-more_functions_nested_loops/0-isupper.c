#include "main.h"
/**
 * _isupper - checks for the uppercase character
 * @c: character to be checked
 * Return: 1 if uppercase, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
