#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times alphabet
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
int alph, count;
count = 0;
while (count < 10)
{
for (alph = 'a'; alph <= 'z'; alph++)
{
_putchar(alph);
}
count++;
_putchar('\n');
}
}
