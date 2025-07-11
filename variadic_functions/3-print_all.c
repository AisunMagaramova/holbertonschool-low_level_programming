#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - Prints anything based on format string.
 * @format: A list of types of arguments passed to the function.
 *
 * Description: Format chars:
 * c: char
 * i: integer
 * f: float
 * s: string
 * If string is NULL, print (nil)
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str, *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
