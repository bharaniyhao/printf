#include "main.h"
/**
* print_int - function that prints an integer
* @i: integer to print
* Descriptions: prints digit with _putchar
* Return: size the output text
*/
int print_int(va_list i)
{
	int len, powten, a, digits, nu, count = 0, num;

	nu = va_arg(i, int);
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
			digits = nu / powten;
			if (nu < 0)
				_putchar((digits * -1) + 48);
			else
				_putchar(digits + '0');
			count++;
			nu -= digits * powten;
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
