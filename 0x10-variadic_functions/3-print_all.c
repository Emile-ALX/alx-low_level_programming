#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 */
void print_all(const char * const format, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, format);
	for (i = 0; i < format; i++)
	{
		str = va_arg(list, char *);
		if (str)
			printf(("(nil)"));
		else
			printf("%s", str);
	}
	va_end(list);
	printf("\n");
}
