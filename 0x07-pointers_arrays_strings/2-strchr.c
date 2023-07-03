#include "main.h"
/**
 * *_strchr - locates a character in a string
 * @s: string where to locate character
 * @c: character to locate
 * Return: pointer to 1st occurance of c in s
 * or NULL if character not found
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
