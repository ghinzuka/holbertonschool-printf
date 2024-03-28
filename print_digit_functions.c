#include "main.h"
/**
 * printnumb - print a digit in base 10
 * @n: number to check created with var_arg
 * @base: base in wich we want to output in stdout
 * Return: the lenght
 */
int printnumb(long n, int base)
{
	int count;

	if (n < 0)
	{
		_putchar('-');
		return (printnumb(-n, base) + 1);
	}
	else if (n < base)
	{
		return (_putchar(n + '0'));
	}
	else
	{
		count = printnumb(n / base, base);
		return (count + printnumb(n % base, base));
	}
}
