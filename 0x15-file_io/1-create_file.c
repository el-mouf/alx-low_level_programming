#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: pointer to the file's name
 * @text_content: is a NULL terminated string
 * Return: 1 (sucess), otherwise -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_d, wr;
	int length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[length])
		{
			length++;
		}
	}

	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(file_d, text_content, length);

	if (file_d == -1 || wr == -1)
	{
		return (-1);
	}

	close(file_d);
	return (1);
}
