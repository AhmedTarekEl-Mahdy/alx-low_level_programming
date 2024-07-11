#include <unistd.h>
#include "main.h"

/**
 * _putchar - Write a character c to stdout.
 * @c: A character to print.
 *
 * Description: A function of putchar.
 *
 * Return: 1 on Success,
 * On error -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
