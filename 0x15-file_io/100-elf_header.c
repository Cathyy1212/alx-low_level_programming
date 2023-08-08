#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * print_error - Print an error message to stderr.
 * @msg: The error message.
 */
void print_error(const char *msg)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
}

/**
 * main - Display information from the ELF header of a given ELF file.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t num_read;
	Elf64_Ehdr header;
	int i;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
		return (98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error("Error: Can't read file");
		return (98);
	}

	num_read = read(fd, &header, sizeof(header));
	if (num_read != sizeof(header))
	{
		print_error("Error: Can't read header");
		close(fd);
		return (98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_error("Error: Not an ELF file");
		close(fd);
		return (98);
	}

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header.e_ident[i]);
	printf("\n");

	printf("  Class:   ");
	switch (header.e_ident[EI_CLASS])
	{
		case ELFCLASSNONE: printf("ELFNONE"); break;
		case ELFCLASS32:   printf("ELF32");   break;
		case ELFCLASS64:   printf("ELF64");   break;
		default:           printf("<unknown>"); break;
	}
	printf("\n");

	/* Rest of the code unchanged... */

	close(fd);
	return (0);
}
