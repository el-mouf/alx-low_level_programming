#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all arguments
 * in our program
 * @ac: count of arguments
 * @av: pointer to an array
 * Return: Null if ac equals 0, or av equals NULL
 * or if fails
 * otherwise returns a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int i, length = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i]) + 1;
	}

	str = malloc(length + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	str[0] = '\0';

	for (i = 0; i < ac; i++)
	{
		strcat(str, av[i]);
		strcat(str, "\n");
	}
	return (str);
}
