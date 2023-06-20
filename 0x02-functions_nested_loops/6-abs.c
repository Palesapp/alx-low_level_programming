#include "main.h"
/**
 *_abs - return the absolute value of a given integer.
 *@p: value use to find the absolute value.
 *
 *
 *Return: absolute value
 */
int _abs(int p)
{
	if (p >= 0)
	{
		return (p);
	}
	else
	{
		return (p * -1);
	}
}
