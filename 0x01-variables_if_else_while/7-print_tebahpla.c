#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point.
 *
 * Description: A program that prints the lowercase alphabet in reverse,
 * Followed by a new line, using only putchar() function for twice time.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	char alphabet = 'z';

	for (alphabet = 'z'; alphabet >= 'a'; --alphabet)
	{
		putchar(alphabet);
	}

	putchar('\n');

	return (0);
}
