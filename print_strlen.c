#include "main.h"

/*
 * _strlen - Return the lenght of a string.
 * @str: string pointer
 * Return: i
 *
 */
int _strlen(char *str)
{
	int i;
	for (i = 0; str[i] != 0; i++);
	return (i);
}
/**
 * _strlenc - Strlen functions but applied for constant char pointer str
 * @str: char pointer
 * Return: i 
 */
int _strlenc(const char  char *str)
{
	int i;
	for (i = 0; str[i] !=0; i++);
	return(i);
}
