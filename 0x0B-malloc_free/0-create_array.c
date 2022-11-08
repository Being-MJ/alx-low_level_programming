#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - creates an array of characters
 * @size: size of the array
 * @c: character
 * Return: a pointer to the array, or NULL if unsuccessful
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size ==0)
		return (NULL);
	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	return (array);
}