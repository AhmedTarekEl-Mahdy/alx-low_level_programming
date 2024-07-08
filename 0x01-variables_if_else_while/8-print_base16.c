#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: A program that prints all the number of base
 * 16 in lowercae, followed by a new line.
 *
 * Return: Always 0 .
 */

int main(void)
{
	int num, lower;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (lower = 'a'; lower <= 'f'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');

	return (0);
}
