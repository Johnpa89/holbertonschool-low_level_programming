#include "holberton.h"
/*
 * main - Entry point
 *
 * return: Always 0 (success)
 */

int main(void)
{
	char h[] = "Holberton";
	int i;

	for (i = 0 ; i <= 8 ; i++)
	{
		_putchar(h[i]);
	}
	_putchar('\n');
	return (0);
}
