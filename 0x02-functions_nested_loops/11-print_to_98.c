#include "main.h"

/**
 * print_to_98 - a function that print natural num form n to 98
 *
 * @n: a a variaable where num stat from
 *
 * Return: give back the list of num
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n++;
	}
}
