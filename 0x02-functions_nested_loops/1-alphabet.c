#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints lowercase alphabet
 * followed by a new line
 *
 * no return value
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

}
