#include "main.h"

/**
 * print-square - print square in a size of size
 *
 * @size: input
 *
 * Return: nothing
 */

void print_square(int size)
{
	int i;

	int j;

	if (n > 0)
	{
		for (i = 0; i <= size; i++)
		{
			for (j = 0; j <= size; j++)
			{
				_Putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
