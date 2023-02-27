#include "main.h"
#include <string.h>

/**
 * print_rev - printing a string in reverse order
 * @s: the string to be printed in reverse
 */
void print_rev(char *s)
{
	int n, i;

	s = "happy";
	n = strlen(s);
	for (i = n-1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
}
