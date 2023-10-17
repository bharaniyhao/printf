#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
  * find_function - function that finds formats for _printf
  * calls the corresponding function.
  * @format: format (char, string, int, decimal)
  * Return: NULL or function associated ;
  */
int (*find_function(const char *format))(va_list)
{
	unsigned int is = 0;
	code_f find_f[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_dec},
		{"r", print_rev},
		{"b", print_bin},
		{"u", print_unsig},
		{"o", print_octal},
		{"x", print_x},
		{"X", print_X},
		{"R", print_rot13},
		{NULL, NULL}
	};

	while (find_f[is].sc)
	{
		if (find_f[is].sc[0] == (*format))
			return (find_f[is].f);
		is++;
	}
	return (NULL);
}
/**
  * _printf - function that produces output according to a format.
  * @format: format (char, string, int, decimal)
  * Return: size the output text;
  */
int _printf(const char *format, ...)
{
	va_list test;
	int (*f)(va_list);
	unsigned int i = 0, cprint = 0;

	if (format == NULL)
		return (-1);
	va_start(test, format);
	while (format[is])
	{
		while (format[is] != '%' && format[is])
		{
			_putchar(format[is]);
			cprint++;
			is++;
		}
		if (format[is] == '\0')
			return (cprint);
		f = find_function(&format[is + 1]);
		if (f != NULL)
		{
			cprint += f(test);
			is += 2;
			continue;
		}
		if (!format[is + 1])
			return (-1);
		_putchar(format[is]);
		cprint++;
		if (format[is + 1] == '%')
			is += 2;
		else
			is++;
	}
	va_end(test);
	return (cprint);
}
