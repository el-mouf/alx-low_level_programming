#include "variadic_functions.h"

/**
 * print_int - pints an integer
 * @arg: arguments pointing to the int
 */

void print_int(va_list arg)
{
	int number = va_arg(arg, int);

	printf("%d", number);
}

/**
 * print_char - prints a character
 * @arg: arguments pointing to chars
 */

void print_char(va_list arg)
{
	char character = va_arg(arg, int);

	printf("%c", character);
}

/**
 * print_float - prints float
 * @arg: arguments pointing to floats
 */

void print_float(va_list arg)
{
	float number = va_arg(arg, double);

	printf("%f", number);
}

/**
 * print_string - prints a string of characters
 * @arg: arguments pointing to string
 */

void print_string(va_list arg)
{
	char *string = va_arg(arg, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", string);
}

/**
 * print_all - function that prints anything
 * @format: types of arguments passed
 * to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	int j = 0;

	va_list args;

	char *sep = "";

	printer_t print_functions[] = {
		{"i", print_int},
		{"f", print_float},
		{"c", print_char},
		{"s", print_string}
	};

	va_start(args, format);

	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(print_functions[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", sep);
			print_functions[j].print(args);
			sep = ", ";
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
