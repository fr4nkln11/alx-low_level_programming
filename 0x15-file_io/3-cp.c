#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

void close_files(int source_fd, int dest_fd);

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: argument vector
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int source_file_descriptor, dest_file_descriptor,
		read_size, write_size;
	char *buffer;
	char *source_filename = argv[1];
	char *dest_filename = argv[2];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = (char *)malloc(1024);
	source_file_descriptor = open(source_filename, O_RDONLY);
	dest_file_descriptor = open(dest_filename,
			O_WRONLY | O_TRUNC | O_CREAT, 0664);

	if (source_file_descriptor < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_filename);
		exit(98);
	}

	if (dest_file_descriptor < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_filename);
		exit(99);
	}

	while ((read_size = read(source_file_descriptor, buffer, 1024)) > 0)
	{
		write_size = write(dest_file_descriptor, buffer, read_size);
		if (write_size < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_filename);
			exit(99);
		}
		free(buffer);
		buffer = (char *)malloc(1024);
	}
	free(buffer);
	if (read_size < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", source_filename);
		exit(98);
	}

	close_files(source_file_descriptor, dest_file_descriptor);

	return (0);
}

/**
 * close_files - a function to close both files
 * @source_fd: source_file_descriptor
 * @dest_fd: dest_file_descriptor
 *
 * Return: nothing
 */

void close_files(int source_fd, int dest_fd)
{
	if (close(source_fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd);
		exit(100);
	}

	if (close(dest_fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd);
		exit(100);
	}
}
