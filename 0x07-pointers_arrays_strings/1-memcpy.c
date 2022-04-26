#include "main.h"
/**
 * _memcpy - copy memory address
 * @dest: memory destination
 * @src: memory source
 * Return: copied memory address
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int index;

	index = 0;
	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
