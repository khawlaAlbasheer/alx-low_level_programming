#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
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
