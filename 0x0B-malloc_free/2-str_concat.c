#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to string if successful, otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *ptrString;
	int i = 0, j = 0, length = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] || s2[i]; i++)
	{
		length++;
	}
	ptrString = malloc(sizeof(char) * length);
	if (ptrString == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i]; i++)
	{
		ptrString[j++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		ptrString[j++] = s2[i];
	}
	return (ptrString);
}
