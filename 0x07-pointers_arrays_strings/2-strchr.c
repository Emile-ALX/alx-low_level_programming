#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in string
 * @s: source string
 * @c: character to find
 * Return: retuns a lerocated character
 */
int main (void)
{	
	char *s = "hello";
	char *f;
	f = _strchr(s, 'l');
	return (0);
}
char *_strchr(char *s, char c)
{
	int s1 = 0, s2;

	while (s[s1])
	{
	s1++;
	}

	for (s2 = 0; s2 <= s1; s2++)
	{
	if (c == s[s2])
	{
	s += s2;
	return (s);
	}
	}

	return ('\0');
}
