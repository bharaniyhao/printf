#include "main.h"
/**
 * printf_rev - Print string in reverse
 * @str: string
 *
 * Return: The number of characters bytes printed
 */
int printf_rev(va_list str)
{
	int len;
	int sum = 0;
	char *string = va_arg(str, char *);

	if (string)
	{
		for (len = 0; *string ; string++)
			len++;
		string--;
		for (; len > 0 ; len--, string--)
			sum += _putchar(*string);
	}
	return (sum);
}


