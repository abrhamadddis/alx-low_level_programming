#include "main.h"

/**
 * factorial - a function that calulate the factorial of number
 *
 * @n: input number
 *
 * Return: int
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}
	else if (n <= 1)
	{
		return (1);
	}
	else
	{
		fact = (n * factorial(n - 1));
	}
	return (fact);
}
