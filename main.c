#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

int main(void)
{
int len;
int len2;

len = _printf(NULL);
len2 = printf(NULL);

printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);

len = _printf("Let's try to printf a simple sentence.\n");
len2 = printf("Let's try to printf a simple sentence.\n");
printf("Length:[%d, %i]\n", len, len);
printf("Length:[%d, %i]\n", len2, len2);

len = _printf("Character:[%c]\n", 'H');
len2 = printf("Character:[%c]\n", 'H');
printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);

len = _printf("Percent:[%%]\n");
len2 = printf("Percent:[%%]\n");
printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);

len = _printf("% ");
printf("\n");
len2 = printf("% ");
printf("\n");
printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);

len = _printf("Unknown:[%r]\n");
len2 = printf("Unknown:[%r]\n");
printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);

len = _printf("%s\n", NULL);
len2 = printf("%s\n", NULL);
printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);

len = _printf("String:[%s]\n", "I am a string !");
len2 = printf("String:[%s]\n", "I am a string !");
printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);

len = _printf("% \n");
len2 = printf("% \n");
printf("Len:[%d]\n", len);
printf("Len:[%d]\n", len2);

return (0);
}
