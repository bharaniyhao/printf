#include "main.h"

/**
 * print_short_oct - Prints a short integer in octal
 * @val: Argument list
 * Return: Number of characters printed
 */
int print_short_oct(va_list val) {
    short num = va_arg(val, int);  // A short is promoted to int
    int printed_chars = 0;

    // Handle the conversion and print the short integer in octal
    // ...

    return printed_chars;
}

