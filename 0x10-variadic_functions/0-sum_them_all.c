#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - variadix function to add number
 *
 * @n: const unsigned int type
 *
 * Return: sum of numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list number;

	va_start(number, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(number, unsigned int)
	}
	va_end(number);
	return (sum);
}

