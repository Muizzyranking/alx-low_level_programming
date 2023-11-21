#include "main.h"

/*
* read_textfile - reads a text file and prints it to the POSIX standard output.
* @filename: name of the file to read.
* @letters: number of letters to read and print.
* Return: number of letters read and printed, 0 if failed.
*/


ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *buf;

	if (!filename)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1){
		free(buf);
		return (0);
	}
	r = read(fd, buf, letters);
	if (r == -1){
		free(buf);
		return (0);
	}
	w = write(STDOUT_FILENO, buf, r);
	if (w == -1){
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (w);
}
