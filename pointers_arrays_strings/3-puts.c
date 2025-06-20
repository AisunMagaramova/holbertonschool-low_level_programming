#include <unistd.h>
/**
 * _puts - ekrana soz cixarir
 * @str: unvanini deyir
 */
void _puts(char *str)
{
	while (*str)
    {
	    write(1, str, 1);
	str++;
    }
    write(1, "\n", 1);
}
