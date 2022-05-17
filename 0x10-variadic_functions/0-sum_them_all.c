#include "variadic_functions.h"

/**
 * sum_them_all - write a function that add all arguments
 * @n: int value of an arguments
 * Return: zero if n equal zero or arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	double sum = 0;
	va_list list;

	if (n == 0)
	{
		return (0);
	}
	va_start(list, n);

	for (int i = 0; i < n; i++)
	{
		sum + = va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
