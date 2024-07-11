#include "main.h"

/**
 * print_alphabet_x10 - A function that prints 10 times the
 * alphabet, in lowercase, followed by a new line.
 * Using void print_alphabet_x10(void).
 * You can only use _putchar for twice in your code.
 */

void print_alphabet_x10(void)
{
	int iteration, alphabet;

	for (iteration = '0'; iteration <= '9'; iteration++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
