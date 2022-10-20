#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'function to print alphabet'
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int ch, i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch ++)
		{
			_putchar(ch);
		}
		_putchar("\n");
	}
}
