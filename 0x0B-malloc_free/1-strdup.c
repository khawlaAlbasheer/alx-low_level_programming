#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - count length of string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	unsigned int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++
	}
	return (len);
}

/**
 * _strcp - coppy given two strings
 * @src: array of elements
 * @dest: array
 * Return: a pointer to dest
 */

char *_strcp(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strdup - copy of the string given as a parameter.
 * @str: string
 * Return: NULL: if str is empty, or a pointer to string
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int size;

	if (str == 0)
		return (NULL);
	size = _strlen(str) + 1;
	s = (char *) malloc(size * sizeof(char));
	if (s == 0)
		return (NULL);
	_strcp(s, str);
	return (s);
}
