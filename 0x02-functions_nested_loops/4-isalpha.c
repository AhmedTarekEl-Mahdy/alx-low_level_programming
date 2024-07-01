#include "main.h"

/**
 * _isalpha - Function to check the alphabet character
 * if it is a letter lowercase or uppercase returns 1.
 * Otherwise returns 0.
 *
 * @c: element to check.
 *
 * Return: Always 0 (Success).
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
