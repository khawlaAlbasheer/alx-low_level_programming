#include <stdio.h>
/** main function
 * return 0: success
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float e;

	printf("The size of int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("The size of long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("The size of long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("The size of char is: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("The size of float: %lu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
	
}
