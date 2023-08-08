#include "main.h"

/**
 * factorial - must return the factorial of a number
 * @n: be number to return the factorial from
 *
 *  Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
