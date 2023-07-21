#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct print_fn - Holds a format specifier and corresponding function.
 * @format: The format specifier character.
 * @printer: Function pointer to the corresponding print function.
 */

typedef struct print_fn
{
	char format;
	void (*printer)(va_list);
} print_fn_t;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif
