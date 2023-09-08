#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

void error_exit(const char *prompt);
void print_info(Elf64_Header header);

/**
 * main - elf_header
 * Description: "a program that displays the information
 * contained in the ELF header at the start of an ELF file."
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int file_descriptor, read_size;
	char *filename = argv[1];
	Elf64_Header header;

	if (argc != 2)
	{
		error_exit("Usage: elf_header elf_filename");
	}

	/* Open the elf file */
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor < 0)
	{
		error_exit("could not open elf file");
	}

	/* Read the elf file */
	read_size = read(file_descriptor, &header, sizeof(header));

	if (read_size != sizeof(header))
	{
		error_exit("could not read elf file");
	}

	/* Check if it's a valid elf file */
	if (header.ident[0] != 0x7F || header.ident[1] != 'E'
			|| header.ident[2] != 'L' || header.ident[3] != 'F')
	{
		error_exit("Not an ELF file");
	}

	/* Print information */
	print_info(header);

	/* close the file */
	if (close(file_descriptor) < 0)
	{
		error_exit("could not close elf file");
	}

	return (0);
}

void error_exit(const char *prompt)
{
	dprintf(STDERR_FILENO, "Error: %s\n", prompt);
	exit(98);
}

void print_info(Elf64_Header header)
{
	int index;

	printf("Magic: ");
	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x ", header.ident[index]);
	}
	printf("\nClass: ELF%d\n", header.ident[4] == 1 ? 32 : 64);
}
