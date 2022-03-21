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
	int i;

	for (s[i] = '\0'; s[i] <= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
