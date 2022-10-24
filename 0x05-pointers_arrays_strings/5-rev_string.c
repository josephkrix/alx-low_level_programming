#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int tmp;
	int len = 0;
	int i = 0;

	while (s[len] != '\0')
	{
		len ++;
	}

	while (i < len/2)
	{
		tmp = s[1];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
		i++
	}
}
