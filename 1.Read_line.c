#include <stdio.h>
#include <stdlib.h>

/**
 * main - Display a string and wait for the user
 * Return: 0.
 */
int main(void)
{
	char *buf_ptr = NULL;
	size_t len = 0;
	ssize_t rtrn_vlu;

	while (1)
	{
		printf("$ ");
		rtrn_vlu = getline(&buf_ptr, &len, stdin);
		printf("%s", buf_ptr);
	}
	if (rtrn_vlu != -1 && EOF)
	{
		perror("getline error");
		exit(EXIT_FAILURE);
	}
	free(buf_ptr);
	return (0);
}
