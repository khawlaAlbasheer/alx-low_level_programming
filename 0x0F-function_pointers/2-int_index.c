#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer.
 * @array: given array of int
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: -1: no element matching or the size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
		}
	}
	return (-1);
}
