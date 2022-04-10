#include <stdio.h>
/**
 * main - Prints the alphabetic in lower and upper case
 *   
 * Return: Always (Success)
 */
int main(void)
{
int c;

for (c = 0; c < 26; c++)
putchar("a" + c);
for (c = 0; c < 26; c++)
putchar("A" + c);

putchar('\n');

return (0);
}
