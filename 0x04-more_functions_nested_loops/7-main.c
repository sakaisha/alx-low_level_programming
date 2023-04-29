#include "main.h"

/**
 * main - Entry point
 *
 * Description: Calls print_diagonal function to print diagonal lines of
 * varying lengths.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(10);
	print_diagonal(-4);

	return (0);
}
