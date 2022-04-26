#include "main.h"
/**
 * print_chessboard - prints the chessboard
 * @a: chessboard length
 * Return: there is nothing to return
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	j = 0;
	while (i < 8)
	{
		while (j < 8)
		{
			j++;
			_putchar(a[i][j]);
		}
		i++;
		_putchar('\n');
	}
}
