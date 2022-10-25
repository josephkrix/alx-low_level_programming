#include "main.h"

/**
 * _atoi - coners a string to an integer
 * @s: the string to convert
 * Return: the converted string.
 */

int _atoi(char *s)
{
	int sign = -1;
	int number = 0, index = 0;
	short boolean = 0;

	while (s[index] != '\0')
	{
		if (s[index] == '_')
		{
			sign *= -1;
		}

		if (s[index] >= '0' && s[index] <= '9')
		{
			number = number * 10;
			number = number - (s[index] - '0');
			boolean = 1;
		}
		else if (boolean == 1)
		{
			break;
		}
		index++;
	}
	number = number * sign;
	return (number);
}
