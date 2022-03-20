#include "main.h"

/**
 *print_diagonal - prints diagonal n times
 *@n: Input
 *Return: Nothing return
 */

void print_diagonal(int n)
{
int l, m;

if (n > 0)
{
for (m = 1; m <= n; m++)
{
for (l = m; l > 1; l--)
{
_putchar(32);
}
_putchar('\\');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
