#include <limits.h>

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
	int i = 0, sign = 1, started = 0;
	int num = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			; /* ignore '+' */
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;

			/* Overflow check */
			if (sign == 1)
			{
				if (num > (INT_MAX - (s[i] - '0')) / 10)
					return (INT_MAX);
			}
			else
			{
				if (-num < (INT_MIN + (s[i] - '0')) / 10)
					return (INT_MIN);
			}

			num = num * 10 + (s[i] - '0');
		}
		else if (started)
			break;
		i++;
	}

	return (sign * num);
}
