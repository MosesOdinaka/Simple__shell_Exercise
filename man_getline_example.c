#include <stdio.h>
#include <stdlib.h>

/**
 * main - get input line,
 *
 * @argc: argument count,
 * @argv: array of strings.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	FILE *stream;
	char *line = NULL;
	size_t len = 0;
	ssize_t nread;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	stream = fopen(argv[1], "r");
	if (stream == NULL)
	{
		perror("fopen");
		exit(EXIT_FAILURE);
	}
	nread = getline(&line, &len, stream);
	while (nread != -1)
	{
		printf("Retrieved line of length: %lu\n", nread);
		fwrite(line, nread, 1, stdout);
	}
	free(line);
	fclose(stream);
	exit(EXIT_SUCCESS);
	return (0);
}
