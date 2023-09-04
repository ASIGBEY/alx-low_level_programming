#include "main.h"

/**
* create_file - Creates a file.
* @filename: A pointer to the name of the file to create.
* @text_content: A pointer to a string to write to the file.
*
* Return: If the function fails - -1.
* Otherwise - 1.
*/
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = empt;

	if (filename == NULL)
		return (n_neg);

	if (text_content != NULL)
	{
		for (len = empt; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == n_neg || w == n_neg)
		return (n_neg);

	close(fd);

	return (n_pos);
}
