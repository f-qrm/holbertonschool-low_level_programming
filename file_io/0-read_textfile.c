#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 *@filename: The name of the file to read
 *@letters: The number of letters to read and print
 *Return: The actual number of letters read and printed,
 *or 0 if an error occurs (e.g., file cannot be opened, read, or written)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *ltr;
	int fd;
	ssize_t rbytes, wbytes;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	ltr = malloc(sizeof(char) * letters);
	if (ltr == NULL)
	{
		close(fd);
		return (0);
	}
	rbytes = read(fd, ltr, letters);
	if (rbytes == -1)
	{
		free(ltr);
		close(fd);
		return (0);
	}
	wbytes = write(STDOUT_FILENO, ltr, rbytes);
	if (wbytes == -1)
	{
		free(ltr);
		close(fd);
		return (0);
	}
	free(ltr);
	close(fd);
	return (wbytes);
}
