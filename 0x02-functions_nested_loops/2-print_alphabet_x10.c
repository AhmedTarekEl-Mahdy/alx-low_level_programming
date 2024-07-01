#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success).
 */

void print_alphabet_x10(void)
{
	int i = '0', ch = 'a';

	while (i <= '9')
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
