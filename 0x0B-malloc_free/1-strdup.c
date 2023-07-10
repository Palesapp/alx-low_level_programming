#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *bbb;
	int i, a = 0;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;
	bbb = malloc(sizeof(char) * (i + 1));

	if (bbb == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		bbb[a] = str[a];
	return (bbb);
}
