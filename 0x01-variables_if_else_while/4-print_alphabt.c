#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Description: A program that prints the alphabet in lowercase,
 * followed by a new line.
 * Print all the letters except q and e.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet == 'e' || alphabet == 'q')
		{
			alphabet++;
		}
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
