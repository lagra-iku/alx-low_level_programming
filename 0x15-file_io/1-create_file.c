#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: character
 * Return: 0
*/
int _strlen(char *s)
{
	int i = 0;

	for (; *s++;)
		i++;
	return (i);
}
/**
 * create_file - a function that creates a file.
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t write2file;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		write2file = write(file, text_content, _strlen(text_content));
		if (write2file == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
