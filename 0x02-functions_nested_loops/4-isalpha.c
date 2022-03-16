#include "main.h"
/**
 * _isalpha -checks for lowercase and uppercase character
 *
 * @c: char type letter
 *
 * Return: 1 if c is lowrcase of upppercase and 0 nither of two
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 123) || (c >= 65 && c <= 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
