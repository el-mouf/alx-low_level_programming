#include "variadic_functions.h"


void print_all(const char * const format, ...)
{
	int i = 0;
	double f;
	char c;
	char *s;

	va_list args;
	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", s);
				}
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
		{
			printf(", ");
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
