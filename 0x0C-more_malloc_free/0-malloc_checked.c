#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size of the allocated memory
 * Return: a pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptrMemory = malloc(b);

	if (ptrMemory == NULL)
	{
		exit(98);
	}
	return (ptrMemory);
}
