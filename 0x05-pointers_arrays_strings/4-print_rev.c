#include "main.h"
/**
 * print_rev - a function that prints a string,
 * in reverse, followed by a new line.
 * @s: s input
 * Return: reverse a string
 */

void print_rev(char *s)
{
	int countfoward;
	int i, countback;

	for (i = 0; s[i] != '\0'; i++)
	{
		countfoward++;
	}
	for (countback = (countfoward - 1) ; countback >= 0; countback--)
	{
		_putchar(s[countback]);
	}

	_putchar('\n');
}
