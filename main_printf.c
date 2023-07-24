#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * get_format - get the appropriate function for the format
 * @s: string storing the format
 * @func_array: structure
 *
 * Return: return the appropriate function.
 */

int (*get_format(char *s, pr *func_array))(va_list *)
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

int _printf(const char format, ...)
{


