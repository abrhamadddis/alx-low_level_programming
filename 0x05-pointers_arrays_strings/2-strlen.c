#include "main.h"

/**
 * _strlen - prints the size of string
 *
 * @s: input string:
 *
 * Return: nothing
 */
int _strlen(char *s)
{
	_putchar('%ul', sizeof(*s));
}
