#include "main.h"
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	size_t write_size, read_size;
	char buffer[1024];

	if (filename)
	{
		file_descriptor = open(filename, O_RDONLY);
		if (file_descriptor != -1)
		{
			read_size = read(file_descriptor, buffer, letters);
			buffer[read_size] = '\0';

			write_size = write(1, buffer, read_size);
			if (write_size > 0)
			{
				return (write_size);
			}
		}

		close(file_descriptor);
	}

	return (0);
}
