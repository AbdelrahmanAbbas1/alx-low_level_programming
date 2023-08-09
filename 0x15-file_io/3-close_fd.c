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
