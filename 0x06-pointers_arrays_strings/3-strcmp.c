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
	int len1, result;

	len1 = 0;
	while(s1[len1] == s2[len1] && s1[len1] != '\0')
	{
		len1++;
	}
	result = s1[len1] - s2[len2];
	return (result);

}
