#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Desription: A program that prints all possible different
 * combinations of three digits.
 * The three digits must be different.
 * Numbering should be printed in ascending order, with three digits
 * Using only putchar() function for six times maximum.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	int i = '0';
	int j;
	int k;


	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			k = '0';
			while (k <= '9')
			{
				if (i < j && j < k)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
				k++;
			}
			j++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
