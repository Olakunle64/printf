#include "main.h"

/**
 * print_binary - convert an unsigned integer to binary
 * @num: unsigned integer
 *
 * Return: return bytes printed.
 */

int print_binary(unsigned int num, int i)
{
	int bit;

	if (num / 2 == 0)
	{
		print_char('1');
		return (0);
	}
	bit = print_binary(num / 2, i + 1);
	print_int(num % 2);
	return (bit + 1);
}
