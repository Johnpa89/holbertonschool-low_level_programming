#include "holberton.h"

/**
 * swap_int - function to swap two numbers
 * @a: first int to swap
 * @b: second int to swap
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
