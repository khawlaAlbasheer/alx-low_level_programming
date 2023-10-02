#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	char temp;
	int i, len, len0;

	len = 0;
	len0 = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	len0 = len - 1;
	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len0];
		s[len0--] = temp;
	}
}
