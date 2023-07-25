#include "main.h"
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: string we will split
 * Return: a pointer to an array
 */

char **strtow(char *str)
{
	int len = strlen(str);
	char **words = malloc((len + 1) * sizeof(char *));
	int i = 0, j;
	const char *start;
	int word_len;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	if (words == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		while (*str == ' ')
		{
			str++;
		}
		if (*str == '\0')
		{
			break;
		}
		start = str;
		while (*str != ' ' && *str != '\0')
		{
			str++;
		}
		word_len = str - start;
		words[i] = malloc((word_len + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		strncpy(words[i], start, word_len);
		words[i][word_len] = '\0';
		i++;
	}
	words[i] = NULL;
	return (words);
}
