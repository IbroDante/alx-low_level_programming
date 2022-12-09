#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 45; i < 243; i++)
	{
		if (i != 123 && i != 124)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
