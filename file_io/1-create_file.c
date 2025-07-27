#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * create_file - Fayl yaradır e yaz
 * @filename: Yaradılacaq faylın
 * @text_content: Fayla yazılacaq NULL-terminated wtn
 *
 *  Return: 1 ugurlu olarsa, -1 gusuz olarsa
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w_bytes, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		w_bytes = write(fd, text_content, len);
		if (w_bytes == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);

}
