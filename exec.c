#include <stdio.h>
#include <unistd.h>

/**
 * main - exec example
 *
 * Return: 0.
 */

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "/usr/", NULL};

	printf("before execve\n");
	if (execve(argv[0], argv, NULL) == -1)
	{
		perror("Error");
	}
	printf("After execve");
	return (0);
}
