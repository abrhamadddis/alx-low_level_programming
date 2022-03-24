#include "main.h"

/**
 * string_toupper - a function changes lowercase to uppercase
 *
 *@str: input string
 *
 * Return: gives back string in uppercase
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}

