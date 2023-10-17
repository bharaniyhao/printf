#include <stdarg.h>
#include <stdio.h>
#include "main.h"
/**
* print_bin - convert to binary
* @b: number in decinal
* Return: number of chars printed
*/
int print_bin(va_list b)
{
	unsigned int len, powten, a, digit, nu, num;
	int count = 0;

	nu = va_arg(b, unsigned int);
	if (nu != 0)
	{
		num = nu;
		len = 0;
		while (num != 0)
		{
			num /= 2;
			len++;
		}
		powten = 1;
		for (a = 1; a <= len - 1; a++)
			powten *= 2;
		for (a = 1; a <= len; a++)
		{
			digit = nu / powten;
			_putchar(digit + '0');
			count++;
			nu -= digit * powten;
			powten /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
