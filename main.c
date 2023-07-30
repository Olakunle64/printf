#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <limits.h>

int main(void)
{
	int len, len2;
	int k = _printf("%o\n", 101);
	printf("%o\n", 101);
	_printf("%r\n", "KUNLE");
	_printf("%r\n", NULL);
	_printf("%d\n", k);
	_printf("%u\n", -373673627);
	printf("%u\n", -373673627);
	_printf("%X\n", UINT_MAX);
	printf("%X\n", UINT_MAX);
	_printf("%x\n", -1024);
	printf("%x\n", -1024);
	len = printf("%#euryr\n");
	len2 = _printf("%#euryr\n");
	printf("%d, %d\n", len, len2);
	_printf("%R %R\n", "kunle", "KUNLE");
	
	return (0);
}
