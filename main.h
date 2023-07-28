#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(char c);
int print_string(char *str);
int flag(char c);
int print_int(int num);
int count_digit(int num);
int bit_count(unsigned int num);
int print_binary(unsigned int num, int i);
int _strlen(char *str);
int print_rev(char *s);

#endif /* MAIN_H */
