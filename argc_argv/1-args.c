#include <stdio.h>

/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector (unused)
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;  /* argv istifadə olunmur */

	printf("%d\n", argc);

	return (0);
}
