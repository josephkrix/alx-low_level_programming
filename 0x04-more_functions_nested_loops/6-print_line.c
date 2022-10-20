#include "main.h"

/** print_line - prints lines of numbers entered
 * @n: number of lines to be printed
 *
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			_putchar('_');
		}
	}
}