#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: int
 * @max: int
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr, i, t;

	i = 0;
	t = min;
	if (min > max)
		return (0);
	arr = malloc((max - min + 1) * sizeof(int));
	if (!arr)
		return (0);
	while (i <= max - min)
		arr[i++] = t++;
	return (arr);
}
