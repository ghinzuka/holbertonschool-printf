#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int printchar(va_list par);
int printstr(va_list par);
int _putchar(char c);
int printnumb(long n, int base);
int printpercent(va_list par);
int _printf(const char *format, ...);
int selec_format(const char *format, va_list par);

/**
 * struct type - struct
 * @t: type of the input
 * @f: pointer to function
 */

typedef struct type
{
	char t;
	int (*f)(va_list);
} type;

#endif
