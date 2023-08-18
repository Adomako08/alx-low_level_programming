#include "main.h"

/**
 * _puts - must put a string, followed by a new line, to stdout
 * @str: be string to print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
