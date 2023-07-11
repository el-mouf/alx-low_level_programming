#include "main.h"

/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: duplicated sting
 * Return: a pointer to duplicated string
 * or NULL if insufficient memory
 */

char *_strdup(char *str)
{
	char *str2;
	unsigned int i, length;

	i = 0;
	length = 0;
	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length])
	{
		length++;
	}
	str2 = malloc(sizeof(char) * length + 1);
	if (str2 == NULL)
	{
		return (NULL);
	}
	while ((str2[i] = str[i]) != '\0')
	{
		i++;
	}
	return (str2);
}
