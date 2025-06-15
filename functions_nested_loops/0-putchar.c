#include <unistd.h>

int _putchar(char c);

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
    _putchar('_');
    _putchar('p');
    _putchar('u');
    _putchar('t');
    _putchar('c');
    _putchar('h');
    _putchar('a');
    _putchar('r');
    _putchar('\n');
    return (0);
}

/**
 * _putchar - writes a character to stdout
 * @c: The character to print
 * Return: 1 on success, or -1 on error
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
