#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - Faylın sonunametinelave edir
 * @filename: Faylın a
 * @text_content:elave olunacaq metn
 *
 * Return: 1 ugurlu, -1 ugursuz
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w_bytes, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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
