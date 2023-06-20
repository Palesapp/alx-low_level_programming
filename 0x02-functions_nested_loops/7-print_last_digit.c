#include "main.h"
/**
 *print_last_digit - will print the last digit of a given number.
 *@n: Number used to find last digit
 *Description: will print the last digit of a given number. If the
 *number is negative rhe value will return unsigned int.
 *
 *Return: last digit
 */
int print_last_digit(int n)
{
	n %= 10;

	if (n < 0)
	{
		n *= -1;
	}
	_putchar('0' + n);
	return (n);
	_putchar('\n');
}
