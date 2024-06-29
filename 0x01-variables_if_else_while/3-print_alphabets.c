#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Description: A program that prints the alphabet in lowercase,
 * and then in uppercase followed by a new line.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int alphabet1, alphabet2;

	for (alphabet1 = 'a'; alphabet1 <= 'z'; alphabet1++)
	{
		putchar(alphabet1);
	}
	for (alphabet2 = 'A'; alphabet2 <= 'Z'; alphabet2++)
	{
		putchar(alphabet2);
	}
	putchar('\n');

	return (0);
}
