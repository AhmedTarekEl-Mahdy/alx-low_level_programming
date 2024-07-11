#include "main.h"

/**
 * print_sign - A function that prints the sign of a number.
 * @n: An input to check.
 * Return: 1 if the number is positive,
 * Returns 0 if the number is zero,
 * Returns -1 if the number is negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
