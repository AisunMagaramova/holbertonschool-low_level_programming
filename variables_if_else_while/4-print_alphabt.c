#include <stdio.h>

int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
    {
	    if (letter != 'e' && letter != 'q')  /* Exclude 'e' and 'q' */
		putchar(letter);
    }
    putchar('\n');  /* Print newline at the end */
    return (0);
}
