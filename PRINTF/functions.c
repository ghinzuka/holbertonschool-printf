#include "main.h"
/*
 * printchar - print a character
 * @par: parameter
 */
int printchar(va_list par)
{
	_putchar(va_arg(par, int));
	return (1);
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
	if (s == NULL)
	{
	s = "(null)";
	}

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}
return (i);
}
