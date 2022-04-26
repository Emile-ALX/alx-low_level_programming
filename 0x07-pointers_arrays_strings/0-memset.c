#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: a memory to fill
 * @n: a byte of memory area to fill
 * @b: a constant byte to fill
 * Return: char value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	a = 0;
	while (a < n)
	{
		a++;
		s[a] = b;
	}
	return (s);
}
