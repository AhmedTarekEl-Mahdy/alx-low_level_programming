#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

/**
 * main - Entry point.
 *
 * Description: A C program that prints exactly \"
 * and that piece pof art is useful\" - Dora Korpar, 2015-10-19,
 * Followed by a new line, to the standard error.
 *
 * Return: Always 1 (Success).
 */

int main(void)
{
	write(2,
			"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
