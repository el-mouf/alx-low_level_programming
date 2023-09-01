#include "main.h"

/**
 * get_bit - function that returns the value of
 * a bit at a given index
 * @n: evaluated number
 * @index: the index starting from 0 of the bit we want to get
 * Return: the value of the bit at index, otherwise -1
 * if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_mask = 1 << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	if (n & bit_mask)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
