#include "main.h"

/**
 * set_bit - function that sets the value of a bit
 * to 1 at a given index
 * @n: number value of a bit
 * @index: starting from 0 of the bit we want to set
 * Return: 1 if it works, otherwise -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit_mask = 1 << index;

	if (n == NULL || index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= bit_mask;

	return (1);
}
