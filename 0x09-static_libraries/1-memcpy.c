#include "main.h"

/**
 *_memcpy - must be a function that copies memory area
 *@dest: be memory where is stored
 *@src: be memory where is copied
 *@n: be number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
