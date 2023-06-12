#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *file_name, size_t num_letters);
int create_file(const char *file_name, char *content);
int append_text_to_file(const char *file_name, char *content);

#endif
