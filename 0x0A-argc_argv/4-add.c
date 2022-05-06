#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Program that takes in all integer arguments and returns the sum
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 1 if a non-integer is among the passed in arguments, 0 otherwise
 */

int main(int argc, char **argv)
{
	int a, b, addition;

	for (a = 1; a < argc; a++)
	{
	for (b = 0; argv[a][b] != '\0'; b++)
	{
	if (!isdigit(argv[a][b]))
	{
	printf("Error\n");
	return (1);
	}
	}
	addition = addition + atoi(argv[a]);
	}
	printf("%i\n", addition);
	return (0);
}
