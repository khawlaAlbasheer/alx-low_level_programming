#include "main.h"
#include <stdio.h>


/**
 * print_times_table - Entry point
 * @n: input
 * Return: Always 0 (Success)
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
				k = (i * j);
				if ((k / 10) > 0)
				{
					_putchar((k / 10) + '0');
				}
				
				_putchar((k % 10) + '0');
				
				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' '):
				}

			}
			_putchar('\n');
		}
	}
}
