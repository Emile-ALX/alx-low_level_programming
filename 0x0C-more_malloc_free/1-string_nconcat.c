#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - ...
* @dest: destination string
* @src: source string
* @n: size of memory to allocate
*
* Return: returns pointer of allocated memory
*/
char *string_nconcat(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *str;

	if (dest == NULL)
		dest = "";
	if (src == NULL)
		src = "";

	while (dest[i])
		i++;

	while (src[k])
		k++;

	if (n >= k)
		l = i + k;
	else
		l = i + n;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
	return (NULL);

		k = 0;
	while (j < l)
	{
	if (j <= i)
	str[j] = dest[j];

	if (j >= i)
	{
	str[j] = src[k];
	k++;
	}
	j++;
	}
	str[j] = '\0';
	return (str);
	}
