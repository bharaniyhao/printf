#include "main.h"
<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>
/**
 * print_string - writes the character c to stdout
 * @s: The string to print
 *
 * Return: 1.
 */
int print_string(va_list s)
{
	char *my_strings;
	int  is = 0;

	my_strings = va_arg(s, char *);
	if (my_strings == NULL)
		my_strings = "(null)";
	while (my_strings[is])
	{
		_putchar(my_strings[is]);
		is++;
	}
	return (is);
=======
/**
 * printf_string - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int printf_string(va_list val)
{
	char *str;
	int i, len;

	str = va_arg(val, char *);
	if (s == NULL)
	{
		str = "(null)";
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
	else
	{
		len = _strlen(str);
		for (i = 0; i < len; i++)
			_putchar(str[i]);
		return (len);
	}
>>>>>>> 4da78444a897b5c58eefc1f841e745047b7939b3
}
