#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Description: A program that prints all the number of base 16
 * in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int num, alphabet;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
