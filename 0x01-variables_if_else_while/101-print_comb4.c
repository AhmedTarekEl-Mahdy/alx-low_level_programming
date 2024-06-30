#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: A program that prints all possible different
 * combinations of three digits.
 * Numbers must be separated by , , followed by a space.
 * The three digits must be different.
 * Print only the smallest combination of three digits.
 * Numbers should be printed in ascending order, with 3 digits.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int num1 = '0', num2, num3;

	while (num1 < '8')
	{
		num2 = '1';
		while (num2 < '9')
		{
			num3 = '2';
			while (num3 <= '9')
			{
				if (num1 < num2 &&
						num2 < num3)
				{
					putchar(num1);
					putchar(num2);
					putchar(num3);

					if ((num1 + num2 + num3) != ('7' + '8' + '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				num3++;
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');

	return (0);
}
