#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Description: A program that prints all possible combinations
 * of two two-digit numbers,
 * the two numbers should range from 0 to 99,
 * The two numbers should be separated by a space,
 * All numbers should be printed with two digits. 1 should be printed as 01.
 * The combination of numbers must be separated by comma,
 * followed by a space.
 * The combination of numbers should be printed in ascending order,
 * 00 01 and 01 00 are considered as the same combination of the
 * number 0 and 1.
 * Only using putchar function for 8 times maximum.
 * You are not allowed to use any variable of type char.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int digit1 = 0, digit2, digit3, digit4;

	while (digit1 <= 9)
	{
		digit2 = 0;
		while (digit2 <= 9)
		{
			digit3 = 0;
			while (digit3 <= 9)
			{
				digit4 = 1;
				while (digit4 <= 9)
				{
					if (digit1 + digit2 != digit3 + digit4)
					{
						putchar(digit1 + 48);
						putchar(digit2 + 48);
						putchar(' ');
						putchar(digit3 + 48);
						putchar(digit4 + 48);
						putchar(',');
						putchar(' ');
					}
					digit4++;
				}
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');

	return (0);
}
