#include <stdio.h>
#include <stdlib.h>

/**
 * print_bytes - prints the bytes
 * @array: pointer to character
 * @bytes: number of bytes to be printed
 */

void print_bytes(char *array, int bytes)
{
	int i;

	for (i = 0; i < bytes; i++)
	{
		if (i == bytes - 1)
		{
			printf("%.2x\n", array[i]);
		}
		else
		{
			printf("%.2x ", array[i]);
		}
	}
}

/**
 * main - prints the opcodes
 * @argc: number of arguments
 * @argv: their array
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int bytes;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;
	print_bytes(array, bytes);
	return (0);
}
