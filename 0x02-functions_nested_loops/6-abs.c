#include "main.h"

/**
 * _abs - calculate abloulte value of a number
 *
 * @n: int type number
 *
 * Return: absolute value of a number
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = (n * -1);
		return (n);
	}
	else
	{
		return (n);
	}
}
