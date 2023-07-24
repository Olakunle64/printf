#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/**
 * struct print_f - structure containg two memebers
 * @c: string
 * @fun_ptr: function pointer
 */

typedef struct print_f
{
	char *c;
	int (*fun_ptr)(va_list *);
} pr;

int _printf(const char *format, ...);
int print_char(va_list *arg);
int print_string(va_list *arg);
int (*get_format(char *s, struct print_f *func_array))(va_list *);
int _putchar(char c);
int print_int(va_list *arg);

#endif /* MAIN_H */
