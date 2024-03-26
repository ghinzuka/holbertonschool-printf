#include "main.h"
/**
 *_printf - function that produces output accord to a format
 *@format : format to produce
 *Return: the result
 */
int _printf(const char *format, ...)
{
int i, j;
va_list par;
int count = 0;

type s[] = {
	{'c', printchar},
	{'s', printstr},
	{'%', printpercent}
};

va_start (par, format);

i = 0;

if (format == NULL)
	return (-1);
	while (format && format[i])
	{
		if (format[i] !='%')
		{
			_putchar(format[i]);
			count++;
		}
		else if (format[i] == '%')
		{	
			format++;
			j = 0; 
			while (s[j].t)
			{
				if (s[j].t == format[i])
				{
					count += s[j].f(par);
				}
				j++;
			}
		}
		i++;
	}
va_end(par);
return(count);
}

