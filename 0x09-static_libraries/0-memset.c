#include "main.h"
/**
 *  * _memset - fills memory with a const byte
 *   * @n: bytes to be filled
 *    * @s: points to the memory
 *     * @b: constant byte
 *      * Return: a pointer to s
 *       */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
