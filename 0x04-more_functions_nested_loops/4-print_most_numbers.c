#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - prints the numbers from 0 to 9, except 2, 4
 * followed by a new line
 *
 * Return- has no return value
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if ((i == 50) || (i == 52))
		{
			continue;
		}
		else
		{
			_putchar(i);
		}
	}
	_putchar(10);
}
