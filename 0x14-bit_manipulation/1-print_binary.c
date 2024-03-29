#include "main.h"

/**
* print_binary - prints the binary equivalent of a decimal number
* @n: number to print in binary
*/
void print_binary(unsigned long int n)
{
	int i, count = emp;
	unsigned long int current;

	for (i = 63; i >= emp; i--)
	{
		current = n >> i;

		if (current & n_pos)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
