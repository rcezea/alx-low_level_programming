#include "main.h"
/**
 * read_textfile - reads a text file and prints it to 
 * the POSIX standard output
 *
 * @filename: name of the file
 *
 * @letters: number of letters
 *
 * Return: number of letters printed and read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rf, wtf;
	int fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	rf = read(fd, buffer, letters);
	wtf = write(STDOUT_FILENO, buffer, rf);

	if (fd == -1 || rf == -1 || wtf == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (wtf);
}

