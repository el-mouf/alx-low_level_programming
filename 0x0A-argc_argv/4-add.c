#include "main.h"
/**
 * main - adds positive numbers
 * @argc: is the number of arguments passed to the program
 * @argv: is an array of pointers to the string of these arguments
 * Return: Always 0. If error, returns 1
 */

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
