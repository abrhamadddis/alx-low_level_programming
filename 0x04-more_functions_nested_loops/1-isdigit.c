#include "main.h"

/**
 * _isdigit - checkes for digit
 *
 * @c: assign number
 *
 * Return: 1 if the num is between 0 and 9 else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
