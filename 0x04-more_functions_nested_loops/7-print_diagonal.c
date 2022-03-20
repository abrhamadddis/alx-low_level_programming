#include "main.h"

/**
 * print_line - print diagonal n times
 *
 * @n: assign to number of diagonal
 *
 * Return: nothing
 */

void print_line(int n)
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
		_putchar(92);
	_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
