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
	unsigned int i, j, length1 = 0, length2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[length1] != '\0')
	{
		length1++;
	}
	while (s2[length2] != '\0')
	{
		length2++;
	}
	if (n >= length2)
	{
		n = length2;
	}
	ptrConcat = malloc(sizeof(char) * (length1 + n + 1));
	if (ptrConcat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
		ptrConcat[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		ptrConcat[i + j] = s2[j];
	}
	ptrConcat[i + j] = '\0';
	return (ptrConcat);
}
