#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: A program that prints all possible combinations of two
 * two-digit numbers.
 * The numbers should be range from 0 to 99 .
 * The two numbers should be separated by a space.
 * The combinations of numbers should be printed in ascending order.
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
			if (firstComb != secondComb)
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
