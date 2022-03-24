#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s: an input string to encode
 * Return: An encode string
 */
char *leet(char *s)
{
	int i, j;

	i = 0;
	char subs[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	char str[10] = {'a', 'A', 'e', 'E', 'o', 'o', 't', 'T', 'l', 'L'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == str[j])
			{
				s[i] = subs[j];
			}
		}
		i++;
	}

	return (s);
}
