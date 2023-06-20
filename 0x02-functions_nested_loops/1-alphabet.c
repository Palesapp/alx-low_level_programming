#include "main.h"
/**
*print_alaphabet - Prints alphabet in lowercase
*
*Return: Always 0 (Success)
*/
int main(void) 
{
        print_alphabet();	
	int m;

	for (m = 97; m <= 122; m++)
	{
		_putchar(m);
	}
	_putchar('\n');
}
