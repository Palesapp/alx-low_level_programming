#include "main.h"
/**
*Description: print_alphabet_x10 - Prints alphabet 10 times
*
*Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	char c;
	int l;

	for (l = 0; l < 10; l++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
