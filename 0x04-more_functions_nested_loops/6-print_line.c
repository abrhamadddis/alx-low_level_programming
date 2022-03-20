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
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i = 0;

		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	_putchar('\n');
	}
}
