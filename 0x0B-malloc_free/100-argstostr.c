#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, p, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;

		while (s[j++])
			len++;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		s = av[i];
		p = 0;

		while (s[p])
		{
			str[j] = s[p];
			p++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';
	return (str);
}
