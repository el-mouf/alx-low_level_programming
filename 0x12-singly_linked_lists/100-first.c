#include "lists.h"

void __attribute__((constructor)) print_first(void);

/**
 * print_first - prints a message before the
 * main function
 */

void print_first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
