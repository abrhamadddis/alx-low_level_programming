#include "main.c"

/**
 * more_numbers - print num 1-14 in 10 line
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		int j;

		for (j = 48; j <= 14; j++)
		{
			_putchar(i);
		}
		_putchar(10);
		i++;
	}
}


