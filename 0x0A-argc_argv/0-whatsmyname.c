#include <stdio.h>
#include "main.h"

/**
 * main - beginning point
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
