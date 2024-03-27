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
	{'i', printnumb},
	{'d', printnumb},
	{0, NULL}
};

i = 0;

	while (format && format[i])
	{
		if (format[i] == '%' && format[i + 1] != 'K' && format[i + 1] != '!')
		{
			i++;
			j = 0;
			while (s[j].t)
			{
				if (s[j].t == format[i])
				{
					count += s[j].f(par);
					break;
				}
				j++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
return (count);
}

/**
 * _printf - function that output the stdout
 * @format: format to print
 * Return: return the lenght of the output
*/
int _printf(const char *format, ...)
{
	va_list par;
	int count;

	va_start(par, format);

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
	count = selec_format(format, par);

	va_end(par);
	return (count);
}
