#include "main.h"
/*
 * printchar - print a character
 * @par: parameter
 */
void printchar(va_list par)
{
	_putchar(va_arg(par, int));
}
/*
 * printstr - print a string
 * @par: parameter
 * Return: the string
 */
int printstr(va_list par)
{
	int i = 0;
	char *s;
	s = va_arg(par, char *);
	
	while (s[j])
	{
		_putchar(s[j]);
	}
return (j);
}
