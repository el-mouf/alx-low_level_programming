#include "dog.h"

/**
 * _strlen - length of a sting
 * @str: evaluated string
 * Return: returns the length of the string
 */

int _strlen(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/**
 * _strcpy - copies a string
 * @dest: destination
 * @src: source
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0, i;

	while (src[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * new_dog - function that creates a new dog
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner's name
 * Return: new dog, NULL if failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int length1, length2;

	length1 = _strlen(name);
	length2 = _strlen(owner);

	newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
	{
		return (NULL);
	}
	newDog->name = malloc(sizeof(char) * (length1 + 1));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	_strcpy(newDog->name, name);
	newDog->age = age;
	newDog->owner = malloc(sizeof(char) * (length2 + 1));
	if (newDog->owner == NULL)
	{
		free(newDog);
		free(newDog->name);
		return (NULL);
	}
	_strcpy(newDog->owner, owner);
	return (newDog);
}
