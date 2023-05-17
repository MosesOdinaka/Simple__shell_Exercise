#include <stdio.h>

/**
 * main - Prints arguments, without using ac.
 * @ac: number of item
 * @av: array of string.
 *
 * Return: 0.
 */

int main(int ac, char **av)
{
	int i = 0;

	while (av[i])
	{
		printf("%s\n", av[i]);
		i++;
	}
	return (0);
}
