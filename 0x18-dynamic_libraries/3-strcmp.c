#include "main.h"
/**
 * _strcmp - program that compares string value
 * @s1: value to enter
 * @s2: value to enter
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int b = 0;

	while (s1[b] != '\0' && s2[b] != '\0')
	{
		if (s1[b] != s2[b])
		{
			return (s1[b] - s2[b]);
		}
		b++;
	}
	return (0);
}
