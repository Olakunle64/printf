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
	char *ptr;
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
		ptr = "(null)";
		write(1, ptr, 6);
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

/**
 * print_int - print an integer
 * @arg: address of variable arg
 *
 * Return: return the number of digit printed
 */

int print_int(va_list *arg)
{
	int *arr, i, count, num, output = 0;

	num = va_arg(*arg, int);
	if (num < 0)
	{
		_putchar('-');
		num = -1 * num;
		output++;
	}
	count = count_digit(num);
	arr = malloc((count + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (0);
	}
	for (i = 0; i < count; i++)
	{
		arr[i] = num % 10;
		num = num / 10;
	}
	for (i = count - 1; i >= 0; i--)
	{
		putchar(arr[i] + '0');
	}
	free(arr);
	return (output + count);
}
