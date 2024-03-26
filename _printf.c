#include "main.h"
/*
 *_printf - function that produces output accord to a format
 *@format : format to produce
 *Return: the result
 */
int _printf(const char *format, ...)
{
int i, j;
va_list par;

type s[] = {
	{'c', printchar},
	{'s', printstr},
	{'%', printpercent}
};

va_start (par, format);

i = 0;

	while (format && format[i])
	{ 
		if (format[i] !='%')
		{
			_putchar(format[i]);
		}
		else if (format[i] == '%')
		{
			format++;
			
			j = 0; 
			while (s[j].t)
			{
				if (s[j].t == format[i])
				{
					s[j].f(par);
				}
				j++;
			}
		}
		i++;
	}
va_end(par);
return(1);
}
