#include <unistd.h>

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
