#include "holberton.h"
/**
 * print_alphabet - Function to print the alphabet
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
