#include "main.h"
/**
*Description: print_last_digit - print the last digit of the number
*
*Return: last digit.
*/
int print_last_digit(int n)
{
	int t;

	t = n % 10;
	if (t < 0)
	{
		_putchar(-t + 48);
		return (-t);
	}
	else
	{
		_putchar(t + 48);
		return (t);
	}
	_putchar('\n');
}
