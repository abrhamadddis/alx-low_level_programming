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
		;
	}

	if (i % 2 != 0)
	{
		i = (i + 1) / 2;

		for (; str[i] != '\0';)
		{
			_putchar(str[i++]);
		}
		_putchar(10);
	}
	else if (i % 2 == 0)
	{
		i /= 2;

		for (; str[i] != '\0';)
		{
			_putchar(str[i++]);
		}
		_putchar(10);
	}
