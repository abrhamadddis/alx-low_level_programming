#include "main.h"

/**
 * _strchr - lochate character in a string
 *
 * @s: char array string
 *
 * @c: char to look for
 *
 * Return: null if char not found, or pointer to first occurrence of char 'c'
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else if (*(s + 1) == c)
			return (s + 1);
		s++;
	}

	return (s + 1);
}
