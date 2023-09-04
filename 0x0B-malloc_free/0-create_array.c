#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Description: create array of size size and assign char c
 * Return: pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char a)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);
	if (str == NULL ||size == )
		return (NULL);

	for (x = 0; x < size; x++)
		str[x] = a;
	return (str);
}
