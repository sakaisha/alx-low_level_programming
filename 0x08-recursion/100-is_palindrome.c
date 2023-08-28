#include "main.h"

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 if it's not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - Recursively checks if the string is a palindrome.
 * @s: The string to be checked.
 * @start: The starting index for comparison.
 * @end: The ending index for comparison.
 *
 * Return: 1 if palindrome, 0 if not.
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (*(s + start) != *(s + end))
		return (0);

	return (check_palindrome(s, start + 1, end - 1));
}
