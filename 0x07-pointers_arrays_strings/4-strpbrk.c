#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: source string
 * @accept: accepted string to look for
 * Return: a string from accepted string
 */
char *_strpbrk(char *s, char *accept)
{
int index1 = 0, index2;

while (s[index1])
{
index2 = 0;
while (accept[index2])
{
if (s[index1] == accept[index2])
{
s += index1;
return (s);
}
index2++;
}
index1++;
}
return ('\0');
}
