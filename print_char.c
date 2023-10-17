#include "main.h"

/**
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
