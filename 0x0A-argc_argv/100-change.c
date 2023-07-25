#include "main.h"

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: number of arguments of the program
 * @argv: array of those arguments
 * Return: 0 if succesful, otherwise 0
 */

int main(int argc, char *argv[])
{
	int cents, i, change_count, num;
	int coins[] = {25, 10, 5, 2, 1};
	
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = sizeof(coins) / sizeof(int);
	change_count = 0;
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < num; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			change_count++;
		}
	}
	printf("%d\n", change_count);
	return (0);
}
