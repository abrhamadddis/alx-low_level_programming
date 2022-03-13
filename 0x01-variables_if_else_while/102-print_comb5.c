#include <stdio.h>

/**
 *main - Starting point
 *
 *Return: 0
 *
 *Descripitions: Prints all possible different combinations of two two digits
 */

int main(void)
{
	int num, num1;

	for (num = 0; num <= 99; num++)
	{
		for (num1 = 0; num1 <= 99; num1++)
		{
			if (num < num1)
			{
				putchar(num / 10 + '0');
				putchar(num % 10 + '0');
				putchar(' ');
				putchar(num1 / 10 + '0');
				putchar(num1 % 10 + '0');
				if (num < 98)
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
