#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf_header(unsigned char *e_ident);
void print_magic_numbers(unsigned char *e_ident);
void print_elf_class(unsigned char *e_ident);
void print_data_encoding(unsigned char *e_ident);
void print_version_info(unsigned char *e_ident);
void print_os_abi(unsigned char *e_ident);
void print_abi_version(unsigned char *e_ident);
void print_elf_type(unsigned int e_type, unsigned char *e_ident);
void print_entry_point(unsigned long int e_entry, unsigned char *e_ident);
void close_elf_file(int elf_fd);

/**
 * check_elf_header - Checks if a file is an ELF file.
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF file - exit code 98.
 */
void check_elf_header(unsigned char *e_ident)
{
    int index;

    for (index = 0; index < 4; index++)
    {
        if (e_ident[index] != 127 &&
            e_ident[index] != 'E' &&
            e_ident[index] != 'L' &&
            e_ident[index] != 'F')
        {
            dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
            exit(98);
        }
    }
}

/* ... (other functions remain the same with updated names) */

/**
 * main - Displays the information contained in the
 * ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 * the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
    Elf64_Ehdr *header;
    int elf_fd, read_result;

    elf_fd = open(argv[1], O_RDONLY);
    if (elf_fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
        exit(98);
    }

    header = malloc(sizeof(Elf64_Ehdr));
    if (header == NULL)
    {
        close_elf_file(elf_fd);
        dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
        exit(98);
    }

    read_result = read(elf_fd, header, sizeof(Elf64_Ehdr));
    if (read_result == -1)
    {
        free(header);
        close_elf_file(elf_fd);
        dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
        exit(98);
    }

    check_elf_header(header->e_ident);
    printf("ELF Header:\n");
    print_magic_numbers(header->e_ident);
    print_elf_class(header->e_ident);
    print_data_encoding(header->e_ident);
    print_version_info(header->e_ident);
    print_os_abi(header->e_ident);
    print_abi_version(header->e_ident);
    print_elf_type(header->e_type, header->e_ident);
    print_entry_point(header->e_entry, header->e_ident);

    free(header);
    close_elf_file(elf_fd);
    return (0);
}
