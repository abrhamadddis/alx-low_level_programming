#include "stdio.h"
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - variadic function to  print number
 *
 * @separator: const char type pointer to string between numbers
 *
 * @n: const unsigned int type
 *
 * Return: Always successful
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list string;

	va_start(string, n);

	for (i = 0; i < n; i++)
	{
		printf("%d",  va_arg(string, int));
		if (separator != NULL && (i < (n - 1)))
			printf("%s", separator);
	}
	va_end(string);
	printf("\n");
}
