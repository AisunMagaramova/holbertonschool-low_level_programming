#include <stdio.h>
/**
 * main - Prints all single digit numbers from 0 to 9
 *
 * Return: Always 0
 */
int main(void)
{int i;
	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');  /* Convert the integer to its ASCII equivalent */
	}
	putchar('\n');  /* Print a newline after all digits are printed */
	return (0);
}
