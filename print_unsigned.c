#include "main.h"
#include <stdlib.h>

/**
 * count_unsigned_digit - count the number of digit in a number
 * @num: the number
 *
 * Return: return number of digit printed
 */

int count_unsigned_digit(unsigned int num)
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
 * print_unsigned - print an unsigned integer
 * @num: unsigned integer to be printed
 *
 * Return: return the number of digit printed
 */

int print_unsigned(unsigned int num)
{
	int *arr, i, by_count = 0, op_count = 0;

	if (!(num > 0))
	{
		return (0);
	}
	by_count = count_unsigned_digit(num);
	arr = malloc((by_count + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (0);
	}
	for (i = 0; i < by_count; i++)
	{
		arr[i] = num % 10;
		num = num / 10;
	}
	for (i = by_count - 1; i >= 0; i--)
	{
		print_char(arr[i] + '0');
	}
	free(arr);
	return (op_count + by_count);
}
