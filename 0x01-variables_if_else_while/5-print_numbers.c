#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that prints all single digit numbers of base 10
 * Starting from 0.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}

	printf("\n");

	return (0);
}
