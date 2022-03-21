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
	int i, j, n;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	n = j - i;
	for (j = n; j <= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar(10);
}
