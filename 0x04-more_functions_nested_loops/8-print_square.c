#include "main.h"

/**
 *print_square - prints n size square
 *@n: Input
 *Return: Nothing return
 */

void print_square(int n)
{
int l, m;

if (n > 0)
{
for (m = 1; m <= n; m++)
{
for (l = 1; l <= n; l++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
