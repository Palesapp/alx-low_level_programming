#include <stdio.h>
#include "main.h"
/**
 * main - program that multiplies two numbers
 * @argc: this is the argument count
 * @argv: this is the argument vector
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 1)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a *b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
