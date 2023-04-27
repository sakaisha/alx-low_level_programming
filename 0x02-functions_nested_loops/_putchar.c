#include "main.h"
	#include <unistd.h>
/**

*_putchar - This function writes a single character to the standard output stream (stdout).
*@c: The character that will be printed to stdout.
*Return: Returns 1 on successful execution of the function.
*If there is an error, -1 will be returned and the error will be set appropriately.

*/

int _putchar(char c)
	{
		return (write(1, &c, 1));
	}
