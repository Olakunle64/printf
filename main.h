#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
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
int count_digit(int num);
int count(char c, int k);

#endif /* MAIN_H */
