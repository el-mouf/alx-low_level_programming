#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX sdo
 * @filename: a pointer to the text file's name
 * @letters: number of letters it should read and print
 * Return: the number of letters, otherwise 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = malloc(sizeof(char) * letters);
	ssize_t bytes_o, bytes_r, bytes_w;

	if (filename == NULL)
	{
		return (0);
	}

	if (buffer == NULL)
	{
		return (0);
	}

	bytes_o = open(filename, O_RDONLY);
	bytes_r = read(bytes_o, buffer, letters);
	bytes_w = write(STDOUT_FILENO, buffer, bytes_r);

	if (bytes_o == -1 || bytes_r == -1 || bytes_w == -1 || bytes_w != bytes_r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(0);
	return (bytes_w);
}
