#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n times the element of an array
 * @a: the pointer to the element
 * @n: time to print element
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
}
