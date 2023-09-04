#include <stdlib.h>
#include <string.h>

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: On success, returns a pointer to an array of strings (words).
 *         The last element of the array is NULL.
 *         On failure, returns NULL.
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, count, len, word_len;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	count = 0;
	len = strlen(str);

	/* Count the number of words */
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}

	if (count == 0)
		return (NULL);

	/* Allocate memory for the array of words */
	words = malloc((count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	j = 0;

	/* Split the string into words */
	while (i < len && j < count)
	{
		while (str[i] == ' ')
			i++;

		word_len = 0;
		while (str[i + word_len] != ' ' && str[i + word_len] != '\0')
			word_len++;

		words[j] = malloc((word_len + 1) * sizeof(char));
		if (words[j] == NULL)
		{
			for (k = 0; k < j; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < word_len; k++)
			words[j][k] = str[i++];
		words[j][k] = '\0';

		j++;
	}

	words[j] = NULL;

	return (words);
}
