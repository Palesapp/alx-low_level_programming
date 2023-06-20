#include "main.h"
/**
 *print_last_digit - will print the last digit of a given number.
 *@t: Number used to find last digit
 *
 *Description: will print the last digit of a given number. If the
 *number is a negative the value will be return unsigned int.
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
