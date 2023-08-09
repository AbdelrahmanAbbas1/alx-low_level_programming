#include "main.h"

/**
 * close_fd - Closes a file
 * @fd: the file descriptor
 */
void close_fd(int fd)
{
	int fd_v;

	fd_v = close(fd);
	if (fd_v == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @ac: Argument count
 * @av: Argument strings
 *
 * Return: 0 on Success or otherwise if failure
 */
int main(int ac, char **av)
{
	int br, bw;
	int fd, fd1;
	int buffer_size = 1024;
	char *buffer;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = malloc(sizeof(char) * buffer_size);

	fd = open(av[1], O_RDONLY);
	br = read(fd, buffer, buffer_size);
	fd1 = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	while (br > 0)
	{
		if (br == -1 || fd == -1)
		{
			free(buffer);
			dprintf(2, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		bw = write(fd1, buffer, br);
		if (bw == -1 || fd1 == -1)
		{
			free(buffer);
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		br = read(fd, buffer, buffer_size);
		fd1 = open(av[2], O_WRONLY | O_APPEND);
	}
	free(buffer);
	close_fd(fd);
	close_fd(fd1);
	return (0);
}
