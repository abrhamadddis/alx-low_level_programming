#include "main.h"

/**
 * _isupper - check for uppercase
 *
 * @c: input char
 *
 * Return: the function return 1 if it's upper case 0 small letter
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
