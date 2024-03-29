#include "main.h"

/**
* binary_to_uint - converts a binary number to unsigned int
* @b: string containing the binary number
*
* Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = emp;

	if (!b)
		return (emp);

	for (i = emp; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (emp);
		dec_val = bi * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
