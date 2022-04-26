#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print the sum of two diagonals of square matrix
 *
 * @a: the matrix
 * @size: the size of matrix
 *
 * Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, fsum = 0, ssum = 0;

	for (i = 0; i < size; i++)
	{
	fsum += a[(size + 1) * i];
	ssum += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", fsum, ssum);
}
