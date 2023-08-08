#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: The name of the file
 * @text_content: The string to be added at the end of the file
 *
 * Return: 1 (Success) or -1 (failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0;
	int fd;
	ssize_t bw;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0';)
			i++;
	}
	fd = open(filename, O_RDWR | O_APPEND);

	bw = write(fd, text_content, i);
	if (bw == -1 || fd == -1)
		return (-1);

	return (1);
}
