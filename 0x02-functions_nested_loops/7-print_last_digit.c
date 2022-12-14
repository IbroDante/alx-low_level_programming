#include "main.h"

/**
 * print_last_digit - prints last digit
 * @n: number
 * Return: val last digit
 */
int print_last_digit(int n)
{
	int pld = n % 10;

	if (pld < 0)
		pld *= -1;

	_putchar(pld + '0');

	return (0);
}
