#ifndef MAIN_H
#define MAIN_H

<<<<<<< HEAD
#include <stdarg.h>
=======
void print_buffer(char buffer[], int *buff_ind);
int print_3(void);
int print_int(va_list args);
int print_dec(va_list args);
int print_bin(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int printf_char(va_list val);
>>>>>>> 4da78444a897b5c58eefc1f841e745047b7939b3
int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list i);
int print_dec(va_list d);
int print_rev(va_list r);
int print_bin(va_list b);
int print_unsig(va_list u);
int print_octal(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_rot13(va_list R);
/**
  * struct code_format - Struct format
  *
  * @sc: The specifiers
  * @f: The function associated
  */
typedef struct code_format
{
	char *sc;
	int (*f)(va_list);
} code_f;

#endif /*MAIN.H */
