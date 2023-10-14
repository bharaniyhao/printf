#include "main.h"

/**
 * print_short_int - Prints a short integer
 * @args: Argument list
 * Return: Number of characters printed
 */
int print_short_int(va_list args) {
    short num = va_arg(args, int);  // A short is promoted to int
    int printed_chars = 0;

    // Handle the conversion and print the short integer
    // ...

    return printed_chars;
}
