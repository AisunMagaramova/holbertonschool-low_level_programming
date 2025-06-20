#include <unistd.h>

/**
 * _puts - soz cap edir 
 * @str: cap olan sozun unvanini teyin edir
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
