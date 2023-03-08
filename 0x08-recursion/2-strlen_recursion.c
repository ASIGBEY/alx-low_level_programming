#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: The string for measurement
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	return (*s ? (1 + _strlen_recursion(++s)) : 0);
}
