#include "main.h"
#include <stdio.h>

/**
*print_numbers - prints the numbers from 0 to 9
* followd by a new line
*
* Return: no return value
*/
void print_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		_putchar(i);
		i++;
	}
	_putchar(10);

}
