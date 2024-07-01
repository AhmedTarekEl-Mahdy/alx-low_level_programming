#include "main.h"

/**
 * _islower - A function that checks lowercase character.
 * @c: A character to check.(lowercase characters in ASCII
 * from 97 to 122).
 *
 * Return: 1 if c is lowercase, 0 for otherwise.
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
