#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: a string where to find
 * @needle: a string to search
 * Return: character values
 */
char *_strstr(char *haystack, char *needle)
{
int i1 = 0, i2 = 0;

while (haystack[i1])
{
while (needle[i2])
{
if (haystack[i1 + i2] != needle[i2])
{
break;
}
i2++;
}
if (needle[i2] == '\0')
{
return (haystack + i1);
}
i1++;
}
return ('\0');
}
