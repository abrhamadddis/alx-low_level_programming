#include "main.h"

/**
 * times_table - list 9 times table
 *
 * Description: list 9 times table
 *
 * Return: nothing
 */

void times_table(void)
{
	j = 0;

	while (j <= 9)
	{
		for (i = 0; j <= 0; j++)
		{
			n = i * j;
			_putchar(n + '0');
			_putchar(', ');
		}
		_putchar('\n');
	}
}
