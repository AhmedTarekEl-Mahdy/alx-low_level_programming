#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point.
 *
 * Description: A program that prints the lowercase alphabet
 * in reverse, followed by a new line.
 * You can only use putchar function for twice.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	char lowerCase = 'z';

	for (lowerCase = 'z'; lowerCase >= 'a'; lowerCase--)
	{
		putchar(lowerCase);
	}
	putchar('\n');

	return (0);
}
