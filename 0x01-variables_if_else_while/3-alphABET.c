#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: A program that prints the alphabet in
 * lowercase, and then in uppercase, followed by a new line.
 *
 * Return: Always 0 .
 */

int main(void)
{
	int lowerCase, upperCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		putchar(lowerCase);
	}
	for (upperCase = 'A'; upperCase <= 'Z'; upperCase++)
	{
		putchar(upperCase);
	}
	putchar('\n');

	return (0);
}
