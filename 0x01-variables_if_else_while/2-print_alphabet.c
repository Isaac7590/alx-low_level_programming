#include<stdio.h>

/**
 * main - pritn alphabet
 *
 * Return: 0
 */
int main(void)
{
	char z = 'a';

	while (z <= 'z')
	{
		putchar(z);
		z++;
	}
	putchar('\n');
	return (0);
}
