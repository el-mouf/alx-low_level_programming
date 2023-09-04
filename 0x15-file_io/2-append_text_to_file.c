#include "main.h"

/**
 * append_text_to_file - function that appends text to file
 * @filename: pointer to a file's name
 * @text_content: is the NULL terminated string
 * Return: 1 (success) otherwise -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_p, wr;
	int length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	file_p = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	if (file_p < 0)
	{
		return (-1);
	}

	if (text_content)
	{
		while (text_content[length])
		{
			length++;
		}
	}
	wr = write(file_p, text_content, length);
	if (wr < 0)
	{
		close(file_p);
		return (-1);
	}

	close(file_p);
	return (1);
}
