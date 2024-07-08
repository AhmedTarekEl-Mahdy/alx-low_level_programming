#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: A program that prints the lowercase alphabet
 * in reverse, followed by a new line.
 *
 * Return: Always 0 .
 */

int main(void)
{
	int alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
