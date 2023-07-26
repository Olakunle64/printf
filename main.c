#include "main.h"
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int len1, len2;

	len1 = _printf(NULL);
	putchar('\n');
	len2 = printf(NULL);
	_printf("%k\n");
	printf("%k\n");
	_printf("%!\n");
	printf("%!\n");
	_printf("%d, %d\n", len1, len2);
	_printf("%d\n", INT_MAX);
	_printf("%d\n", INT_MIN);

	return (0);
}
