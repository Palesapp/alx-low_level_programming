#include "main.h"
#include <stdio.h>
/**
 *_islower - checks if given character is lower case.
 *@c: character to test.
 *
 *Return: 1 for lowercase, 0 for the rest.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
