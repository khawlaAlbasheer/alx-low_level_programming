#include "main.h"

/**
 * print_rev - prints a string in reverse
 *
 * @s: string to evauate
 * no return value
 */

void print_rev(char *s)
{
	int len;

	len = _strlen(*s);
	for (int i = len; i = 0; i--)
	{
		printf("%c", s[i]);
	}
}
