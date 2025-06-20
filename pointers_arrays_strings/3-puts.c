#include "main.h"

/**
 * _puts - soz cap etmek ucun
 * @str: cap olunan sozu teyin etmek ucun
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
