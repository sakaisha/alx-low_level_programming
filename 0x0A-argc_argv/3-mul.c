#include <stdio.h>
#include "main.h"

/**
 * custom_atoi - converts a string to an integer
 * @str: string to be converted
 *
 * Return: the integer converted from the string
 */
int custom_atoi(char *str)
{
    int i, negativeCount, digit, length, foundDigit, number;

    i = 0;
    negativeCount = 0;
    digit = 0;
    length = 0;
    foundDigit = 0;
    number = 0;

    while (str[length] != '\0')
        length++;

    while (i < length && foundDigit == 0)
    {
        if (str[i] == '-')
            ++negativeCount;

        if (str[i] >= '0' && str[i] <= '9')
        {
            digit = str[i] - '0';
            if (negativeCount % 2)
                digit = -digit;
            number = number * 10 + digit;
            foundDigit = 1;
            if (str[i + 1] < '0' || str[i + 1] > '9')
                break;
            foundDigit = 0;
        }
        i++;
    }

    if (foundDigit == 0)
        return (0);
}

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
    int result, operand1, operand2;

    if (argc != 3)
    {
        printf("Error: Provide exactly two numbers as arguments.\n");
        return (1);
    }

    operand1 = custom_atoi(argv[1]);
    operand2 = custom_atoi(argv[2]);
    result = operand1 * operand2;

    printf("Result: %d\n", result);

    return (0);
}
