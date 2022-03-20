#include "main.h"

/**
 * print_line - print line n times
 *
 * @n: assign to number of line
 *
 * Return: nothing
 */

void print_line(int n)
{
	if (n <= 0)
	{
		putchar(10);
	}
	else
	{
		int i = 1;

		while (i <= n)
		{
			putchar(95);
			i++;
		}
	}
}
