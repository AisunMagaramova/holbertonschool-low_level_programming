#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10
 *
 * Return: Always 0
 */
int main(void)
{int i;
	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');  /* Convert the integer to its ASCII equivalent */
	}
	putchar('\n');  /* Print a new line after all numbers */
	return (0);
}
