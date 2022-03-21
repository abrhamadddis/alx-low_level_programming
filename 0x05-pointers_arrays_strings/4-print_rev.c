#include "main.h"

/**
 * print_rev - print strint in revers order
 *
 * @s: input
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for ( j = i - 1; j <= 0; i--)
	{
		_putchar(s[j]);
	}
	_putchar(10);
}
