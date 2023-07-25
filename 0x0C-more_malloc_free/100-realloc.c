#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: a pointer to allocated memory
 * @old_size: size of the allocated memory
 * @new_size: size of the new allocated memory
 * Return: pointer to the allocatde memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_size;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (new_ptr);
	}
	copy_size = old_size < new_size ? old_size : new_size;
	memcpy(new_ptr, ptr, copy_size);
	free(ptr);
	return (new_ptr);
}
