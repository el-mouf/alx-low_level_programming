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
	ssize_t bytes_r, bytes_w, file;

	if (filename == NULL)
	{
		return (0);
	}

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		return (0);
	}

	if (buffer == NULL)
	{
		return (0);
	}

	bytes_r = read(file, buffer, letters);
	if (bytes_r == -1)
	{
		return (0);
	}

	buffer[letters] = '\0';

	bytes_w = write(STDOUT_FILENO, buffer, bytes_r);
	if (bytes_w == -1)
	{
		return (0);
	}

	free(buffer);
	close(file);
	return (bytes_w);
}
