#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - entry point
 *
 * Description: Using only putchar function to print the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		putchar(lowerCase);
		lowerCase += 1;
	}
	putchar('\n');
	return (0);
}
