#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments into a string
 * @ac: Number of arguments
 * @av: Array of argument strings
 * Return: Pointer to concatenated string or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int i, j, total_length = 0, current_pos = 0;
	char *result;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_length++;
		total_length++;
	}

	result = malloc(sizeof(char) * (total_length + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			result[current_pos] = av[i][j];
			current_pos++;
		}
		result[current_pos] = '\n';
		current_pos++;
	}

	result[current_pos] = '\0';

	return (result);
}

