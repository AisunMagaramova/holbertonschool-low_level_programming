#include <stdio.h>
/**
 * main - Prints all possible combinations of single-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{int i;
	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');  /* Print the digit */
		if (i != 9)
		{
			putchar(',');   /* Print a comma */
			putchar(' ');   /* Print a space */
		}
	}
	putchar('\n');  /* Print a new line at the end */
	return (0);
}
