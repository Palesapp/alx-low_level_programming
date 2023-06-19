#include <stdio.h>
/**
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
	int n = 97;
	int p = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (p <= 90)
	{
		putchar(p);
		p++;
	}
	putchar('\n');
	return (0);
}
