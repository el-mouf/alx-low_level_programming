#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: specific character
 * Return: Pointer to the array
 * NULL or 0 if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *ptrArray;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptrArray = malloc(sizeof(char) * size);
	if (ptrArray == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptrArray[i] = c;
	}
	return (ptrArray);
}
