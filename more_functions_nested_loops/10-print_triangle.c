#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle of '#'
 * @size: size of the triangle
 *
 * If size <= 0, prints only a newline.
 */
void print_triangle(int size)
{
	int row, col, spaces;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		/* print spaces */
		for (spaces = size - row; spaces > 0; spaces--)
			_putchar(' ');

		/* print hashes */
		for (col = 0; col < row; col++)
			_putchar('#');

		_putchar('\n');
	}
}
