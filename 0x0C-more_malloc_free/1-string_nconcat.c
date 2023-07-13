#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2
 * Return: pointer to newely allocated space in memory
 * or Null if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptrConcat;
	unsigned int i;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i]; i++)
	{
		n++;
	}
	ptrConcat = malloc(sizeof(char) * (n + 1));
	if (ptrConcat == NULL)
	{
		return (NULL);
	}
	n = 0;
	for (i = 0; s1[i]; i++)
	{
		ptrConcat[n++] = s1[i];
	}
	for (i = 0; s2[i]; i++)
	{
		ptrConcat[n++] = s2[i];
	}
	ptrConcat[n] = '\n';
	return (ptrConcat);
}
