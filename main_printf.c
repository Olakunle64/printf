#include <stddef.h>
#include <stdarg.h>
#include "main.h"

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
	int by_c = -1;

	if (format != NULL)
	{
		by_c = 0;
		va_start(arg, format);
		while (*format != '\0')
		{
			if (*format != '%')
			{
				by_c += print_char(*format);
			}
			else
			{
				format++;
				if (*format == 'c')
					by_c +=  print_char((char)va_arg(arg, int));
				else if (*format == 's')
					by_c += print_string(va_arg(arg, char *));
				else if (*format == '%')
					by_c += print_char(*format);
				else
				{
					if (*format == ' ' || *format == '#' || *format == '+'
							|| *format == '0')
					{
						by_c++;
						format++;
					}
					if (by_c == -1)
						return (by_c);
				}
			}
			format++;
		}
		va_end(arg);
	}
	return (by_c);
}
