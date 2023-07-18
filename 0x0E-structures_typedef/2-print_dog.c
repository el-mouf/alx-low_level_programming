#include "dog.h"

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if (d->name != NULL)
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("nul\n");
	}
	if (d->age < 0)
	{
		printf("nil\n");
	}
	else
	{
		printf("Age: %f\n", d->age);
	}
	if (d->owner != NULL)
	{
		printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("nil\n");
	}
}
