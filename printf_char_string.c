#include "main.h"

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
		write(1, str, len);
		return (len);
	}
	else
	{
		ptr = "(null)";
		write(1, ptr, 6);
		return (0);
	}
}
int print_char(va_list *arg)
{
	char c = (char)var_arg(*arg, int);
	write(1, &c, 1);
	return (1);
}
