#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * is_all_digits - Checks if a string consists of digits
 * @str: The input string
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int is_all_digits(char *str)
{
	unsigned int index;

	index = 0;
	while (index < strlen(str)) /* Iterate through the string */
	{
		if (!isdigit(str[index])) /* Check if the character is a digit */
			return (0);

		index++;
	}
	return (1);
}

/**
 * main - Prints the sum of valid numeric arguments
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int index;
	int str_to_int;
	int total_sum = 0;

	index = 1;
	while (index < argc) /* Iterate through the argument array */
	{
		if (is_all_digits(argv[index]))
		{
			str_to_int = atoi(argv[index]); /* Convert string to integer using atoi */
			total_sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		index++;
	}

	printf("%d\n", total_sum); /* Print the total sum */

	return (0);
}
