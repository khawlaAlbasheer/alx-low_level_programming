#include "main.h"
/**
 * _strncpy - function copy a string
 *
 * @dest: string for testing
 * @src: string for testing
 * @n: intger
 *
 * Return: a string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i,j;

	i = 0;
	while(dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (j = i; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
