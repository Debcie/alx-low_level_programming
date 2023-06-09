#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 *
 * @c: character to assign
 * @size: sixe of array
 * Description: creates an array of chars, and initializes it
 * Return: pointer to the arry or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}
