#include "main.h"
/**
*Description: print_alphabet_x10 - Prints alphabet 10 times
*
*Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int m;
	int l;

	for (l = 1; m <= 10; m++)
	{
		for (l = 97; l <= 122; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
