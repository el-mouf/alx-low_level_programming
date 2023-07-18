#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct dog - new data type
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
