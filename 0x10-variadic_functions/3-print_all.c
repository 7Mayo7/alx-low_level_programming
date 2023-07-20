#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - Print a char.
 * @args: The va_list containing the char to print.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Print an integer.
 * @args: The va_list containing the integer to print.
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Print a float.
 * @args: The va_list containing the float to print.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Print a string.
 * @args: The va_list containing the string to print.
 */
void print_string(va_list args)
{
char *str = va_arg(args, char *);

	if (str != NULL)
	printf("%s", str);
	else
	printf("(nil)");
}

/**
 * print_all - Print anything based on the given format.
 * @format: The format string specifying the types of arguments.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";

	print_fn_t print_fn[] = {
	{'c', print_char},
	{'i', print_int},
	{'f', print_float},
	{'s', print_string},
	{0, NULL}
	};

	va_start(args, format);

	while (format && format[i])
	{
	j = 0;
	while (print_fn[j].format != 0)
	{
	if (format[i] == print_fn[j].format)
	{
	printf("%s", separator);
	print_fn[j].printer(args);
	separator = ", ";
	break;
	}
	j++;
	}
	i++;
	}

	va_end(args);
	printf("\n");
}
