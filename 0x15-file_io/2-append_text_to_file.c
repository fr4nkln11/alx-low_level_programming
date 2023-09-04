#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: the file to append to
 * @text_content: the content to append
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_size;
	int content_size = 0;

	if (filename)
	{
		file_descriptor = open(filename, O_WRONLY | O_APPEND | O_EXCL);
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
			write_size = 0;
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
