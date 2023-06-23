#include "main.h"
/**
 *_isupper - checks if parameter is an uppercase character.
 *@c: input character
 *Return: 1 if its an uppercase, 0 in other cases.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 98)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
