#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Desription: A program that prints the alphabet in lowercase,
 * followed by a new line.
 * Print all the letters except q and e,
 * Only using putchar() function for two times.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
