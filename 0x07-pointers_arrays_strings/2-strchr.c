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
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == 'c')
		{
			int j;

			j = i;
			while (s[j] != '\0')
			{
				return (s[j]);
				j++;
			}
		}
		else
		{
			return (NULL);
		}
		i++;
	}
}
