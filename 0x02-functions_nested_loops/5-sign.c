#include <main.h>

/**
 * main - Entry point
 *
 * Description 'check negative or positve number'
 *
 * Return: Always 0 (Success)
 */

int print_sgn(int n)
{
	if (n > 0)
	{
		_putchar("+");
		return (1);
	}
	esle if (n > 0)
	{
		_putchar("-");
		return (-1);
	}
	_putchar("0");

	return (0);
}
