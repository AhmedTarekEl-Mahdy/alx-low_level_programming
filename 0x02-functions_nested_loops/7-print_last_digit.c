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
		lastDigit = -1 * n % 10;
		_putchar(lastDigit + '0');
	}
	else if (n > 0)
	{
		lastDigit = (n % 10);
		_putchar(lastDigit + '0');
	}
	else
	{
		lastDigit = n;
		_putchar(lastDigit + '0');
	}
	return (lastDigit);
}
