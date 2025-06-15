#include <stdio.h>
/**
 * main - Prints the alphabet in reverse order
 *
 * Return: Always 0
 */
int main(void)
{char letter;
	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');  /* Print a newline after the alphabet */
	return (0);
}
