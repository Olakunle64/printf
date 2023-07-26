#include <stddef.h>
#include <stdarg.h>
#include "main.h"

/**
 * flag - check if it is printf flag
 * @c: character
 *
 * Return: 1 if it is a printf flag or 0 if it is not
 */

int flag(char c)
{
	int count = 0;

	if (c == ' ' || c == '0' || c == '#' || c == '+')
		count++;
	else
	{
		print_char('%');
		print_char(c);
		count = count + 2;
	}
	return (count);
}

/**
 * _printf - produces output according to a format
 * @format: character string.
 *
 * Description: This function is meant to print a character,
 * string to stdout based on the format string.
 * Return: return the number of characters printed(excluding the
 * null byte used to end output to strings).
 */

int _printf(const char *format, ...)
{
	va_list arg;
	int by_c = 0;
	int j = 0;

	if (format != NULL)
	{
		va_start(arg, format);
		while (format[j] != '\0')
		{
			if (format[j] != '%')
			{
				by_c += print_char(format[j]);
			}
			else
			{
				j++;
				if (format[j] == 'c')
					by_c +=  print_char((char)va_arg(arg, int));
				else if (format[j] == 's')
					by_c += print_string(va_arg(arg, char *));
				else if (format[j] == '%')
					by_c += print_char(format[j]);
				else
				{
					if (format[j] == '\0')
						return (-1);
					else
						by_c += flag(format[j]);
				}
			}
			j++;
		}
		va_end(arg);
	}
	return (by_c);
}
