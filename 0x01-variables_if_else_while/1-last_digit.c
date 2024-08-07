#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point.
 *
 * Description: A program that assign a random number to the variable n
 * each time it is executed, that print the last digit of
 * the number.
 * Check if it is greater than 5 or equal zero or
 * less than 6 and not equal zero.
 *
 * Return: Always 0 .
 */

int main(void)
{
	int n, lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else if ((lastDigit < 6 && lastDigit) && (lastDigit != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
				n, lastDigit);
	}

	return (0);
}
