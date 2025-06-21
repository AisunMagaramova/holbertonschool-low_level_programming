#include <limits.h>

/**
 * _atoi - convert string to int safely
 * @s: input string
 * Return: integer value
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int num = 0;
	int found = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] == '+')
			;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found = 1;

			/* Check overflow before multiplying */
			if (num > (unsigned int)(INT_MAX) / 10 ||
			    (num == (unsigned int)(INT_MAX) / 10 && (s[i] - '0') > INT_MAX % 10))
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}

			num = num * 10 + (s[i] - '0');
		}
		else if (found)
			break;
		i++;
	}

	if (sign == -1 && num > (unsigned int)INT_MAX + 1)
		return (INT_MIN);

	return ((int)(sign * (int)num));
}
