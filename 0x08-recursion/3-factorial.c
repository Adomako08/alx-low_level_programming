#include "main.h"

/**
 * factorial - must return the factorial of a number
 * @n: number from which the factorial is to be returned
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
