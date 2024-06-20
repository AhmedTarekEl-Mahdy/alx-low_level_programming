#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point.
 *
 * Description: A program that prints the alphabet in lowercase
 * , followed by a new line.
 * Only using putchar function for twice.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
