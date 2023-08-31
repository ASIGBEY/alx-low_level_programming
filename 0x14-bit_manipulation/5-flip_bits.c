#include "main.h"

/**
* flip_bits - counts the number of bits to change
* to get from one number to another
* @n: first number
* @m: second number
*
* Return: number of bits to change
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = emp;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= emp; i--)
	{
		current = exclusive >> i;
		if (current & n_pos)
			count++;
	}

	return (count);
}
