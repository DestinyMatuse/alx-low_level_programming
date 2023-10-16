#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - calculate the length of a string
 * @str: the input string
 *
 * Return: the length of the string
 */
int _strlen(const char *str)
{
    int length = 0;

    while (str[length] != '\0')
    {
        length++;
    }
    return length;
}

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    printf("%d\n", _strlen("My Dyn Lib"));
    return EXIT_SUCCESS;
}

