#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>

#define RW_PERM 0600

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
