#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: printed name
 * @f: pointer to the fnuction
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
