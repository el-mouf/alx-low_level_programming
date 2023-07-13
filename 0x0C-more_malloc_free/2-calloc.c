#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: a number of elements of size bytes
 * @size: bytes to be allocated
 * Return: a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptrMemory;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptrMemory = malloc(nmemb * size);
	if (ptrMemory == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < (nmemb * size); i++)
		{
			ptrMemory[i] = 0;
		}
	}
	return (ptrMemory);
}
