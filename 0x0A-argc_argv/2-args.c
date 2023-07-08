#include "main.h"
/**
 * main - prints all arguments that it receives
 * @argc: supplied argments
 * @argv: array of pointers
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int argument;

	for (argument = 0; argument < argc; argument++)
	{
		printf("%s\n", argv[argument]);
	}
	return (0);
}
