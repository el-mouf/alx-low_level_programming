#include "main.h"

/**
 * flip_bits - function that returns the number of bits we need to flip
 * to get from one number to another
 * @n: the initial number
 * @m: the number to get to
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int number_xor = n ^ m;
	unsigned int bits_number = 0;

	while (number_xor)
	{
		bits_number += number_xor & 1;
		number_xor >>= 1;
	}
	return (bits_number);
}
