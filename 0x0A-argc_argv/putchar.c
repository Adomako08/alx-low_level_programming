#include <stdio.h>
#include "main.h"

/**_putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On Success 1.
 * On error, -1 is returned and errno is set approriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
