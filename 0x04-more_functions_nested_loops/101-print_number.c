#include "main.h"
/**
 * prime_number - print
 * @n: integer
 * Return: Always
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
		print_num(num / 10);
	_putchar((num % 10) + '0');
}
