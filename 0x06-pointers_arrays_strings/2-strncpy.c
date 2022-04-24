#include "main.h"

/**
 * _strncpy - a function that copies a string
 * @dest: the destination file
 * @src: the source file
 * @n: copies limit
 * Return: char value
 */

char *_strncpy(char *dest, char *src, int n)
{
	int s = 0, j = 0;

	while (src[s])
	{
		s++;
	}
	while (j < n && src[j])
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\n';
		j++;
	}
	return (dest);
}
