#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - must print each array elem on a newl
 * @array: be array
 * @size: be how many elem to print
 * @action: be pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
