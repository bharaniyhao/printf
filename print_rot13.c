#include <stdio.h>
#include "main.h"
/**
  * print_rot13 - encodes a string into rot13.
  * @R: string to convert
  * Return: size the output text
  */
int print_rot13(va_list R)
{
	int a, c, count = 0;
	char *rot;
	char input_rot[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ abcdefghijklmnopqrstuvwxyz";
	char output_rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLM nopqrstuvwxyzabcdefghijklm";

	rot = va_arg(R, char *);
	if (rot == NULL)
		rot = "(null)";
	for (a = 0; rot[a] != '\0'; a++)
	{
		for (c = 0; input_rot[c] != '\0'; c++)
		{
			if (rot[a] == input_rot[c])
			{
				_putchar(output_rot[c]);
				count++;
				break;
			}
		}
	}
	return (count);
}
