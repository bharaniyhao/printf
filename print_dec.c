#include "main.h"
/**
* print_dec - function that prints an decimal
* @d: integer to print
* Descriptions: prints digit with _putchar
* Return: size the output text
*/
int print_dec(va_list d)
{
	int len, powten, a, digit, nu, count = 0, num;

	nu = va_arg(d, int);
	if (nu != 0)
	{
		if (nu < 0)
		{
			_putchar('-');
			count++;
		}
		num = nu;
		len = 0;
		while (num != 0)
		{
			num /= 10;
			len++;
		}
		powten = 1;
		for (a = 1; a <= len - 1; a++)
			powten *= 10;
		for (a = 1; a <= len; a++)
		{
			digit = nu / powten;
			if (nu < 0)
				_putchar((digit * -1) + 48);
			else
				_putchar(digit + '0');
			count++;
			nu -= digit * powten;
			powten /= 10;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
