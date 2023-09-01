#include "main.h"

/*
 * binary_to_uint - function that converts a binary
 * number to an unsigned int
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, otherwise 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_num = 0;
	int len = strlen(b);
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		converted_num = converted_num * 2 + (b[i] - '0');
	}
	return converted_num;
}
