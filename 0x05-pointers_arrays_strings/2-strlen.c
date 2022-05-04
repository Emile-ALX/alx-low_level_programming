#include <stdio.h>
/**
 * _strlen -  a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int count = 1, sum = 0;
	char length = s[0];

	while (length != '\0')
	{
		sum++;
		length = s[count++;
	}
	return (sum);
}
