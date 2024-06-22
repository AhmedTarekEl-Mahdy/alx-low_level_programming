#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 *
 * Description: A program that prints all possible combination of single
 * digit numbers, numbers must be separated by , . followed by a space,
 * Numbers should be printed in ascending order,
 * Only using putchar funtion for four times maximum.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int num = 1;

	while (num <= 9)
	{
		putchar('0' + num);
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
