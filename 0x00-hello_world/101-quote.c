#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point.
 *
 * Description: A C program that prints excatly "
 * and that piece of art is useful\" \- Dora Korpar, 2015-10-19",
 * Followed by a new line, to the standard error.
 * You are not allowed to use any functions listed in the NAME
 * Section of the man(3) printf or man(3) puts,
 * You should return 1.
 *
 * Return: 1.
 */

int main(void)
{
	write(2,
			"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
