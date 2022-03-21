#include "main.h"

/**
 * _strlen - prints the size of string
 *
 * @s: input string:
 *
 * Return: nothing
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len);
}
