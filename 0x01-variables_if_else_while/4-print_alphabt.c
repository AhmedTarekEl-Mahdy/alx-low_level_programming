#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: A program that prints the alphabet in lowercase,
 * followed by a new line except q and e.
 *
 * Return: Always 0 .
 */

int main(void)
{
	int lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower == 'e' || lower == 'q')
			lower++;
		putchar(lower);
	}
	putchar('\n');

	return (0);
}
