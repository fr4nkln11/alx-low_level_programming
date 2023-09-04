#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * create_file - a function that creates a file.
 * @filename: the name of the file to create
 * @text_content: the text content to be written in the file
 *
 * Return: 1 on success,
 * -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_size;
	int content_size = 0;

	if (filename)
	{
		file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, RW_PERM);
		if (file_descriptor < 0)
		{
			return (-1);
		}

		if (text_content)
		{
			while (*(text_content + content_size) != '\0')
			{
				content_size++;
			}

			write_size = write(file_descriptor, text_content, content_size);
		}
		else
		{
			write_size = write(file_descriptor, "", 1);
		}

		if (write_size < 0)
		{
			return (-1);
		}

		close(file_descriptor);
		return (1);
	}

	return (-1);
}
