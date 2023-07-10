#include "main.h"

/**
 *read_textfile- func that reads a text file and prints it to the POSIX stdout
 *@filename: file name of textfile
 *@letters: the actual number of letters it could read and print
 *
 *Return: The actual number of bytes read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t writefile, readfile;
	char *buffer;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	readfile = read(file, buffer, letters);
	if (readfile == -1)
	{
		close(file);
		free(buffer);
		return (0);
	}
	writefile = write(STDOUT_FILENO, buffer, readfile);
	if (writefile == -1 || writefile != readfile)
	{
		close(file);
		free(buffer);
		return (0);
	}
	close(file);
	free(buffer);
	return (writefile);
}
