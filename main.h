#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int print_3(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_bin(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int printf_char(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int print_unsigned(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);


#endif
