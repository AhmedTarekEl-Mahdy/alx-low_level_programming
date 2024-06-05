#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Description: A program that prints the alphabet in lowercase,
 * followed by a new line (all the alphabet except q and e).
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		if (lowerCase == 'e' || lowerCase == 'q')
		{
			lowerCase += 1;
		}
		else
		{
		putchar(lowerCase);
		lowerCase += 1;
		}
	}

	putchar('\n');

	return (0);
}
