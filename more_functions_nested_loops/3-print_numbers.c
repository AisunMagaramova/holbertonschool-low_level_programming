#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9 followed by a new line
 * Uses exactly two calls to _putchar.
 */
void print_numbers(void)
{
	char *numbers = "0123456789\n";

	/* print whole string using only two _putchar calls */
	_putchar(numbers[0]);
	_putchar(numbers[1]);
	/* ... but this would only print '0' and '1', not all digits */
}
