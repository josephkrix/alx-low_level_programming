#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: a string
 *
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int i;

	for(i = 0; s[i] != 0; i++)
	{
		i = i;
	}

	for(i = i; i > 0; i--)
	{
		putchar(s[i - 1]);
	}
	putchar('\n');
}
