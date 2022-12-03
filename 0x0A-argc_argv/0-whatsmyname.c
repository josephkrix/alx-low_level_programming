#include "main.h"
#include <unistd.h>

/**
* main - Prints its name
*
* @argc: Length of argv
*
* @argv: Arrays of strings of the program arguments
*
* Return: 0, Success
*/

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	i = 0;
	while (argv[0][i] != '\0')
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);

	return (0);
}
