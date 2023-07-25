#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "main.h"

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
	pr func_array[] = {{"%c", print_char}, {"%s", print_string}, {'\0', NULL}};
	int j = 0, k = 0, p = 0, (*pointer_store)(va_list *);

	if (format == NULL)
		return (0);
	va_start(arg, format);
	while (format && format[j])
	{
		if (format[j] == '%')
		{
		if (format[j + 1] == 'c')
		{
		pointer_store = get_format(func_array[0].c, func_array);
		}
		if (format[j + 1] == 's')
		{
			pointer_store = get_format(func_array[1].c, func_array);
		}
		if (pointer_store)
		{
			p += pointer_store(&arg);
			j = j + 1;
		}
		}
		else
		{
			_putchar(format[j]);
			k++;
		}
		j++;
	}
	return (k + p);
}

