#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: source string
 * @accept: prefixed string
 *
 * Return: number of bytes in the initilized string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, a, j = 0;

	while (accept[i])
	{
		a = 0;

	while (s[a] != 32)
	{
	if (accept[i] == s[a])
	{
		j++;
	}

	a++;
	}

	i++;
	}

	return (j);
}
