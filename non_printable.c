#include "main.h"
#include <stddef.h>

/**
 * non_printable - use \x(asci value in hexadecimal) to represent
 * a non printable characters.
 * @str: string
 *
 * Return: return the number of character printed
 */

int non_printable(char *str)
{
	int by_count = 0;

	if (str == NULL)
	{
		print_char('(');
		print_char('n');
		print_char('u');
		print_char('l');
		print_char('l');
		print_char(')');
		return (6);
	}
	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			by_count += print_char('\\');
			by_count += print_char('x');
			by_count += print_hexa_upper(char_to_unsigned(*str));
		}
		else
		{
			print_char(*str);
			by_count++;
		}
		str++;
	}
	return (by_count);
}
