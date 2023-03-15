#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - function that creates an array of chars, and initializes it
 * with a specific char.
 * @size: int
 * @c: char
 * Return: NULL if size is zero, and str
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = (char *) malloc(size * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
