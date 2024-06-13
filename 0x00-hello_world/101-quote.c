#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - Entry point.
 *
 * Description: A C program that prints exactly "and that piece of art is
 * useful\" - Dora Korpar, 2015-10-19 ."\
 * You are not allowed to use any functions listed in the NAME
 * Section of man(3) printf or man(3) puts.
 * Your program should return 1.
 * Your program should compile without any warning when using the -Wall
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
