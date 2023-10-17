#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_char - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1.
 */
int print_char(va_list c)
{
	unsigned char my_chars;

	my_chars = va_arg(c, int);
	_putchar(my_chars);
	return (1);
}
/**
 * print_porcentage - %

 * Return: 1.
 */
int print_porcentage(void)
{
	_putchar('%');
	return (1);
}
