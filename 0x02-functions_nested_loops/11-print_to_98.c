#include "main.h"
#include <stdio.h>
/**
*Description: print_to_98 - count the natural numbers from n to 98.
*
*Return: no return
*/
void print_to_98(int n)
{
	int i;

	if (n == 98)
	{
		prinf(98);
	}
	else if (n < 98)
	{
		for ( i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i < 98)
				printf(",");
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i > 98)
				printf(",");
		}
	}
	prinf("\n");
}
