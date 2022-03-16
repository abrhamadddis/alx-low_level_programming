#include "main.h"

/**
 * print_sign -pritn the sign of the number
 * @n: type int interger, can be negatvie or positive
 * Description: print +, 0, or -depending on number, along with return
 * Return: 1 if num is postive 0 if the num is 0 -1 if the num is negatvie
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putcahr('0');
		return (0);
	}
}

