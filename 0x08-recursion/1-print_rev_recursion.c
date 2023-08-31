#include "main.h"

/**
 * _print_rev_recursion - must print a string in reverse
 * @s: the character to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
