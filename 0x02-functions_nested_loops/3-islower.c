#include "main.h"
/**
*Description: islower - i if the input is a
*lowercase character. Another cases 0
*
*Return: 1 for lowercase, 0 for the rest.
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);	
}
