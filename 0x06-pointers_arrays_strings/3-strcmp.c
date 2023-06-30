#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: string number 1
 * @s2: string number 2
 * Return: returns negative if s2 is greater, positive is S1 is greater
 * 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
