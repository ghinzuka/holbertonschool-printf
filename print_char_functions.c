#include "main.h"
/**
 * printchar - print a character
 * @par: parameter
 * Return: the lenght
 */
int printchar(va_list par)
{
	return (_putchar(va_arg(par, int)));
}
/**
 * printstr - print a string
 * @par: parameter
 * Return: lenght of the string
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

	while (s[i] !='\0')
	{
		_putchar(s[i]);
		i++;
	}
return (i);
}

/**
 * printpercent - print a the percent symbol
 * @par: parameter
 * Return: 1
 */
int printpercent(va_list par)
{
	(void)par; /*void the parameter for compilation*/
	_putchar(37);
	return (1);
}
