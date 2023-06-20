#include "main.h"
/**
*Description: print_alaphabet - Prints alphabet in lowercase
*
*Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int m;

	for ( m = 97; m <= 122; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
