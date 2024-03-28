#include "main.h"
/**
 * selec_format - selection a type to print
 * @format: format to produce
 * @par: argument
 * Return: count the number of character
 */
int selec_format(const char *format, va_list par)
{
int i, j;
int count = 0;

type s[] = {
	{'c', printchar},
	{'s', printstr},
	{'%', printpercent},
	{0, NULL}
};
i = 0;

	while (format && format[i])
	{
		/*check if symbol % is present and if K or ! is not after the symbol*/
		if (format[i] == '%' && format[i + 1] != 'K' && format[i + 1] != '!')
		{
			i++;/*incrementing +1 to avoid printing %*/
			if (format[i] == 'i' || format[i] == 'd')
			{ /*if format is i or d call printnumb function*/
				count += printnumb((long)(va_arg(par, int)), 10);
			}
			j = 0;
			while (s[j].t)
			{
				if (s[j].t == format[i]) /*compare char t in struc type to format[i]*/
				{
					count += s[j].f(par);/*if comparaison ok then call function associated*/
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]); /*if no comparaison then just print each character*/
			count++;
		}
		i++;
	}
return (count); /*return the lenght to the _printf function*/
}

/**
 * _printf - function that output the stdout
 * @format: format to print
 * Return: return the lenght of the output
*/
int _printf(const char *format, ...)
{
	va_list par; /*declare variable for va_arg*/
	int count;

	va_start(par, format); /*start variadic function with argument of format*/

/*check if format is null and if % is not the last char*/
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1); /*return -1 because function fail*/
	}
	/*esle call the selec function, add the return to count*/
	count = selec_format(format, par);

	va_end(par); /*end teh variadic function*/
	return (count); /*return the lenght of stdout*/
}
