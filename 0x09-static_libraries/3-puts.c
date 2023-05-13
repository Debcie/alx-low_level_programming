#include "main.h"
#include<stdio.h>
/**
 * _puts - Prints a string to stdout
 *
 * @str: The string to be printed
 *
 * Return: void
 */
void _puts(char *str)
{
	/* Loop through each character in the string */
	while (*str)
	{
		/* Print the current character */
		putchar(*str);

		/* Move to the next character in the string */
		str++;
	}
}

int main(void)
{
	_puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
