#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @i: is the int that will use for the argument of the function
 * Return: integer value
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
	k = -k;
	return (k);
}
