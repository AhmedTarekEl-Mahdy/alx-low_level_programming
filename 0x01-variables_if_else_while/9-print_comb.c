#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point.
 *
 * Description: A program that prints all possible combinations of
 * single-digit numbers.
 * Using only putchar function for 4 times.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int num = 0;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
