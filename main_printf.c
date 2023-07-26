#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

/**
 * count - count numbers
 * @c: character
 * @k: integer to be incrementing
 *
 * Return: return the value of k
 */

int count(char c, int k)
{
	{
		_putchar(c);
		k = k + 1;
	}
	return (k);
}

/**
 * get_format - get the appropriate function for the format
 * @s: string storing the format
 * @func_array: structure
 *
 * Return: return the appropriate function.
 */

int (*get_format(char *s, struct print_f *func_array))(va_list *)
{
	int i = 0;

	while (i < 4)
	{
		if (strcmp(s, func_array[i].c) == 0)
		{
			return (func_array[i].fun_ptr);
		}
		i++;
	}
	return (NULL);
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
	pr func_array[] = {{"%c", print_char}, {"%s", print_string}};
	int j = 0, k = 0, p = 0, (*pointer_store)(va_list *);

	if (format == NULL)
		return (0);
	va_start(arg, format);
	while (format && format[j])
	{
	if (format[j] == '%' && format[j + 1] != '\0' && format[j + 2] != ' ')
	{
		switch (format[j + 1])
		{
			case 'c':
				pointer_store = get_format(func_array[0].c, func_array);
				p += pointer_store(&arg);
				j = j + 1;
				break;
			case 's':
				pointer_store = get_format(func_array[1].c, func_array);
				p += pointer_store(&arg);
				j = j + 1;
				break;
			case '%':
				_putchar(format[j + 1]);
				j = j + 1;
				p++;
				break;
			case ' ':
				if (format[j + 2] != ' ' && format[j + 2] != '\0')
				{
					_putchar(format[j + 1]);
					p++;
					j++;

				}
				else
				{
				_putchar(' ');
				j = j + 1;
				p--;
				}
		}
	}
	else
	{
		k = count(format[j], k);
	}
		j++;
	}
	va_end(arg);
	return (k + p);
}
