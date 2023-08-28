#include <stdlib.h>
#include "main.h"

/**
 * custom_word_count - Helper function to count the number of words in a string
 * @input_str: String to evaluate
 *
 * Return: Number of words
 */
int custom_word_count(char *input_str)
{
	int word_flag, char_index, word_count;

	word_flag = 0;
	word_count = 0;

	for (char_index = 0; input_str[char_index] != '\0'; char_index++)
	{
		if (input_str[char_index] == ' ')
			word_flag = 0;
		else if (word_flag == 0)
		{
			word_flag = 1;
			word_count++;
		}
	}

	return (word_count);
}

/**
 * custom_str_to_words - Splits a string into words
 * @str_to_split: String to split
 *
 * Return: Pointer to an array of strings (Success) or NULL (Error)
 */
char **custom_str_to_words(char *str_to_split)
{
	char **word_matrix, *temp_str;
	int i, word_index = 0, str_len = 0, word_count, char_index = 0;
	int word_start, word_end;

	while (*(str_to_split + str_len))
		str_len++;
	word_count = custom_word_count(str_to_split);
	if (word_count == 0)
		return (NULL);

	word_matrix = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (word_matrix == NULL)
		return (NULL);

	for (i = 0; i <= str_len; i++)
	{
		if (str_to_split[i] == ' ' || str_to_split[i] == '\0')
		{
			if (char_index)
			{
				word_end = i;
				temp_str = (char *)malloc(sizeof(char) * (char_index + 1));
				if (temp_str == NULL)
					return (NULL);
				while (word_start < word_end)
					*temp_str++ = str_to_split[word_start++];
				*temp_str = '\0';
				word_matrix[word_index] = temp_str - char_index;
				word_index++;
				char_index = 0;
			}
		}
		else if (char_index++ == 0)
		{
			word_start = i;
		}
	}

	word_matrix[word_index] = NULL;
	return (word_matrix);
}

