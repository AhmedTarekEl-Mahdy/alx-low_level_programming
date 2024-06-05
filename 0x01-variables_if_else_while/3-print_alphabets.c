#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point.
 *
 * Description: A program to print the alphabet in lowercase,
 * and then in uppercase, followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int lowerCase = 'a';
	int upperCase = 'A';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase += 1;
	}
	while (upperCase <= 'Z')
	{
		putchar(upperCase);
		upperCase += 1;
	}

	putchar('\n');

	return (0);
}
