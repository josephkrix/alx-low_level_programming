#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string to reverse
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, a len, tmp;
	
	for (a = 0; s[a] != '\0'; a++)
	{
		a = a;
	}
	
	len = a;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[1];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
