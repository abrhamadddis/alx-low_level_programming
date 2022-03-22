#include "main.h"
/**
 * _atoi - convert string to integer
 *
 * @s: input integer
 *
 * Return: integer of a string
 */
int _atoi(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	int j;

	for (j = 0; j <= i; j++)
	{
		atoi[j] = s[i];
	}
	return (atoi);
}
