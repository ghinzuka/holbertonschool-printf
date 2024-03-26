#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int printchar(va_list par);
int printstr(va_list par);
int _putchar(char c);
int printint(va_list par);
int printdec(va_list par);
int printpercent(va_list par);
int _printf(const char *format, ...);

/**
 * struc type - struct 
 * @t: type of the input
 * @f pointer to function
 */

typedef struct type
{
	char *t;
	void(*f)(va_list);
} type;

#endif
