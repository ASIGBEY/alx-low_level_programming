#include "main.h"

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: A pointer to the name of the file.
* @text_content: The string to add to the end of the file.
*
* Return: If the function fails or filename is NULL - -1.
* If the file does not exist the user lacks write permissions - -1.
* Otherwise - 1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = empt;

	if (filename == NULL)
		return (n_neg);

	if (text_content != NULL)
	{
		for (len = empt; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == n_neg || w == n_neg)
		return (n_neg);

	close(o);

	return (n_pos);
}
