#include "main.h"

/**
 * _islower - checks if characeter is lowercase
 * @c: the character
 * Return: 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
