#include <stdio.h>
/**
 * main - Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
 */
int main(void)
{int i;
	for (i = 0; i < 16; i++)
	{
		if (i < 10)
			putchar(i + '0');  /* For numbers 0-9 */
		else
			putchar(i - 10 + 'a');  /* For letters a-f */
	}
	putchar('\n');  /* Print a new line at the end */
	return (0);
}
