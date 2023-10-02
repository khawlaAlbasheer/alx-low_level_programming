#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - executes a function given as a parameter
 * @array: int
 * @size: size of array
 * @action: a pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
