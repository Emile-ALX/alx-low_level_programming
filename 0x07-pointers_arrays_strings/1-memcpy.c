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
	unsigned int index;

	index = 0;
	whil  (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
