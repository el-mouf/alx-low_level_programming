#include "main.h"
/**
 * main - prints the number of arguments
 * @argc: number of supplied arguments
 * @argv: array of pointers
 * Return: Always 0
 *
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
