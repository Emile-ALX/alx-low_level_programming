#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: char
 * @s2: char
 * Return: string
 */

int _strcmp(char *s1, char *s2)
{
	int stp1 = 0, stp2 = 0, temp, comp = 0, newVal = 0;

	while (s1[stp1])
	{
		stp1++;
	}
	while (s2[stp2])
	{
		stp2++;
	}
	if (stp1 <= stp2)
	{
		temp = stp1;
	}
	else
	{
		temp = stp2;
	}
	while ( comp < = temp)
	{
	if (s1[comp] == s2[comp])
	{
		comp++;
		continue;
	}
	else
	{
		newVal = s1[comp] - s2[comp];
		break;
	}
	comp++
	}	
	return (newVal);
}
