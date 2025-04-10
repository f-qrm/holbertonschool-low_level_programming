#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - Ajoute du texte à la fin d'un fichier existant.
 *@filename: Nom du fichier.
 *@text_content: Chaîne de caractères (NULL-terminated) à ajouter.
 *Return: 1 en cas de succès, -1 en cas d'échec.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t wbytes;
	int fd;
	int len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
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
