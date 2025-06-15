#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
		putchar(letter++);

	putchar('\n');

	return (0);
}
