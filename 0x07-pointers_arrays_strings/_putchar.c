#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The charater to print
 * Return: 0 on success
 * on error, -1 is returned, and error is appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
