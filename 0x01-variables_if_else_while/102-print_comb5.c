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
	int firstComb = 0, secondComb;

	while (firstComb <= 99)
	{
		secondComb = firstComb;
		while (secondComb <= 99)
		{
			if (secondComb != firstComb)
			{
				putchar((firstComb / 10) + 48);
				putchar((firstComb % 10) + 48);
				putchar(' ');
				putchar((secondComb / 10) + 48);
				putchar((secondComb % 10) + 48);

				if (firstComb != 98 || secondComb != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			secondComb++;
		}
		firstComb++;
	}
	putchar('\n');

	return (0);
}
