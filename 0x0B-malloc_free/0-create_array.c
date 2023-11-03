#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 *
 * Return: pointer to array, NULL if fail or size is 0
 */

char *create_array(unsigned int size, char c)
{

	unsigned int i;
	char *crt = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);


	if (crt == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		crt[i] = c;

	return (crt);
}
