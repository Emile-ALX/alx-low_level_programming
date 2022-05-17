#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - write function that prints a string
 * @separator: stirng type to be printed
 * @n: number of string to print out
 * Return: return nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;

	va_start(arg, n);
	for (i = 0; i < n; i++)
	{
		if (arg == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("", va_arg(arg, char);
		}
		if (separator && i < n - 1)
		{
			printf("%s", separator)
		}
	}
	printf("\n");
	va_end(arg);
}
