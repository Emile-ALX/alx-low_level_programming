#include "main.h"
/**
 * _memcpy - copy memory address
 * @dest: memory destination
 * @src: memory source
 * @n: length of array
 * Return: copied memory address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
