#include "main.h"

/**
 * print_last_digit - A function that prints the last digit of a number.
 * @n: The input integer value.
 *
 * Return: lastDigit, otherwise 0.
 */

int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		lastDigit = ((n * (-1)) % 10);
		_putchar(lastDigit + 48);
	}
	else if (n > 0)
	{
		lastDigit = (n % 10);
		_putchar(lastDigit + 48);
	}
	else if (n == 0)
	{
		lastDigit = n;
		_putchar(lastDigit + 48);
	}
	return (lastDigit);
}
