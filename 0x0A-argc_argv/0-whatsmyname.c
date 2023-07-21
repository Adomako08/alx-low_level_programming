#include <stdio.h>
#include "main.h"

/**
 * main - must print the name of the program
 * @argc: be number of arguments
 * @argv: be array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
