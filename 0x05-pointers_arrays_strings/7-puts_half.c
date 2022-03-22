#include "main.h"

/**
 * puts_half - print the second half of a string
 *
 * @str: input string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			int n;

			n = i / 2;
			while (n <= i)
			{
				_putchar(str[n]);
				n++;
			}
		}
		else
		{
			int j;

			j = i / 2;
			while (j <= i)
			{
				_putchar(str[j]);
				j++;
			}
		}
	}
	_putchar(10);
}
