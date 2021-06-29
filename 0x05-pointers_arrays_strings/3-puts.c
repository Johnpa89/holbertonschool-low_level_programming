#include "holberton.h"

/**
 * _puts - function to print a string
 * @st: string to print
 *
 * Return: void
 */
void _puts(char *st)
{
	int i = 0;

	while (*(st + i))
	{
		_putchar(*(st + i));
		i++;
	}
	_putchar('\n');
}
