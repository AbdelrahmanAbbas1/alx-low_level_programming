#include "main.h"

/**
 * create_file - Creates a file
 * @filename: The name of the file to be created
 * @text_content: A null terminated string to write to the file
 *
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int i = 0;
	ssize_t bytes_written;
	ssize_t fd;

	if (filename == NULL)
		return (-1);
	while (text_content[i] != '\0')
		i++;

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, i);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
