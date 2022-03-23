#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * @dest: char pointer variable
 *
 * @src: char pointer variable
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j, k;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	k = i + j;
	for (j = 0; j <= k; j++)
	{
		dest[i + j] = src[j];
	}
	dest[k] = '\0';
	return (dest);
}
