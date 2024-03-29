#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
* create_buffer - Allocates 1024 bytes for a buffer.
* @file: The name of the file buffer is storing chars for.
*
* Return: A pointer to the newly-allocated buffer.
*/
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
* close_file - Closes file descriptors.
* @fd: The file descriptor to be closed.
*/
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == n_neg)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
* main - Copies the contents of a file to another file.
* @argc: The number of arguments supplied to the program.
* @argv: An array of pointers to the arguments.
*
* Return: 0 on success.
*
* Description: If the argument count is incorrect - exit code 97.
* If file_from does not exist or cannot be read - exit code 98.
* If file_to cannot be created or written to - exit code 99.
* If file_to or file_from cannot be closed - exit code 100.
*/
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != tri)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[bi]);
	from = open(argv[n_pos], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[bi], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == n_neg || r == n_neg)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[n_pos]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == n_neg || w == n_neg)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[bi]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[bi], O_WRONLY | O_APPEND);

	} while (r > empt);

	free(buffer);
	close_file(from);
	close_file(to);

	return (empt);
}
