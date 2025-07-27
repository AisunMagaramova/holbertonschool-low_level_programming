#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * read_textfile - fayldan metin oxuyut
 * @filename: oxunacaq faylın ad
 * @letters: oxunacaq simvol sayı
 *
 * Return: ugurlulu olduqda oxunub yazılan simvol s
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, r_bytes, w_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		 close(fd);
		 return (0);
	}

	 r_bytes = read(fd, buffer, letters);
	 if (r_bytes == -1)
	 {
		 free(buffer);
		 close(fd);
		 return (0);
	}

	w_bytes = write(STDOUT_FILENO, buffer, r_bytes);
	free(buffer);
	close(fd);
	if (w_bytes != r_bytes)
		return (0);

	 return (w_bytes);
}
