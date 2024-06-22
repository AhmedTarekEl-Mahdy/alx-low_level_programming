#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point.
 *
 * Description: A program that prints all the numbers of base
 * 16 in lowercase, followed by a new line.
 * You can only use the putchar function for three times.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int num = 0;
	char ch = 'a';

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}
	for (ch = 'a'; ch < 'g'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
