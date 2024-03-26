#ifndef MAIN_H_
#define MAIN_H_
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

void printchar(va_list par);
int printstr(va_list par);
int _putchar(char c);
void printint(va_list par);
void printdec(va_list par);
void printpercent(va_list par);
int _printf(const char *format, ...);

/**
 * struc type - struct 
 * @t: type
 * @f pointer to function
 */

typedef struct type
{
	char *t;
	void(*f)(va_list);
} type;

#endif
