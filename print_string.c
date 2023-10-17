#include "main.h"
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
}
