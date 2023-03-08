#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string
 * @s: string
 * no return value
 */
void _puts_recursion(char *s)
{
	while (*s != '\0')
	{
		printf("%c", *s);
		s++;
	}
}
