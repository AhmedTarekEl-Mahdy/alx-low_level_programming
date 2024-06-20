#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Description: A program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 * Using only putchar() function for three times.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	char lowerCase = 'a', upperCase = 'A';

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
