#include "main.h"

/**
 * print_alphabet - A function that prints the alphabet
 * in lowercase, followed by a new line.
 * Using a prototype void print_alphabet(void).
 * You can only use _putchar twice in your code.
 */

void print_alphabet(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
