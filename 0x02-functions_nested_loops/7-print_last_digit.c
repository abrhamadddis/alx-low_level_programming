#include "main.h"

/**
 * print_last_digit - a function that print the last digit of a number
 *
 * @n: int type of a number
 *
 * Return: return the last digit of @n
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		int a = -1 * n;

		return (a % 10);
	}
	else
	{
		return (n % 10);
	}
}
