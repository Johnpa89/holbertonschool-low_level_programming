#include "holberton.h"

/**
 * _strlen - function to return lenght of a string
 * @str: variable to read length
 *
 * Return: Lenght of str
 */
int _strlen(char *str)
{
	int i = 0;

	while (*(str + i))
		i++;
	return (i);
}
