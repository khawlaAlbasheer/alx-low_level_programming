#include "main.h"

/**
*print_numbers - prints the numbers from 0 to 9
* followd by a new line
*
* Return: no return vakue
*/
void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf('%d', i);
		i++;
	}
	printf('\n');

}
