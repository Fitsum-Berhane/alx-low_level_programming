#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: On success, returns a pointer to a newly allocated space in memory
 *         containing the concatenated strings.
 *         On failure, returns NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int length1 = 0, length2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* Calculate the lengths of the strings */
	while (s1[length1])
		length1++;
	while (s2[length2])
		length2++;

	/* Allocate memory for the concatenated strings */
	concatenated = malloc((length1 + length2 + 1) * sizeof(char));
	if (concatenated == NULL)
		return (NULL);

	/* Copy the characters from the first string to the concatenated string */
	for (i = 0; i < length1; i++)
		concatenated[i] = s1[i];

	/* Copy the characters from the second string to the concatenated string */
	for (j = 0; j < length2; j++)
		concatenated[i + j] = s2[j];

	concatenated[i + j] = '\0';

	return (concatenated);
}
