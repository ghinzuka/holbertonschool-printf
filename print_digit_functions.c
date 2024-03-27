#include "main.h"
/**
 * printnumb - print a digit in base 10
 * @par: parameter
 * Return: the lenght
 */
int printnumb(va_list par)
{
	int i;
	int base = 1;
	int count = 0;

	i = va_arg(par, int);

	if (i < 0)
	{
		_putchar('-');
		count++;
		i = (i * -1);
	}
	while (i / base > 9)
	{
		base *= 10;
	}
	while (base != 0)
	{
		count += _putchar(i / base + '0');
		i = i % base;
		base = base / 10;
	}
	return (count);
}
