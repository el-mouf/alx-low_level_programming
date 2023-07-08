#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the string of these arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%d\n", mul);
	return (0);
}
