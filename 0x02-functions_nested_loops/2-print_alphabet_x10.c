#include "main.h"
/**
 * print_alphabet_x10 -prints alphabets in lowercase
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int j = 0;

while (j < 10)
{
int i;

for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar("\n");
j++;
}
return (0);
}
