#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - Creates a file and writes a given text into it.
 * @filename: Name of the file to be created.
 * @text_content: NULL-terminated string to write to the file.
 * Return: 1 on success, -1 on failure (if file cannot be created or written).
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t wbytes;
	int fd;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[len])
		{
			len++;
		}
		wbytes = write(fd, text_content, len);
		if (wbytes == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
