#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integer
 * @min: minimum number
 * @max: maximum number
 *
 * Return: integer value allocated in pointer
 */
int *array_range(int min, int max)
{
	int *p, l = 0;

	if (min > max)
	return (NULL);

	p = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (p == NULL)
	return (NULL);

	while (min <= max)
	{
		p[l] = min;
		l++;
		min++;
	}

	return (p);
}
