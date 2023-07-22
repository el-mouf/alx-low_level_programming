#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *s;
	char *separ = "";

	va_list args;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separ, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separ, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separ, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					s = "(nil)";
				}
				else
				{
					printf("%s%s", separ, s);
				}
				break;
			default:
				i++;
				continue;
		}
		separ = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
