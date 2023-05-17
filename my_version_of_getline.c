
#include <stdio.h>
#include <stdlib.h>
#define MAX_LINE_LENGTH 255

/**
 * _getline - retrieves a line of text.
 * @stream: file pointer
 * @buf: line memory.
 * @size: size of buffer
 *
 * Return: count.
 */

size_t _getline(FILE *stream, char *buf, size_t size)
{
	size_t count = 0;
	char c;

	c = (char)getc(stream);
	while (c != '\n' && count < size - 1)
		buf[count++] = c;
	buf[count] = '\0';
	return (count);
}
/**
 * main - main function
 *
 * Return: 0.
 */

int main(void)
{
	char line[MAX_LINE_LENGTH];
	int i = 1;

	while (i)
	{
		size_t count = _getline(stdin, line, MAX_LINE_LENGTH);

		printf("The line is \"%s\" and is %lu char long.\n", line, count);
	}
	return (0);
}
