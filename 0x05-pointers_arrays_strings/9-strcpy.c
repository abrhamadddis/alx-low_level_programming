#include "main.h"

/**
 * _strcpy - function that copies the string pointed by src
 *
 * @src: char pointer variable
 *
 * @dest: char pointer variable
 *
 * Return: a sequence of characters
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
