#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: string to evaluate
 *
 * no return vlue
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		printf(str[i]);
	}
	printf('\n');
}
