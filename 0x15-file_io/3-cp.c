#include "main.h"

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
	int cl, cl1;
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
	if (br == -1 || fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd1 = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);

	bw = write(fd1, buffer, br);
	if (bw == -1 || fd1 == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	cl = close(fd);
	cl1 = close(fd1);
	if (cl == -1 || cl1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", cl == 1 ? fd : fd1);
		exit(100);
	}
	return (0);
}
