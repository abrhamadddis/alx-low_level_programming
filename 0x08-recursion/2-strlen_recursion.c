#include "main.h"

/**
 * _strlen_recursion - a function that return the length of a string
 *
 * @s: input string
 *
 * Return: nothing
 */
int _strlen_recursion(char *s)
{
	int sum = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		sum = 1 + _strlen_recursion(s + 1);
	}
	return (sum);
}
