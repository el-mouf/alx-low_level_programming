#include "main.h"
#include <stdio.h>

/**
 * errors - gives errors
 */

void error(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * is_digit - takes a character and returns int
 * @s: the character
 * Return: if c is a digit returns 1,
 * otherwise 0
 */

int is_digit(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - checks if the number of arguments is correct
 * @argc: number of arguments
 * @argv: the arguments
 * Return: Always 0
 */

int main(int argc, char * argv[])
{
	const char *s1, *s2;
	int len1, len2, len, i, carry, num1, num2, *product, a = 0;

	if (argc != 3 || !is_digit(argv[1]) ||!is_digit(argv[2]))
	{
		error();
	}
	s1 = argv[1];
	s2 = argv[2];
	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2 + 1;
	product = malloc(sizeof(int) * len);

	if (!product)
	{
		return (1);
	}
	for (i = 0; i <= len1 + len2; i++)
	{
		product[i] = 0;
	}
	for (len1 = len1 - 1; len1 >= 0; len--)
	{
		num1 = s1[len1] - '0';
		carry = 0;
		for (len2 = strlen(s2) - 1; len2 >= 0; len2--)
		{
			num2 = s2[len2] - '0';
			carry += product[len1 + len2 + 1] + (num1 * num2);
			product[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
		{
			product[len1 + len2 + 1] += carry;
		}
	}
	for (i = 0; i < len - 1; i++)
	{
		if (product[i])
		{
			a = 1;
		}
		if (a)
		{
			_putchar(product[i] + '0');
		}
	}
	if (!a)
	{
		_putchar('0');
	}
	_putchar('\n');
	free(product);
	return (0);
}
