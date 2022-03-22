#include "main.h"

/**
 * puts2 - print every other character of a string
 *
 * @str: input string
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	for (str[i] = 0; str[i] != '\0'; i++)
	{
		int n;

		n = i % 2;
		if (n == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar(0);
}
