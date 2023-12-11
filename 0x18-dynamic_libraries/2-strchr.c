#include "main.h"
/**
 * _strchr - program entry point
 * @s: value to enter
 * @c: value to enter
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int b = 0;

	for (; s[b] >= '\0'; b++)
	{
		if (s[b] == c)
			return (&s[b]);
	}
	return (0);
}
