#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
<<<<<<< HEAD
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
=======
 * printf_char - prints a char.
 * @value: arguments.
 * Return: 1.
 */
int printf_char(va_list value)
{
	char ch;

	ch = va_arg(value, int);
	_putchar(ch);
	return (1);
}
>>>>>>> 4da78444a897b5c58eefc1f841e745047b7939b3
