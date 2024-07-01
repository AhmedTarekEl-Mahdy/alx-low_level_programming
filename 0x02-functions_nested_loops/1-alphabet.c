#include "main.h"

/**
 * print_alphabet - Function to print the alphabet.
 *
 * Description: prints all the alphabets in lowercase,
 * Followed by a new line.
 *
 * Return: Always 0 (Success).
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

}
