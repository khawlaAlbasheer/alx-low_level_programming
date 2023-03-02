#include "main.h"


/**
 * _strcmp - compares two strings.
 * @s1: pointer of first tring
 * @s2: pointer of second string
 *
 * Return: negative int if s1 less than s2,
 * possative int if s1 is geater than s2,
 * 0: s1 = s2
 */
int _strcmp(char *s1, char *s2)
{
	int len, result;

	len = 0;
	while (s1[len] == s2[len] && s1[len] != '\0')
	{
		len++;
	}
	result = s1[len] - s2[len];
	return (result);

}
