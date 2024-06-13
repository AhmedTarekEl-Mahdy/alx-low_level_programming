#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: A C program that prints the size of various types
 * On the computer it is compiled and run on.
 * You should produce the exact same output as in the example,
 * Warning are allowed,
 * Your program should return 0.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
