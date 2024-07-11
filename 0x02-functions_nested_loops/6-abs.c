#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - A function that computes the absolute value of an integer.
 * @n: The number that will compute
 *
 * Return: Always 0 (Success).
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
