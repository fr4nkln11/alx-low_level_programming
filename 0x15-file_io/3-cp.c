#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char *argv[])
{
	int source_file_descriptor, dest_file_descriptor,
		read_size, write_size,
		sfd, dfd;
	char *buffer;
	char *source_filename = argv[1];
	char *dest_filename = argv[2];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	buffer = (char *)malloc(1024);
	source_file_descriptor = open(source_filename, O_RDONLY);
	dest_file_descriptor = open(dest_filename, O_WRONLY | O_TRUNC | O_CREAT, 0664);
	
	if (source_file_descriptor < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", source_filename);
		exit(98);
	}

	if (dest_file_descriptor < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", dest_filename);
		exit(99);
	}

	while ((read_size = read(source_file_descriptor, buffer, 1024)) > 0)
	{
		write_size = write(dest_file_descriptor, buffer, read_size);
		if (write_size < 0)
		{
			exit(99);
		}
		free(buffer);
		buffer = (char *)malloc(1024);
	}
	free(buffer);

	sfd = close(source_file_descriptor);
	dfd = close(dest_file_descriptor);

	if (sfd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", source_file_descriptor);
		exit(100);
	}

	if (dfd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", dest_file_descriptor);
		exit(100);
	}

	return (0);
}
