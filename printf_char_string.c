#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * print_string - print a string
 * @arg: address of variable arg
 *
 * Return: return the number of character printed
 */

int print_string(va_list *arg)
{
	int i;
	int len;
	char *str;

	str = va_arg(*arg, char *);
	if (str)
	{
		len = strlen(str);
		for (i = 0; i < len; i++)
		{
			_putchar(str[i]);
		}
		return (len);
	}
	else
	{
		str = "(null)";
		write(1, str, 6);
		return (0);
	}
}

/**
 * print_char - print a character
 * @arg: address of variable arg
 *
 * Return: return the number of character printed
 */

int print_char(va_list *arg)
{
	char c = (char)va_arg(*arg, int);

	_putchar(c);
	return (1);
}

/**
 * count_digit - count the number of digit in a number
 * @num: the number
 *
 * Return: return number of digit printed
 */

int count_digit(int num)
{
	int j = 0;

	while (num / 10 != 0)
	{
		j++;
		num = num / 10;
	}
	return (j + 1);
}
