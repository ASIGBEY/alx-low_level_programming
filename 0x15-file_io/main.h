#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
* enum file_work - the list work
* @tri: it holds positive 3
* @bi: it holds positive 2
* @n_neg: it holds negative -1
* @n_pos: it holds positive 1
* @empt: it holds zero 0
* @bravo1: directs to perfect
*/

enum file_work
{
	tri = 3,
	bi = 2,
	n_neg = -1,
	n_pos = 1,
	bravo1 = 0,
	empt = 0
};
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
