#include "main.h"
/**
 * _isupper - checks if letters are uppercase
 * @c: char to check
 * Return: if uppercase returns 1, else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
