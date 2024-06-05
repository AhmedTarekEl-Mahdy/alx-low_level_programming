#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Description: A program that prints all single digit numbers of base 10
 * starting from 0, followed by new line
 * Only using putchar() function for twice time.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
	}

	putchar('\n');

	return (0);
}
