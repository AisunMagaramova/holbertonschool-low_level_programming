#ifndef MAIN_H
#define MAIN_H
#include <sys/types.h>
#include <unistd.h>

int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);
int append_text_to_file(const char *filename, char *text_content);
void print_error_and_exit(int code, const char *msg, const char *arg);
#endif
