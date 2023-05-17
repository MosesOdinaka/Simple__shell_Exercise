#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - fork wait and execve
 *
 * Return: 0.
 */

int main(void)
{
	pid_t the_pid;
	int status;
	char *argv[] = {"/bin/ls", "-l", "/tmp", NULL};

	for (int i = 0; i < 5; i++)
	{
		the_pid = fork();

		if (the_pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("execve error");
			}
		}
		if (the_pid > 0)
		{
			wait(&status);
		}
		else
		{
			perror("fork error");
		}
	}
	return (0);
}
