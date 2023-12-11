#include "main.h"
/**
 * _strncat - function that concatenate two string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int p;
	int b;

	p = 0;

	while (dest[p] != '\0')
	{
		p++;
	}
	b = 0;

	while (b < n && src[b] != '\0')
	{
		dest[p] = src[b];
		p++;
		b++;
	}
	dest[p] = '\0';
	return (dest);
}
