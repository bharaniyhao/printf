#ifndef MAIN_H
#define MAIN_H

void print_buffer(char buffer[], int *buff_ind);
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
int printf_rev(va_list str);
int print_rot13(va_list R);
int print_int(va_list i);
int get_width(const char *format, int *i, va_list w)
#endif
