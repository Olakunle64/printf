#include "main.h"
#include <stddef.h>
#include <stdio.h>

int main(void)
{
	int k = _printf("%o\n", 101);
	printf("%o\n", 101);
	_printf("%r\n", "KUNLE");
	_printf("%r\n", NULL);
	_printf("%d\n", k);
	_printf("%u\n", 373673627);
	printf("%u\n", 373673627);
	_printf("%x\n", 540);
	printf("%x\n", 540);
	return (0);
}
