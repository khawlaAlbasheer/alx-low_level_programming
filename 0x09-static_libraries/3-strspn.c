#include "main.h"
/**
 * _strspn - counts ho many times a ginev char in string
 * @s: string
 * @accept: char
 * Return: number of char in s
 */
unsigned int _strspn(char *s, char *accept)
{
	int nofb;


	nofb = 0;
	while (*s != '\0')
	{
		if (*s == *accept)
		{
			nofb++;
		}
		s++;
		accept++;
	}
	return (nofb);
}
