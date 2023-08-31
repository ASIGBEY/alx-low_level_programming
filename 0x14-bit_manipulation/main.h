#ifndef MAIN_H
#define MAIN_H

/**
* enum work_shell - singly linked list
* @n_neg: it holds negative -1
* @n_pos: it holds positive 1
* @emp: it holds zero 0
* @bravo1: directs to perfect
*/

enum work_shell
{
	n_neg = -1,
	n_pos = 1,
	bravo1 = 0,
	emp = 0
};
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _atoi(const char *s);
int _putchar(char c);
int get_endianness(void);

#endif
