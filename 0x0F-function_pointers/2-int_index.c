#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: searched array
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used
 * Return: index of the first element
 * and -1 if no match, or if size is <= zero
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
