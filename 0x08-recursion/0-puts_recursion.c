#include "main.h"
/**
 * _puts_recursion - must function like puts();
 * @s: be input
 * Return: Always be 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
