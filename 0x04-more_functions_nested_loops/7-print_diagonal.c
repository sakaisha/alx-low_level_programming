#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Number of times the character \ is printed
 *
 * Description: Prints a diagonal line of length n using backslash (\) character
 * and spaces. If n is 0 or negative, the function only prints a newline.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (j == i)
					_putchar('\\');
				else if (j < i)
					_putchar(' ');
			}

			_putchar('\n');
		}
	}
}
