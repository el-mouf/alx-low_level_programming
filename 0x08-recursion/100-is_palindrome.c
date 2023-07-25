#include "main.h"

/**
 * is_palindrome - checks is a string is a palindrome
 * @s: the string we will check
 * Return: 1 if true, otherwise 0
 */

int is_palindrome(char *s)
{
	int i = 0;
	int length = string_length(s);

	if (*s == 0)
	{
		return (1);
	}
	return (is_pal(s, length, i));
}

/**
 * string_length - checks the length of string
 * @s: the string we will check
 * Return: return length of a string
 */

int string_length(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + string_length(s + 1));
	}
}

/**
 * is_pal - recursively checks if a string is palindrome
 * @s: the string we will check
 * @length: length of the string
 * @i: iterator index of s
 * Return: 1 if true, otherwise 0
 */

int is_pal(char *s, int length, int i)
{
	if (i >= length / 2)
	{
		return (1);
	}
	else if (s[i] != s[length - i - 1])
	{
		return (0);
	}
	else
	{
		return (is_pal(s, length, i + 1));
	}
}
