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
	int j = 0;

	while (j <= 9)
	{
		int i = 0;

		for (i = 0; j <= 0; j++)
		{
			int n = i * j;

			_putchar(n + '0');
			_putchar(44 + '0');
			_putchar(32 + '0');
		}
		_putchar('\n');
		j++;
	}

}
