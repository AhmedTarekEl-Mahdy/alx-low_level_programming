#include "main.h"

/**
 * _abs - Function that computes the absolute value of an integer.
 * @n: A variable to check.
 *
 * Return: Always 0 (Success).
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
