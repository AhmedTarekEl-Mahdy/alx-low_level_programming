#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Description: A C program that prints exactly a string,
 * followed by a new line.
 * You are not allowed to use any function listed in the NAME section
 * of the man(3) printf or man(3) puts.
 * Your program should return 1.
 * Your program should compilw without any warnings when using the -Wall
 * gcc option.
 *
 * Return: 1 (Success).
 */

int main(void)
{
	write(2,
			"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
