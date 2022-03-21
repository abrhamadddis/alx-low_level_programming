include "main.h"
/**
 *_strlen - Returns the length of a string
 *@str: Input string
 *Return: Length of string
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
