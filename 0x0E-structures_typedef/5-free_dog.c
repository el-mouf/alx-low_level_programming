#include "dog.h"

/**
 * free_dog - function frees dogs
 * @d: elements that will be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
