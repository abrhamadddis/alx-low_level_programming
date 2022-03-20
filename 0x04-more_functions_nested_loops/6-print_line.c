#include "main.h"

/**
 * print_line - print line n times
 *
 * @n: assign to number of line
 *
 * Return: nothing
 */

void print_line(int n)
{
	int m;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (m = 0; m < n; m++)
		{
			_putchar('_');
		}
	_putchar('\n');
	}
}
