#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Description: A program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int alphabet = 'z';

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
