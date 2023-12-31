#include "main.h"
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: the file to read
 * @letters: number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	int write_size, read_size;
	char *buffer;

	if (filename != NULL)
	{
		buffer = (char *)malloc(letters + 1);
		file_descriptor = open(filename, O_RDONLY);

		if (file_descriptor < 0)
		{
			return (0);
		}
		read_size = read(file_descriptor, buffer, letters);
		if (read_size < 0)
		{
			return (0);
		}
		buffer[read_size] = '\0';

		write_size = write(STDOUT_FILENO, buffer, read_size);
		if (write_size < 0 || (write_size != read_size))
		{
			return (0);
		}

		free(buffer);
		close(file_descriptor);
		return (write_size);
	}

	return (0);
}
