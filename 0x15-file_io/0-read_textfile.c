#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Read text file and print  to STOUDT.
 * @filename: Text file being read.
 * @letters: Numbers of letters to be read.
 *
 * Return: On success, returns the number of bytes read and printed.
 *         On failure or if file name is NULL, returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t t, w;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)

	{
		close(fd);
		return (0);

	}

	t = read(fd, buf, letters);
	if (t == -1)

	{
		free(buf);
		close(fd);
		return (0);
	}

	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);

	if (w != t)
		return (0);

	return (w);

}
