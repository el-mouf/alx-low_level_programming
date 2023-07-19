#include "3-calc.h"

/**
 * main - prints the results of simple operations
 * @argc: number of supplied arguments
 * @argv: array of pointers to arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int number1, number2;
	char *operation;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	number1 = atoi(argv[1]);
	operation = argv[2];
	number2 = atoi(argv[3]);

	if (get_op_func(operation) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (*operation == '/' && number2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (*operation == '%' && number2 == 0)
	{
		printf("Error\n");
		exit(101);
	}
	printf("%d\n", get_op_func(operation)(number1, number2));
	return (0);
}
