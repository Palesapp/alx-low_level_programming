#include "main.h"
/**
*print_alaphabet - Prints alphabet in lowercase using _putchar
*Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++) 
	{
		_putchar(c);
	}
	_putchar('\n');
}
