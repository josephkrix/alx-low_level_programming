#include <stdio.h>
#include <main.h>

/**
 * main - Entry point
 *
 * Description: 'the programs prints _putchar
 *
 * Return: Awlays 0 (Success)
 */

int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		_putchar(ch[i]);
	}

	_putchar("\n");

	return (0);

}
