#include "main.h"

/**
 * print_diagonal - draws a diagonal line using '\'
 * @n: number of times to print the diagonal
 *
 * If n <= 0, prints only a newline.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		/* Print spaces before the backslash */
		for (j = 0; j < i; j++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}
