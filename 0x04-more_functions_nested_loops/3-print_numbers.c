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

	for (i = 48; i < 58; i++)
	{
	printf("%c", i);
	}
	printf("\n");

}
