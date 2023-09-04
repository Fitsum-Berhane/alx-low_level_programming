#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 *           containing a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: On success, returns a pointer to the duplicated string.
 *         On failure, returns NULL.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int length = 0, i;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[length])
		length++;

	/* Allocate memory for the duplicate string */
	duplicate = malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	/* Copy the string to the duplicate */
	for (i = 0; i < length; i++)
		duplicate[i] = str[i];
	duplicate[i] = '\0';

	return (duplicate);
}
