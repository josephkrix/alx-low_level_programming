#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'checks lowercase character'
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == 1)
		{
			return (1);
		}
	}
	return (0);
}

