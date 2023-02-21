#include <main.h>
/**
 * main - Entry point
 * Description: print _putchar with a new line
 * Return: Always 0 (Success)
 */
void main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
