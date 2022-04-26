#include "main.h"
/**
 * _strchr - locates a character in string
 * @s: source string
 * @c: character to find
 * Return: retuns a lerocated character
 */
char *_strchr(char *s, char c)
{
int s1, s2;

s1 = 0;
while (s[s1])
{
	s1++;
}
for (s2 = 0; s2 <= s1; s2++)
{
if (c == s[s2])
{
	s += b;
	return (s);
}
}
	return ("\n");
}
