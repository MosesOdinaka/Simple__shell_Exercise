#include <stdio.h>
#include <unistd.h>

/**
 * main - Parent process ID
 *
 * Return: Always 0.
 */

int main(void)
{
	printf("%u is the parent process ID.\n While %u is the child process ID",
			getppid(), getpid());
	return (0);
}
