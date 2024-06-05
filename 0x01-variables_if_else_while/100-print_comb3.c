#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point.
 *
 * Description: A program that prints all possible
 * different combinations of two digits.
 * The two digit must be different.
 * Numbering should be printed in ascending order, with two digits.
 * Only using putchar for five times maximum.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int num1 = '0', num2;

	while (num1 <= '9')
	{
		num2 = '0';
		while (num2 <= '9')
		{
			if (num1 < num2)
			{
				putchar(num1);
				putchar(num2);
				if (num1 != '8' || (num1 == '8' && num2 != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num1++;
	}

	putchar('\n');

	return (0);
}
