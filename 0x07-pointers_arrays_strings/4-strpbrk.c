#include "main.h"
/**
 * *_strpbrk - searches a string
 * @s: string to search
 * @accept: string containing the characters
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or Null if no byte is found/
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
