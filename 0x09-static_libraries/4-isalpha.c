#include "main.h"
/**
 * _isalpha - program checks for alphabetic character
 * @c: the character to check
 * Return: 1 if c is a letter, 0 if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
