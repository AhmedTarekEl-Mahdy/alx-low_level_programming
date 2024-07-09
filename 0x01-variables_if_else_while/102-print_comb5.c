#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: A program that prints all possbile combiantions
 * of two two-digit numbers.
 * The numbers should range from 0 to 99 .
 *
 * Return: Always 0 .
 */

int main(void)
{
	int firstComb = 0, secondComb;

	while (firstComb <= 99)
	{
		secondComb = 0;
		while (secondComb <= 99)
		{
			if (firstComb < secondComb && firstComb != secondComb)
			{
				putchar((firstComb / 10) + 48);
				putchar((firstComb % 10) + 48);
				putchar(' ');
				putchar((secondComb / 10) + 48);
				putchar((secondComb % 10) + 48);

				if (firstComb + secondComb != 98 + 99)
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
