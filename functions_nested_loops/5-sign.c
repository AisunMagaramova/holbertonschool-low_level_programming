#include <unistd.h>
/**
 * print_sign - prints the sign of a number
 * @n: the number to check
 *
 * Return: 1 and prints '+' if n > 0
 *         0 and prints '0' if n == 0
 *        -1 and prints '-' if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		write(1, "+", 1);
		return (1);
	}
	if (n == 0)
	{
		write(1, "0", 1);
		return (0);
	}
	write(1, "-", 1);
	return (-1);
}
