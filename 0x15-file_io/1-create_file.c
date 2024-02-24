#include "main.h"


/**
 * create_file - a function that creates a file
 * @filename: filename
 * @text_content: content written in the file
 *
 * Return: 1 if it is success, -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		size_t len = strlen(text_content);
		ssize_t written = write(fd, text_content, len);

		if (written == -1 || (size_t)written != len)
		{
			close(fd);
			unlink(filename);
			return (-1);
		}
	}

	if (fchmod(fd, S_IRUSR | S_IWUSR) == -1)
	{
		close(fd);
		unlink(filename);
		return (-1);
	}

	close(fd);
	return (1);
}
