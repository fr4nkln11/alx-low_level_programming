#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include "stdint.h"

#define RW_PERM 0600
#define EI_NIDENT 16

typedef struct {
    uint8_t   ident[EI_NIDENT]; /* ELF identification bytes */
    uint16_t  type;             /* Object file type */
    uint16_t  machine;          /* Target architecture */
    uint32_t  version;          /* ELF format version */
    uint64_t  entry;            /* Entry point address */
    uint64_t  program_header_offset;  /* Start of program headers */
    uint64_t  section_header_offset;  /* Start of section headers */
    uint32_t  flags;            /* Processor-specific flags */
    uint16_t  header_size;      /* Size of this header */
    uint16_t  program_header_entry_size; /* Size of program header entry */
    uint16_t  program_header_entry_count; /* Number of program header entries */
    uint16_t  section_header_entry_size; /* Size of section header entry */
    uint16_t  section_header_entry_count; /* Number of section header entries */
    uint16_t  section_header_string_table_index; /* Section header string table index */
} Elf64_Header;

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
