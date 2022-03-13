#include <stdio.h>

/**
 *main - Satrting point
 *
 *Return: zero
 *
 *Descripitions: Prints all possible different combinations of two digits
 */

int main(void)
{
	int num, num1;

	for (num = 0; num <= 8; num++)
	{
		for (num1 = 1; num1 <= 9; num1++)
		{
			if (num < num1)
			{
				putchar(num + '0');
				putchar(num1 + '0');
				if (num < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
