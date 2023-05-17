#include <stdio.h>
#include <unistd.h>

/**
 * main - fork example
 *
 * Return: 0.
 */

int main(void)
{
	pid_t my_pid;
	pid_t pid;
	pid_t child_pid;

	printf("Before fork\n");
	pid = fork();

	if (pid == -1)
	{
		perror("Error:");
		return (1);
	}
	printf("After fork\n");
	my_pid = getpid();
	printf("my_pid is %u\n", my_pid);

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	my_pid = getpid();
	printf("My pid is %u\n", my_pid);
	if (child_pid == 0)
	{
		printf("(%u) Nooooo!\n", my_pid);
	}
	else
	{
		printf("(%u) %u, I am your father\n", my_pid, child_pid);
	}
	return (0);
}
