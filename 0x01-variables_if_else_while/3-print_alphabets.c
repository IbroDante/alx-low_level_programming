#include <stdio.h>

/**
 * main - Prints.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[32] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 32; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
