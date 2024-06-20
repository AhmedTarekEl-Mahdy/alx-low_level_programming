#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: A program will assign a random number to the variable n each
 * time it is executed, in order to print the last digit of the number
 * stored in the variable n.
 *
 * The output of the program should be: the string Last digit of,
 * followed by n, followed by the string is, followed by
 * if the last digit of n is greater than 5: the string and is greater than 5,
 * if the last digit of n is 0: the string and is 0,
 * if the last digit of n is less than 6 and not 0:
 * the string and is less than 6
 * and not 0, followed by a new line
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int n;
	int lastDigit;

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
	else if ((lastDigit < 6) && (lastDigit != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n"
				, n, lastDigit);
	}

	return (0);
}
