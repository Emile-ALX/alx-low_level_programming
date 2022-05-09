#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory of an array
 * @nmemb: number of members
 * @size: size of memory to allocates
 *
 * Return: returns pointer of allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	int a = 0, b = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = nmemb * size;
	s = malloc(b);

	if (s == NULL)
		return (NULL);

	while (a < b)
	{
		s[a] = 0;
		a++;
	}
	return (s);
}
