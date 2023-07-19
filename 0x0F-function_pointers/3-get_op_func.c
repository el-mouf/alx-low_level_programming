#include "calc.h"

/**
 * get_op_func - selects the correct function
 * that will perform the operation asked by users
 * @s: is the operator passed as argument
 * Return: a pointer to the function corresponding
 * to the operator given as parameter
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (*(ops[++i].o)p == *s)
		{
			break;
		}
	}
	return (ops[i].f);
}
