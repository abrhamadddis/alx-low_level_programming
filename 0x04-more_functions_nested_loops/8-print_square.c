#include "main.h"

/**
 * print-square - print square in a size of size
 *
 * @size: input
 *
 * Return: nothing
 */

void print_square(int n)
{
	int i;

	int j;

	if (n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				_Putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
