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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
