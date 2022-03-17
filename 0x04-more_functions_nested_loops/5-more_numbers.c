#include "main.c"

/**
 * more_numbers - print num 1-14 in 10 line
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i = 0;

	while (i <= 10)
	{
		int j;

		for (j = 0; j <= 14; j++)
		{
			_putchar(i + '0');
		}
		_putchar("\n");
		i++;
	}
}

