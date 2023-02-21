#include "main.h"

/**
 * print_sign - function that print the sign of a nummber
 * @n: The input number to check
 * Return: int.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
