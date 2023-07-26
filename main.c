#include "main.h"
#include <stdio.h>

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
	printf("%d, %d\n", len1, len2);

	return (0);
}
