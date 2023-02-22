#include "main.h"
#include <stdio.h>

/**
 *
 *
 *
 *
 *
 */
void print_times_table(int n)
{
	int j;
	int k;
	int i;

	if ((n < 0) || (n > 15))
	{
		
	}
	else
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				putchar(k);
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
		}
		
	}
}
