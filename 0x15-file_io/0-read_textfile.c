#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output
 * @letters: numbers of letters printed
 * @filename: filename
 *
 * Return: numbers of letters printed. It fails, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t r_bytes, w_bytes;
	char *buffer;

	if (!filename)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (!buffer)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
	{
		free(buffer);
		return (0);
	}

	r_bytes = read(file_descriptor, buffer, letters);
	if (r_bytes == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	buffer[r_bytes] = '\0';
	w_bytes = write(STDOUT_FILENO, buffer, r_bytes);
	if (w_bytes == -1 || w_bytes != r_bytes)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	close(file_descriptor);
	free(buffer);
	return (r_bytes);
}
