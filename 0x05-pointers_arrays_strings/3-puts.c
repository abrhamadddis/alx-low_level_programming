#include "main.h"

/**
 * _puts - print string
 *
 * @str: input
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (i != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
