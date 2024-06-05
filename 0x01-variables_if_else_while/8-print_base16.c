#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all the numbers of base 16 in lowercase,
 * Followed by a new line, Using only putchar for three time.
 *
 * Return: 0 (Success).
 */
int main(void)
{
	int num = 0;
	char alphabet = 'a';

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
