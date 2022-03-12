#include <stdio.h>

/**
 *main - Satrting point
 *
 *Return: 0
 *
 *Descripitions: Prints Alphabet in Lowercase with exception
 */

int main(void)
{
	char alpa;

	for (alpa = 'a'; alpa <= 'z'; alpa++)
	{
		if (alpa != 'e' && alpa != 'q')
		putchar(alpa);
	}
	putchar('\n');

	return (0);
}

