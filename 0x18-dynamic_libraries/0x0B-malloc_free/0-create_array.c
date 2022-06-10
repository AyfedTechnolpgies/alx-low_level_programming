#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - create an array of chars, with a specific char.
 * @size: input size
 * @c: input char
 * Return: char
 */

char *create_array(unsigned int size, char c)
{
	char *array;

	if (!size)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);

	if (array)
	{
		while (size > 0)
			array[--size] = c;
	}
	return (array);
}
