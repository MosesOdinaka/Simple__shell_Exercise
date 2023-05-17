#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - extract token from string
 *
 * Return: A pointer to the next token or null if
 * there are no more token.
 */

int main(void)
{
	char *ptr_buf = NULL;
	size_t lenth = 0;
	char *tokened;

	while (1)
	{
		printf("$ ");
		getline(&ptr_buf, &lenth, stdin);
		printf("You typed: %s\n", ptr_buf);

		tokened = strtok(ptr_buf, " ");

		while (tokened)
		{
			printf("tokened command: %s\n", tokened);
			tokened = strtok(NULL, "  ");
		}
	}
	free(ptr_buf);
}
