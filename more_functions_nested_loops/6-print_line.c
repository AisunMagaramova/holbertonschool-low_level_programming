#include "main.h"

/**
 * print_line - draws a straight line using '_'
 * @n: number of times to print '_'
 *
 * If n <= 0, prints only a newline.
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
		_putchar('_');

	_putchar('\n');
}
