#include "main.h"
/**
 */
unsigned int _strspn(char *s, char *accept)
{
	int nofb;


	nofb = 0;
	while (*s != '\0')
	{
		if (*s == *accept)
		{
			nofb++;
		}
		s++;
		accept++;
	}
	return (nofb);
}
