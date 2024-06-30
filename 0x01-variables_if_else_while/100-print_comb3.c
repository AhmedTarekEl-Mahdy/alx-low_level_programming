#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: A program that prints all possible
 * different combinations of two digits.
 * Numbers must be separated by , , followed by a space,
 * The two digits must be different,
 * Numbers should be printed in ascending order, with two digits
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	int num1 = '0', num2 = '1';

	while (num1 < '9')
	{
		num2 = '1';
		while (num2 <= '9')
		{
			if (num1 < num2 && num1 != num2)
			{
				putchar(num1);
				putchar(num2);
				
				if ((num1 + num2) != ('8' + '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			num2++;
		}
		num1++;
	}
	putchar('\n');

	return (0);
}
