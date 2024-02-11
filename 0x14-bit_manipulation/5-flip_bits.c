 #include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * you would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * @i: count set bits in i
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int count = 0;

	while (i != 0)
	{
		if (i & 1)
			count++;

		i >>= 1;
	}

	return (count);
}
