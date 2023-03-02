#include "main.h"

/**
 * reverse_array - revereses an array.
 *@a: pointer to array.
 *@n: number of elements of an array.
 */

void reverse_array(int *a, int n)
{
	int temp;
	int counter;

	n = n - 1;
	counter = 0;
	while(counter <= n)
	{
		temp = a[counter];
		a[counter++] = a[n];
		a[n--] = temp;
	}
}
