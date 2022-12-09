#include <stdio.h>

/**
 * main - Printss.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 56; i < 68; i++)
	{
		putchar(i);
		if (i != 65)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
