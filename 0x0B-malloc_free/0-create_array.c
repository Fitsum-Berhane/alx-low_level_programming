#include <stdlib.h>
/**
 * create_array - creates an array characters
 * @size: size of array to create
 * @c: character to fill the array with
 * Return: Null or a pointer to created array
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = (char *)malloc((size + 1) * sizeof(char));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	array[i] = '\0';
	return (array);
}
