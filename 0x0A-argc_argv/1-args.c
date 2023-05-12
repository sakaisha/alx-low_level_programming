#include <stdio.h>
#include "main.h"

/**
 * main - arguments added to the program
 * @argc: number 
 * @argv: array 
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
