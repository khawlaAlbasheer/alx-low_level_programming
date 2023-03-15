#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * creat_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of memory
 * @c: char
 * Return: Null: if zize is zero, str
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	str = (char *) malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
